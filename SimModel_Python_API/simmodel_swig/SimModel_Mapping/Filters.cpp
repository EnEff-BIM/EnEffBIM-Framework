#include "Filters.h"
#include "SimMapping.h"
#include "../SimModel_PyCallBack/SimPyCallBack.h"

// get the lower and upper bounding iterators refering to the rules
std::pair<std::multimap<std::string, Data_Model_Map::Component_Map_One2One_iterator>::iterator, std::multimap<std::string, Data_Model_Map::Component_Map_One2One_iterator>::iterator> RuleFilter::getComRuleOne2One(std::string SimComponentName)
{
	return ComRuleOne2OneList.equal_range(SimComponentName);
}

std::pair<std::multimap<std::string, Data_Model_Map::Component_Map_One2Many_iterator>::iterator, std::multimap<std::string, Data_Model_Map::Component_Map_One2Many_iterator>::iterator> RuleFilter::getComRuleOne2Many(std::string SimComponentName)
{
	return ComRuleOne2ManyList.equal_range(SimComponentName);
}

// check whether the component is necessary to be translated into Modelica
bool RuleFilter::isComRuleOne2One(std::string SimComponentName)
{
	if( ComRuleOne2OneList.find(SimComponentName) != ComRuleOne2OneList.end() )
		return true;
	else
		return false;
}

bool RuleFilter::isComRuleOne2Many(std::string SimComponentName)
{
	if( ComRuleOne2ManyList.find(SimComponentName) != ComRuleOne2ManyList.end() )
		return true;
	else
		return false;
}

// property data filters
MappedProperty RuleFilter::getProRuleGapData(std::string _id)
{
	// save mapped property
	MappedProperty _mapPro;
	
	// get the real property Gap rule
	std::map<std::string, Data_Model_Map::Property_Map_Gap_iterator>::iterator _it = ProRuleGapList.find(_id);
	if(_it != ProRuleGapList.end())
	{
		_mapPro.setPropertyName(_it->second->TargetPropertyName());
		if(_it->second->TargetLocation().present())
			_mapPro.setPropertyLocation(_it->second->TargetLocation().get().front());
		// save numbers
		if(_it->second->DefaultValueNumber().present())
		{
			_mapPro.setValueType("Number");
			_mapPro.setValueNumber(_it->second->DefaultValueNumber().get());
		}
		// save string value
		if(_it->second->DefaultValueString().present())
		{
			_mapPro.setValueType("String");
			_mapPro.setValueString(_it->second->DefaultValueString().get());
		}
		// save record instance
		if(_it->second->RecordInstance().present())
			_mapPro.setRecordInstance(_it->second->RecordInstance().get());
		// save record location
		if(_it->second->RecordLocation().present())
			_mapPro.setRecordLocation(_it->second->RecordLocation().get());
	}

	return _mapPro;
}

MappedProperty RuleFilter::getProRuleOne2OneData(std::string SimComponentId, std::string _id)
{
	// save mapped property
	MappedProperty _mapPro;
	
	// get the real property One2One rule
	std::map<std::string, Data_Model_Map::Property_Map_One2One_iterator>::iterator _it = ProRuleOne2OneList.find(_id);
	if(_it!=ProRuleOne2OneList.end())
	{
		_mapPro.setPropertyName(_it->second->TargetPropertyName());
		// save target location
		if(_it->second->TargetLocation().present())
			_mapPro.setPropertyLocation(_it->second->TargetLocation().get().front());
		// save record instance
		if(_it->second->RecordInstance().present())
			_mapPro.setRecordInstance(_it->second->RecordInstance().get());
		// save record location
		if(_it->second->RecordLocation().present())
			_mapPro.setRecordLocation(_it->second->RecordLocation().get());

		// save property value
		if(_callback)
		{
			std::string _refType = _callback->getRefValueType(SimComponentId, _it->second->RefValue().front());
			if(_refType == "String")
			{
				_mapPro.setValueType("String");
				std::string _refValue = "";
				_refValue = _callback->getRefStringValue(SimComponentId, _it->second->RefValue().front());

				if(_refValue != "")
					_mapPro.setValueString(_refValue);
			}
			else if(_refType == "Number")
			{
				// retrieve the property value
				_mapPro.setValueType("Number");
				double _refValue = std::numeric_limits<double>::max();
				_refValue = _callback->getRefNumberValue(SimComponentId, _it->second->RefValue().front());

				if(_refValue != std::numeric_limits<double>::max())
					_mapPro.setValueNumber(_refValue);
			}
		}
	}

	return _mapPro;
}

// set the left node
void RuleFilter::setLeftChild(int _funItPos, int leftNeighborPos, int _deep)
{
	if(!_treeNodeList[leftNeighborPos].hasParent)
	{
		// building parent-child link
		_treeNodeList[_funItPos].hasLeftChild = true;
		_treeNodeList[_funItPos].leftChildId = leftNeighborPos;
		_treeNodeList[leftNeighborPos].hasParent = true;
		_treeNodeList[leftNeighborPos].parentId = _funItPos;
	}
	else
	{
		//if(_deep>10)
			//return;
		// get parent
		setLeftChild(_funItPos, _treeNodeList[leftNeighborPos].parentId, _deep+1);
	}
}

MappedProperty RuleFilter::getProRuleTransformationData(std::string SimComponentId, std::string _id, ::std::auto_ptr< ::schema::simxml::Model::SimModel >& simSysData)
{
	// save mapped property
	MappedProperty _mapPro;

	// get the real property Transformation rule
	std::map<std::string, Data_Model_Map::Property_Map_Transformation_iterator>::iterator _it = ProRuleTransforList.find(_id);
	if(_it!=ProRuleTransforList.end())
	{
		// get input parameter
		std::map<std::string, Data_Model_Map::InputParameter_iterator>::iterator _inputParaIt = InputParaList.find(_it->second->InputParameterName().front());
		// get output parameter
		std::map<std::string, Data_Model_Map::OutputParameter_iterator>::iterator _outputParaIt = OutputParaList.find(_it->second->OutputParameterName().front());
		
		if(_inputParaIt != InputParaList.end() && _outputParaIt != OutputParaList.end() && _it->second->Function().size())
		{
			// set output property name
			_mapPro.setPropertyName(_outputParaIt->second->ParameterName().front());

			// get input parameter name
			std::string _inputParaName = _inputParaIt->second->ParameterName().front();
			// get input paramter value type
			// default type is single value
			std::string _inputParaType = "single";
			if(_inputParaIt->second->ValueType().present())
				_inputParaType = _inputParaIt->second->ValueType().get();
			// get value
			if(_inputParaType=="single")
			{
				// Type: RefValue
				if(_inputParaIt->second->RefValue().present() && _callback)
				{
					// get input paramter value
					std::string _refType = _callback->getRefValueType(SimComponentId, _inputParaIt->second->RefValue().get().front());
					if(_refType == "Number")
					{
						double _inputParaRefValue = std::numeric_limits<double>::max();
						_inputParaRefValue = _callback->getRefNumberValue(SimComponentId, _inputParaIt->second->RefValue().get().front());
						// save to structure

						// testing
						// retrieve the property value
						//_mapPro.setValueType("Number");
						//if(_inputParaRefValue != std::numeric_limits<double>::max())
							//_mapPro.setValueNumber(_inputParaRefValue);
					}
					// else if(_refType == "String")
				}
				//else if(_inputParaIt->second->ValueList().present())
			}
			else if(_inputParaType=="range")
			{
				// get input paramter value lower bounding
				double _inputParaLowerBoundValue = std::numeric_limits<double>::max();
				if(_inputParaIt->second->LowerBoundValue().present())
				{
					_inputParaLowerBoundValue = _inputParaIt->second->LowerBoundValue().get();
				}
				else if(_inputParaIt->second->LowerBoundRef().present() && _callback)
				{
					if(_inputParaIt->second->LowerBoundRef().get().size()==1)
					{
						// get input paramter lower bounding value
						std::string _refType = _callback->getRefValueType(SimComponentId, _inputParaIt->second->LowerBoundRef().get().front());
						if(_refType == "Number")
							_inputParaLowerBoundValue = _callback->getRefNumberValue(SimComponentId, _inputParaIt->second->LowerBoundRef().get().front());
					}
					else
					{
						std::string _refType = _callback->getRefValueType(SimComponentId, _inputParaIt->second->LowerBoundRef().get().at(0));
						if(_refType == "String")
						{
							// get a RefId
							std::string _lowerBoundRefId = _callback->getRefStringValue(SimComponentId, _inputParaIt->second->LowerBoundRef().get().at(0));
							// get the referenced class instance for cubic interpolation
							if(_inputParaIt->second->LowerBoundRef().get().at(1)=="SimPerformanceCurve_Mathematical_Cubic")
							{
								for(SimModel::SimPerformanceCurve_Mathematical_Cubic_iterator _itSimCurveIt=simSysData->SimPerformanceCurve_Mathematical_Cubic().begin(); _itSimCurveIt!=simSysData->SimPerformanceCurve_Mathematical_Cubic().end(); ++_itSimCurveIt)
								{
									if(_itSimCurveIt->RefId()==_lowerBoundRefId)
									{
										
										if(_inputParaIt->second->LowerBoundRef().get().at(2)=="SimPerfCurve_MinValX" && _itSimCurveIt->SimPerfCurve_MinValX().present())
											_inputParaLowerBoundValue = _itSimCurveIt->SimPerfCurve_MinValX().get();

										break;
									}
								}
							}
						}
					}
				}

				// get input paramter value upper bounding
				double _inputParaUpperBoundValue = std::numeric_limits<double>::max();
				if(_inputParaIt->second->UpperBoundValue().present())
				{
					_inputParaUpperBoundValue = _inputParaIt->second->UpperBoundValue().get();
				}
				else if(_inputParaIt->second->UpperBoundRef().present() && _callback)
				{
					if(_inputParaIt->second->UpperBoundRef().get().size()==1)
					{
						// get input paramter upper bounding value
						std::string _refType = _callback->getRefValueType(SimComponentId, _inputParaIt->second->UpperBoundRef().get().front());
						if(_refType == "Number")
							_inputParaUpperBoundValue = _callback->getRefNumberValue(SimComponentId, _inputParaIt->second->UpperBoundRef().get().front());
					}
					else
					{
						std::string _refType = _callback->getRefValueType(SimComponentId, _inputParaIt->second->UpperBoundRef().get().at(0));
						if(_refType == "String")
						{
							// get a RefId
							std::string _upperBoundRefId = _callback->getRefStringValue(SimComponentId, _inputParaIt->second->UpperBoundRef().get().at(0));
							// get the referenced class instance for cubic interpolation
							if(_inputParaIt->second->UpperBoundRef().get().at(1)=="SimPerformanceCurve_Mathematical_Cubic")
							{
								for(SimModel::SimPerformanceCurve_Mathematical_Cubic_iterator _itSimCurveIt=simSysData->SimPerformanceCurve_Mathematical_Cubic().begin(); _itSimCurveIt!=simSysData->SimPerformanceCurve_Mathematical_Cubic().end(); ++_itSimCurveIt)
								{
									if(_itSimCurveIt->RefId()==_upperBoundRefId)
									{
										
										if(_inputParaIt->second->UpperBoundRef().get().at(2)=="SimPerfCurve_MaxValX" && _itSimCurveIt->SimPerfCurve_MaxValX().present())
											_inputParaUpperBoundValue = _itSimCurveIt->SimPerfCurve_MaxValX().get();

										break;
									}
								}
							}
						}
					}
				}
			}

			// parse function
			if(_it->second->Function().front() != "=")
			{
				// clear cache: can be optimized by saving parsed function
				_treeNodeList.resize(0);

				// get result name
				std::string _fun_result_name = _it->second->Function().front();
				// minimum number of function item: result = input parameter
				if(_it->second->Function().size()>=3 && _it->second->Function().at(1)=="=")
				{
					// parse internal items
					// beginning from the right side of the '='
					/*bool isConditionalOperator = false;
					for(unsigned int _funIt=2; _funIt<_it->second->Function().size(); ++_funIt)
					{
						if(_it->second->Function().at(_funIt)=="==")
						{
							// set flag
							isConditionalOperator = true;
							// process


							break;
						}
					}*/

					// calcuation operation
					//if(!isConditionalOperator)
					{
						for(unsigned int _funIt=2; _funIt<_it->second->Function().size(); ++_funIt)
						{
							std::string _fun_item = _it->second->Function().at(_funIt);
							// parse tree node
							if(_fun_item=="+" || _fun_item=="-" || _fun_item=="*" || _fun_item=="/" || _fun_item=="==" || _fun_item==":" || _fun_item=="?")
							{
								// create a new node
								//if(_treeNodeList.size() < _funIt-1)
								{
									_treeNode _node;
									_node._nodeName = _fun_item;
									_treeNodeList.push_back(_node);
								}
							}
							else if(_fun_item=="\"")
							{
								// create a new node
								//if(_treeNodeList.size() < _funIt-1)
								{
									_treeNode _node;
									_node._nodeName = _fun_item;
									_treeNodeList.push_back(_node);
								}
								// check neighboring constant string item
								if(_funIt+1<_it->second->Function().size() && _funIt+2<_it->second->Function().size())
								{
									std::string _cstStrItem = _it->second->Function().at(_funIt+1);
									if(_cstStrItem!="+" && _cstStrItem!="-" && _cstStrItem!="*" && _cstStrItem!="/" && _cstStrItem!="==" && _cstStrItem!=":" && _cstStrItem!="?" && _it->second->Function().at(_funIt+2)=="\"")
									{
										// save constant string item as a leaf
										_treeNode _leaf;
										_leaf._nodeName = _cstStrItem;
										_leaf.isLeaf = true;
										_leaf.isConstant = true;
										_treeNodeList.push_back(_leaf);
										// move to next item
										++_funIt;
									}
								}
							}
							else
							{
								// param, coeff, constant
								// create a new leaf
								//if(_treeNodeList.size() < _funIt-1)
								{
									_treeNode _leaf;
									_leaf._nodeName = _fun_item;
									_leaf.isLeaf = true;

									// whether _fun_item is a constant?
									unsigned int __i = 0;
									while(__i < _fun_item.size() && ((_fun_item[__i]=='0' || _fun_item[__i]=='1' || _fun_item[__i]=='2' || _fun_item[__i]=='3' || _fun_item[__i]=='4' || _fun_item[__i]=='5' || _fun_item[__i]=='6' || _fun_item[__i]=='7' || _fun_item[__i]=='8' || _fun_item[__i]=='9') || _fun_item[__i]=='.' && __i>0))
									{
										++__i;
									}
									// Yes, convert to double
									if(!_fun_item.empty() && __i==_fun_item.size())
									{
									
										_leaf.isConstant = true;
										_leaf.isConstantNumber = true;
										_leaf.constantValue = std::stod(_fun_item);
									}

									// add the leaf
									_treeNodeList.push_back(_leaf);
								}
							}

							// parse left neighborhood
							if(_funIt > 2 && _it->second->Function().at(_funIt)!="\"")
							{
								// get current node
								if(_treeNodeList[_funIt-2].isLeaf)
								{
									// leaf node: parameter, constant number, constant string
									// check left side & right side, skip \"
									// 1st left side
									if(!_treeNodeList[_funIt-2].hasParent)
									{
										int leftNeighbor = _funIt - 1;
										while(_it->second->Function().at(leftNeighbor)=="\"" && leftNeighbor>2)
											--leftNeighbor;

										// 2nd right side
										if(_funIt+1<_it->second->Function().size())
										{
											unsigned int rightNeighbor = _funIt + 1;
											while(rightNeighbor<_it->second->Function().size() && _it->second->Function().at(rightNeighbor)=="\"")
												++rightNeighbor;

											// compare left and right
											if(rightNeighbor<_it->second->Function().size() && _it->second->Function().at(rightNeighbor)!="\"" && _it->second->Function().at(leftNeighbor)!="\"" && !_treeNodeList[rightNeighbor-2].isLeaf && !_treeNodeList[leftNeighbor-2].isLeaf)
											{
												// only add left item if it's possible
												int _rightRank = _operatorRankMap.find(_it->second->Function().at(rightNeighbor))->second;
												int _leftRank = _operatorRankMap.find(_it->second->Function().at(leftNeighbor))->second;
												if(_leftRank>=_rightRank && !_treeNodeList[leftNeighbor-2].hasRightChild)
												{
													// add parent-child link
													_treeNodeList[leftNeighbor-2].hasRightChild = true;
													_treeNodeList[leftNeighbor-2].rightChildId = _funIt-2;
													_treeNodeList[_funIt-2].hasParent = true;
													_treeNodeList[_funIt-2].parentId = leftNeighbor-2;
													// testing
													_mapPro.setValueType("String");
													_mapPro.setValueString(_treeNodeList[_funIt-2]._nodeName);
												}
											}
										}
										else
										{
											// only left checking
											if(_it->second->Function().at(leftNeighbor)!="\"" && !_treeNodeList[leftNeighbor-2].isLeaf && !_treeNodeList[leftNeighbor-2].hasRightChild)
											{
												// add parent-child link
												_treeNodeList[leftNeighbor-2].hasRightChild = true;
												_treeNodeList[leftNeighbor-2].rightChildId = _funIt-2;
												_treeNodeList[_funIt-2].hasParent = true;
												_treeNodeList[_funIt-2].parentId = leftNeighbor-2;
											}
										}
									}					
								}
								else
								{
									// operator: 7
									// check left side: skip \"
									int leftNeighbor = _funIt - 1;
									while(_it->second->Function().at(leftNeighbor)=="\"" && leftNeighbor>2)
										--leftNeighbor;
									// check left item
									if(_it->second->Function().at(leftNeighbor)!="\"" && !_treeNodeList[_funIt-2].hasLeftChild)
									{
										// set the left node
										// building parent-child link
										setLeftChild(_funIt-2, leftNeighbor-2, 0);
										// testing
										//_mapPro.setValueType("String");
										//_mapPro.setValueString(_treeNodeList[_funIt-2]._nodeName);
										//_mapPro.setValueType("Number");
										//_mapPro.setValueNumber(_treeNodeList[_funIt-2].parentId);
									}
								}
							}
						}
					}
				}
			}
			
			//_mapPro.setValueType("String");
			//_mapPro.setValueString(_fun_result_name);
			// testing
			//_mapPro.setValueType("Number");
			//_mapPro.setValueNumber(_const_value);

			
		}

		// save record instance
		if(_it->second->RecordInstance().present())
			_mapPro.setRecordInstance(_it->second->RecordInstance().get());
		// save record location
		if(_it->second->RecordLocation().present())
			_mapPro.setRecordLocation(_it->second->RecordLocation().get());
	}

	return _mapPro;
}

// check whether the component is necessary to be translated
bool RuleFilter::isMappedComponent(SimHierarchyNode& _simHierarchyNode)
{
	return isComRuleOne2One(_simHierarchyNode.ClassType()) || isComRuleOne2Many(_simHierarchyNode.ClassType());
}

// translate the SimModel component saved in the hierarchy node
std::vector<MappedComponent> RuleFilter::getMappedData(SimHierarchyNode& _simHierarchyNode)
{
	// save mapped data
	std::vector<MappedComponent> _mapComList;

	// component One2One mapping
	if(isComRuleOne2One(_simHierarchyNode.ClassType()))
	{
		// component level
		// load mapping rules
		std::pair<std::multimap<std::string, Data_Model_Map::Component_Map_One2One_iterator>::iterator, std::multimap<std::string, Data_Model_Map::Component_Map_One2One_iterator>::iterator> retIt = getComRuleOne2One(_simHierarchyNode.ClassType());
		// iterate rules
		for(std::multimap<std::string, Data_Model_Map::Component_Map_One2One_iterator>::iterator _it=retIt.first; _it!=retIt.second; ++_it)
		{
			// create mapped component
			MappedComponent _mapCom;
			setMappingRuleName(_mapCom, "Component_Map_One2One");
			setTargetComponentName(_mapCom, _it->second->TargetComponentName());
			if(_it->second->TargetLocation().present())
				setTargetLocation(_mapCom, _it->second->TargetLocation().get().front());

			// property level
			// property rule Gap
			for(Component_Map_One2One::Property_Map_Gap_Name_iterator _proMapGapIt=_it->second->Property_Map_Gap_Name().begin(); _proMapGapIt!=_it->second->Property_Map_Gap_Name().end(); ++_proMapGapIt)
			{
				// create mapped property
				MappedProperty _mapPro = getProRuleGapData(*_proMapGapIt);
				// add property
				_mapCom.addMappedProperty(_mapPro);
			}

			if(_simHierarchyNode.ClassType()=="SimFlowSegment_Pipe_Indoor")
			{
				SimFlowSegment_Pipe_Indoor* _simPipeObj = static_cast<SimFlowSegment_Pipe_Indoor*>(_simHierarchyNode._SimRootObject);
				
				if(_it->second->TargetLocation().get().front()=="AixLib.Fluid.FixedResistances.StaticPipe")
				{
					// property
					if(_simPipeObj->SimFlowSeg_PipesideDiam().present())
					{
						MappedProperty _mapPro;
						_mapPro.setPropertyName("D");
						_mapPro.setValueType("Number");
						_mapPro.setValueNumber(_simPipeObj->SimFlowSeg_PipesideDiam().get()/(double)1000.0);
						// add property
						_mapCom.addMappedProperty(_mapPro);
					}
				}
				else if(_it->second->TargetLocation().get().front()=="BuildingSystems.Fluid.FixedResistances.FixedResistanceDpM")
				{
					// property
					if(_simPipeObj->SimFlowSeg_PipesideDiam().present())
					{
						MappedProperty _mapPro;
						_mapPro.setPropertyName("dh");
						_mapPro.setValueType("Number");
						_mapPro.setValueNumber(_simPipeObj->SimFlowSeg_PipesideDiam().get()/(double)1000.0);
						// add property
						_mapCom.addMappedProperty(_mapPro);
					}
				}
			}
			else if(_simHierarchyNode.ClassType()=="SimFlowEnergyTransferStorage_HotWaterTank_Expansion")
			{
				SimFlowEnergyTransferStorage_HotWaterTank_Expansion* _simModelObj = static_cast<SimFlowEnergyTransferStorage_HotWaterTank_Expansion*>(_simHierarchyNode._SimRootObject);

				if(_it->second->TargetLocation().get().front()=="AixLib.Fluid.Storage.ExpansionVessel")
				{
					// property
					if(_simModelObj->EffectiveCapacity().present())
					{
						MappedProperty _mapPro;
						_mapPro.setPropertyName("V_start");
						_mapPro.setValueType("Number");
						_mapPro.setValueNumber(_simModelObj->EffectiveCapacity().get());
						// add property
						_mapCom.addMappedProperty(_mapPro);
					}
				}
			}


			// add mapped component
			_mapComList.push_back(_mapCom);
		}
	}

	// component One2Many mapping
	if(isComRuleOne2Many(_simHierarchyNode.ClassType()))
	{
		// component level
		// load mapping rules
		std::pair<std::multimap<std::string, Data_Model_Map::Component_Map_One2Many_iterator>::iterator, std::multimap<std::string, Data_Model_Map::Component_Map_One2Many_iterator>::iterator> retIt = getComRuleOne2Many(_simHierarchyNode.ClassType());
		// iterate rules
		for(std::multimap<std::string, Data_Model_Map::Component_Map_One2Many_iterator>::iterator _it=retIt.first; _it!=retIt.second; ++_it)
		{	// iterate component mapping group id
			for(Component_Map_One2Many::ComponentMappingGroupName_iterator subIt=_it->second->ComponentMappingGroupName().begin(); subIt!=_it->second->ComponentMappingGroupName().end(); ++subIt)
			{
				// get the real mapping group
				if(ComMappingGroupList.find(*subIt) != ComMappingGroupList.end())
				{
					Data_Model_Map::ComponentMappingGroup_iterator _comMapGroupIt = ComMappingGroupList.find(*subIt)->second;
					// create mapped component
					MappedComponent _mapCom;
					setMappingRuleName(_mapCom, "Component_Map_One2Many");
					setTargetComponentName(_mapCom, _comMapGroupIt->TargetComponentName());
					if(_comMapGroupIt->TargetLocation().present())
						setTargetLocation(_mapCom, _comMapGroupIt->TargetLocation().get().front());

					// property level
					// property rule Gap
					for(ComponentMappingGroup::Property_Map_Gap_Name_iterator _proMapGapIt=_comMapGroupIt->Property_Map_Gap_Name().begin(); _proMapGapIt!=_comMapGroupIt->Property_Map_Gap_Name().end(); ++_proMapGapIt)
					{
						// create mapped property
						MappedProperty _mapPro = getProRuleGapData(*_proMapGapIt);
						// add property
						_mapCom.addMappedProperty(_mapPro);
					}

					// move to Python later
					if(_simHierarchyNode.ClassType()=="SimFlowPlant_Boiler_BoilerHotWater")
					{
						SimFlowPlant_Boiler_BoilerHotWater* _simBoilerObj = static_cast<SimFlowPlant_Boiler_BoilerHotWater*>(_simHierarchyNode._SimRootObject);

						if(_comMapGroupIt->TargetLocation().get().front()=="AixLib.Fluid.HeatExchangers.Boiler")
						{
							// property
							if(_simBoilerObj->SimFlowPlant_NomCap().present())
							{
								MappedProperty _mapPro;
								_mapPro.setPropertyName("Q_flow_max");
								_mapPro.setValueType("Number");
								_mapPro.setValueNumber(_simBoilerObj->SimFlowPlant_NomCap().get());
								// add property
								_mapCom.addMappedProperty(_mapPro);
							}

							if(_simBoilerObj->SimFlowPlant_NrmlizedBoilerEffCurveName().present())
							{
								_simBoilerObj->SimFlowPlant_NrmlizedBoilerEffCurveName().get();
							}
						}
						else if(_comMapGroupIt->TargetLocation().get().front()=="BuildingSystems.Fluid.HeatExchangers.HeaterCooler_T")
						{
							// property
							if(_simBoilerObj->SimFlowPlant_NomCap().present())
							{
								MappedProperty _mapPro;
								_mapPro.setPropertyName("Q_flow_maxHeat");
								_mapPro.setValueType("Number");
								_mapPro.setValueNumber(_simBoilerObj->SimFlowPlant_NomCap().get());
								// add property
								_mapCom.addMappedProperty(_mapPro);
							}
						}
					}
					else if(_simHierarchyNode.ClassType()=="SimFlowMover_Pump_VariableSpeedReturn")
					{
						SimFlowMover_Pump_VariableSpeedReturn* _simPumpObj = static_cast<SimFlowMover_Pump_VariableSpeedReturn*>(_simHierarchyNode._SimRootObject);

						if(_comMapGroupIt->TargetLocation().get().front()=="AixLib.Fluid.Movers.Pump")
						{
							// property
							if(_simPumpObj->SimFlowMover_RatedFlowRate().present())
							{
								MappedProperty _mapPro;
								_mapPro.setPropertyName("V_flow_max");
								_mapPro.setValueType("Number");
								_mapPro.setValueNumber(_simPumpObj->SimFlowMover_RatedFlowRate().get());
								// add property
								_mapCom.addMappedProperty(_mapPro);

								// Pump head for min and max rotational speed
								if(_simPumpObj->SimFlowMover_Coef1OfThePartLoadPerfCurve().present() && _simPumpObj->SimFlowMover_Coef2OfThePartLoadPerfCurve().present() && _simPumpObj->SimFlowMover_Coef3OfThePartLoadPerfCurve().present() && _simPumpObj->SimFlowMover_Coef4OfThePartLoadPerfCurve().present())
								{
									double _c1 = _simPumpObj->SimFlowMover_Coef1OfThePartLoadPerfCurve().get();
									double _c2 = _simPumpObj->SimFlowMover_Coef2OfThePartLoadPerfCurve().get();
									double _c3 = _simPumpObj->SimFlowMover_Coef3OfThePartLoadPerfCurve().get();
									double _c4 = _simPumpObj->SimFlowMover_Coef4OfThePartLoadPerfCurve().get();
									int _dim = 9;
									double _step = _simPumpObj->SimFlowMover_RatedFlowRate().get() / (double)_dim;


									MappedProperty _mapPro4;
									_mapPro4.setPropertyName("minMaxHead");
									_mapPro4.setValueType("Matrix");
									// set matrix
									std::vector<std::vector<double> > _matrix;
									_matrix.resize(_dim+1);
									
									double _v_flow=0;
									for(int _time = 0; _time<_dim+1; ++_time)
									{
										double _RS = _c1 + _c2*_v_flow + _c3*_v_flow*_v_flow + _c4*_v_flow*_v_flow*_v_flow;

										_matrix[_time].push_back(_v_flow);
										_matrix[_time].push_back(_RS);
										_matrix[_time].push_back(_RS);

										_v_flow += _step;
										// _v_flow<=_simPumpObj->SimFlowMover_RatedFlowRate().get()
									}

									_mapPro4.setValueMatrix(_matrix);
									_mapPro4.setRecordInstance("MinMaxCharacteristics");
									_mapPro4.setRecordLocation("AixLib.DataBase.Pumps.MinMaxCharacteristicsBaseDataDefinition");
									// add property
									_mapCom.addMappedProperty(_mapPro4);
								}
							}

							// transformation
							if(_simPumpObj->SimFlowMover_RatedPumpHead().present())
							{
								MappedProperty _mapPro;
								_mapPro.setPropertyName("Head_max");
								_mapPro.setValueType("Number");
								_mapPro.setValueNumber(_simPumpObj->SimFlowMover_RatedPumpHead().get()*0.0001019716);
								// add property
								_mapCom.addMappedProperty(_mapPro);
							}
						}
						else if(_comMapGroupIt->TargetLocation().get().front()=="BuildingSystems.Fluid.Movers.FlowControlled_dp")
						{
							// property
							if(_simPumpObj->SimFlowMover_RatedFlowRate().present())
							{
								MappedProperty _mapPro;
								_mapPro.setPropertyName("m_flow_nominal");
								_mapPro.setValueType("Number");
								_mapPro.setValueNumber(_simPumpObj->SimFlowMover_RatedFlowRate().get());
								// add property
								_mapCom.addMappedProperty(_mapPro);

								// Pump head for min and max rotational speed
								if(_simPumpObj->SimFlowMover_Coef1OfThePartLoadPerfCurve().present() && _simPumpObj->SimFlowMover_Coef2OfThePartLoadPerfCurve().present() && _simPumpObj->SimFlowMover_Coef3OfThePartLoadPerfCurve().present() && _simPumpObj->SimFlowMover_Coef4OfThePartLoadPerfCurve().present())
								{
									double _c1 = _simPumpObj->SimFlowMover_Coef1OfThePartLoadPerfCurve().get();
									double _c2 = _simPumpObj->SimFlowMover_Coef2OfThePartLoadPerfCurve().get();
									double _c3 = _simPumpObj->SimFlowMover_Coef3OfThePartLoadPerfCurve().get();
									double _c4 = _simPumpObj->SimFlowMover_Coef4OfThePartLoadPerfCurve().get();
									int _dim = 9;
									double _step = _simPumpObj->SimFlowMover_RatedFlowRate().get() / (double)_dim;


									MappedProperty _mapPro4;
									_mapPro4.setPropertyName("per");
									_mapPro4.setValueType("Matrix");
									// set matrix
									std::vector<std::vector<double> > _matrix;
									_matrix.resize(_dim+1);
									
									double _v_flow=0;
									for(int _time = 0; _time<_dim+1; ++_time)
									{
										double _RS = _c1 + _c2*_v_flow + _c3*_v_flow*_v_flow + _c4*_v_flow*_v_flow*_v_flow;

										_matrix[_time].push_back(_v_flow);
										_matrix[_time].push_back(_RS);
										_matrix[_time].push_back(_RS);

										_v_flow += _step;
										// _v_flow<=_simPumpObj->SimFlowMover_RatedFlowRate().get()
									}

									_mapPro4.setValueMatrix(_matrix);
									_mapPro4.setRecordInstance("FlowControlled");
									_mapPro4.setRecordLocation("BuildingSystems.Fluid.Movers.Data.FlowControlled");
									// add property
									_mapCom.addMappedProperty(_mapPro4);
								}
							}
						}
					}
					else if(_simHierarchyNode.ClassType()=="SimFlowSegment_Pipe_Indoor")
					{
						SimFlowSegment_Pipe_Indoor* _simPipeObj = static_cast<SimFlowSegment_Pipe_Indoor*>(_simHierarchyNode._SimRootObject);

						if(_comMapGroupIt->TargetLocation().get().front()=="AixLib.Fluid.FixedResistances.StaticPipe")
						{
							// property
							if(_simPipeObj->SimFlowSeg_PipesideDiam().present())
							{
								MappedProperty _mapPro;
								_mapPro.setPropertyName("D");
								_mapPro.setValueType("Number");
								_mapPro.setValueNumber(_simPipeObj->SimFlowSeg_PipesideDiam().get());
								// add property
								_mapCom.addMappedProperty(_mapPro);
							}
						}
						else if(_comMapGroupIt->TargetLocation().get().front()=="BuildingSystems.Fluid.FixedResistances.FixedResistanceDpM")
						{
							// property
							if(_simPipeObj->SimFlowSeg_PipesideDiam().present())
							{
								MappedProperty _mapPro;
								_mapPro.setPropertyName("dh");
								_mapPro.setValueType("Number");
								_mapPro.setValueNumber(_simPipeObj->SimFlowSeg_PipesideDiam().get());
								// add property
								_mapCom.addMappedProperty(_mapPro);
							}
						}
					}


					// add mapped component
					_mapComList.push_back(_mapCom);
				}
			}
		}
	}

	return _mapComList;
}

std::vector<MappedComponent> RuleFilter::getMappedData(SimHierarchyNode& _simHierarchyNode, ::std::auto_ptr< ::schema::simxml::Model::SimModel >& simSysData)
{
	// save mapped data
	std::vector<MappedComponent> _mapComList;

	// component One2One mapping
	if(isComRuleOne2One(_simHierarchyNode.ClassType()))
	{
		// component level
		// load mapping rules
		std::pair<std::multimap<std::string, Data_Model_Map::Component_Map_One2One_iterator>::iterator, std::multimap<std::string, Data_Model_Map::Component_Map_One2One_iterator>::iterator> retIt = getComRuleOne2One(_simHierarchyNode.ClassType());
		// iterate rules
		for(std::multimap<std::string, Data_Model_Map::Component_Map_One2One_iterator>::iterator _it=retIt.first; _it!=retIt.second; ++_it)
		{
			// create mapped component
			MappedComponent _mapCom;
			setMappingRuleName(_mapCom, "Component_Map_One2One");
			setTargetComponentName(_mapCom, _it->second->TargetComponentName());
			if(_it->second->TargetLocation().present())
				setTargetLocation(_mapCom, _it->second->TargetLocation().get().front());

			// property level
			// property rule Gap
			for(Component_Map_One2One::Property_Map_Gap_Name_iterator _proMapGapIt=_it->second->Property_Map_Gap_Name().begin(); _proMapGapIt!=_it->second->Property_Map_Gap_Name().end(); ++_proMapGapIt)
			{
				// create mapped property
				MappedProperty _mapPro = getProRuleGapData(*_proMapGapIt);
				// add property
				_mapCom.addMappedProperty(_mapPro);
			}

			if(_simHierarchyNode.ClassType()=="SimFlowSegment_Pipe_Indoor")
			{
				SimFlowSegment_Pipe_Indoor* _simPipeObj = static_cast<SimFlowSegment_Pipe_Indoor*>(_simHierarchyNode._SimRootObject);
				
				if(_it->second->TargetLocation().get().front()=="AixLib.Fluid.FixedResistances.StaticPipe")
				{
					// property
					if(_simPipeObj->SimFlowSeg_PipesideDiam().present())
					{
						MappedProperty _mapPro;
						_mapPro.setPropertyName("D");
						_mapPro.setValueType("Number");
						_mapPro.setValueNumber(_simPipeObj->SimFlowSeg_PipesideDiam().get()/(double)1000.0);
						// add property
						_mapCom.addMappedProperty(_mapPro);
					}
				}
				else if(_it->second->TargetLocation().get().front()=="BuildingSystems.Fluid.FixedResistances.FixedResistanceDpM")
				{
					// property
					if(_simPipeObj->SimFlowSeg_PipesideDiam().present())
					{
						for(Component_Map_One2One::Property_Map_Transformation_Name_iterator _proMapTranIt=_it->second->Property_Map_Transformation_Name().begin(); _proMapTranIt!=_it->second->Property_Map_Transformation_Name().end(); ++_proMapTranIt)
						{
							std::map<std::string, Data_Model_Map::Property_Map_Transformation_iterator>::iterator _itTran = ProRuleTransforList.find(*_proMapTranIt);
							if(_itTran!=ProRuleTransforList.end())
							{
								if(_itTran->second->Description().present() && _itTran->second->Description().get()=="Diameter from mm to m")
								{
									std::map<std::string, Data_Model_Map::OutputParameter_iterator>::iterator _itOutputPara = ProOutputParaList.find(*_itTran->second->OutputParameterName().begin());
									if(_itOutputPara!=ProOutputParaList.end())
									{
										MappedProperty _mapPro;
										_mapPro.setPropertyName(*_itOutputPara->second->ParameterName().begin());
										_mapPro.setValueType("Number");
										_mapPro.setValueNumber(_simPipeObj->SimFlowSeg_PipesideDiam().get()/(double)1000.0);
										// add property
										_mapCom.addMappedProperty(_mapPro);
									}
								}
							}
						}
					}
				}
			}
			else if(_simHierarchyNode.ClassType()=="SimFlowEnergyTransferStorage_HotWaterTank_Expansion")
			{
				SimFlowEnergyTransferStorage_HotWaterTank_Expansion* _simModelObj = static_cast<SimFlowEnergyTransferStorage_HotWaterTank_Expansion*>(_simHierarchyNode._SimRootObject);

				if(_it->second->TargetLocation().get().front()=="AixLib.Fluid.Storage.ExpansionVessel")
				{
					// property
					if(_simModelObj->EffectiveCapacity().present())
					{
						MappedProperty _mapPro;
						_mapPro.setPropertyName("V_start");
						_mapPro.setValueType("Number");
						_mapPro.setValueNumber(_simModelObj->EffectiveCapacity().get());
						// add property
						_mapCom.addMappedProperty(_mapPro);
					}
				}
			}


			// add mapped component
			_mapComList.push_back(_mapCom);
		}
	}

	// component One2Many mapping
	if(isComRuleOne2Many(_simHierarchyNode.ClassType()))
	{
		// component level
		// load mapping rules
		std::pair<std::multimap<std::string, Data_Model_Map::Component_Map_One2Many_iterator>::iterator, std::multimap<std::string, Data_Model_Map::Component_Map_One2Many_iterator>::iterator> retIt = getComRuleOne2Many(_simHierarchyNode.ClassType());
		// iterate rules
		for(std::multimap<std::string, Data_Model_Map::Component_Map_One2Many_iterator>::iterator _it=retIt.first; _it!=retIt.second; ++_it)
		{	// iterate component mapping group id
			for(Component_Map_One2Many::ComponentMappingGroupName_iterator subIt=_it->second->ComponentMappingGroupName().begin(); subIt!=_it->second->ComponentMappingGroupName().end(); ++subIt)
			{
				// get the real mapping group
				if(ComMappingGroupList.find(*subIt) != ComMappingGroupList.end())
				{
					Data_Model_Map::ComponentMappingGroup_iterator _comMapGroupIt = ComMappingGroupList.find(*subIt)->second;
					// create mapped component
					MappedComponent _mapCom;
					setMappingRuleName(_mapCom, "Component_Map_One2Many");
					setTargetComponentName(_mapCom, _comMapGroupIt->TargetComponentName());
					if(_comMapGroupIt->TargetLocation().present())
						setTargetLocation(_mapCom, _comMapGroupIt->TargetLocation().get().front());

					// property level
					// property rule Gap
					for(ComponentMappingGroup::Property_Map_Gap_Name_iterator _proMapGapIt=_comMapGroupIt->Property_Map_Gap_Name().begin(); _proMapGapIt!=_comMapGroupIt->Property_Map_Gap_Name().end(); ++_proMapGapIt)
					{
						// create mapped property
						MappedProperty _mapPro = getProRuleGapData(*_proMapGapIt);
						// add property
						_mapCom.addMappedProperty(_mapPro);
					}

					// move to Python later
					if(_simHierarchyNode.ClassType()=="SimFlowPlant_Boiler_BoilerHotWater")
					{
						SimFlowPlant_Boiler_BoilerHotWater* _simBoilerObj = static_cast<SimFlowPlant_Boiler_BoilerHotWater*>(_simHierarchyNode._SimRootObject);

						if(_comMapGroupIt->TargetLocation().get().front()=="AixLib.Fluid.HeatExchangers.Boiler")
						{
							// property
							if(_simBoilerObj->SimFlowPlant_NomCap().present())
							{
								MappedProperty _mapPro;
								_mapPro.setPropertyName("Q_flow_max");
								_mapPro.setValueType("Number");
								_mapPro.setValueNumber(_simBoilerObj->SimFlowPlant_NomCap().get());
								// add property
								_mapCom.addMappedProperty(_mapPro);
							}

							if(_simBoilerObj->SimFlowPlant_NrmlizedBoilerEffCurveName().present())
							{
								for(SimModel::SimPerformanceCurve_Mathematical_Cubic_iterator _itSimCurveIt=simSysData->SimPerformanceCurve_Mathematical_Cubic().begin(); _itSimCurveIt!=simSysData->SimPerformanceCurve_Mathematical_Cubic().end(); ++_itSimCurveIt)
								{
									if(_itSimCurveIt->RefId()==_simBoilerObj->SimFlowPlant_NrmlizedBoilerEffCurveName().get())
									{
										if(_itSimCurveIt->SimPerfCurve_MinValX().present() && _itSimCurveIt->SimPerfCurve_MaxValX().present() && _itSimCurveIt->SimPerfCurve_Coef1Constant().present() && _itSimCurveIt->SimPerfCurve_Coef_2_X().present() && _itSimCurveIt->SimPerfCurve_Coef_3_X_2().present() && _itSimCurveIt->SimPerfCurve_Coef_4_X_3().present())
										{
											// defintion for coefficients
											double _a1 = _itSimCurveIt->SimPerfCurve_Coef1Constant().get();
											double _a2 = _itSimCurveIt->SimPerfCurve_Coef_2_X().get();
											double _a3 = _itSimCurveIt->SimPerfCurve_Coef_3_X_2().get();
											double _a4 = _itSimCurveIt->SimPerfCurve_Coef_4_X_3().get();
											int _dim = 5;
											double _step = (_itSimCurveIt->SimPerfCurve_MaxValX().get()-_itSimCurveIt->SimPerfCurve_MinValX().get()) / (double)_dim;

											MappedProperty _mapPro4;
											_mapPro4.setPropertyName("boilerEfficiency");
											_mapPro4.setValueType("Matrix");
											// set matrix
											std::vector<std::vector<double> > _matrix;
											_matrix.resize(_dim+1);

											double _plr = _itSimCurveIt->SimPerfCurve_MinValX().get();
											for(int _time = 0; _time<_dim+1; ++_time)
											{
												double _bec = _a1 + _a2*_plr + _a3*_plr*_plr + _a4*_plr*_plr*_plr;

												_matrix[_time].push_back(_plr);
												_matrix[_time].push_back(_bec);

												_plr += _step;
											}

											_mapPro4.setValueMatrix(_matrix);
											_mapPro4.setRecordInstance("boilerEfficiencyB");
											_mapPro4.setRecordLocation("AixLib.DataBase.Boiler.BoilerEfficiencyBaseDataDefinition");
											// add property
											_mapCom.addMappedProperty(_mapPro4);
										}

										break;
									}
								}
							}							
						}
						else if(_comMapGroupIt->TargetLocation().get().front()=="BuildingSystems.Fluid.HeatExchangers.HeaterCooler_T")
						{
							// property
							if(_simBoilerObj->SimFlowPlant_NomCap().present())
							{
								MappedProperty _mapPro;
								_mapPro.setPropertyName("Q_flow_maxHeat");
								_mapPro.setValueType("Number");
								_mapPro.setValueNumber(_simBoilerObj->SimFlowPlant_NomCap().get());
								// add property
								_mapCom.addMappedProperty(_mapPro);
							}
						}
						else if(_comMapGroupIt->TargetLocation().get().front()=="Modelica.Blocks.Sources.Constant")
						{
							if(_simBoilerObj->SimFlowPlant_DesignWaterOutletTemp().present())
							{
								MappedProperty _mapPro;
								_mapPro.setPropertyName("k");
								_mapPro.setValueType("Number");
								_mapPro.setValueNumber(_simBoilerObj->SimFlowPlant_DesignWaterOutletTemp().get()+273.15);
								// add property
								_mapCom.addMappedProperty(_mapPro);
							}
						}
					}
					else if(_simHierarchyNode.ClassType()=="SimFlowMover_Pump_VariableSpeedReturn")
					{
						SimFlowMover_Pump_VariableSpeedReturn* _simPumpObj = static_cast<SimFlowMover_Pump_VariableSpeedReturn*>(_simHierarchyNode._SimRootObject);

						if(_comMapGroupIt->TargetLocation().get().front()=="AixLib.Fluid.Movers.Pump")
						{
							// property
							if(_simPumpObj->SimFlowMover_RatedFlowRate().present())
							{
								MappedProperty _mapPro;
								_mapPro.setPropertyName("V_flow_max");
								_mapPro.setValueType("Number");
								_mapPro.setValueNumber(_simPumpObj->SimFlowMover_RatedFlowRate().get());
								// add property
								_mapCom.addMappedProperty(_mapPro);

								// Pump head for min and max rotational speed
								if(_simPumpObj->SimFlowMover_Coef1OfThePartLoadPerfCurve().present() && _simPumpObj->SimFlowMover_Coef2OfThePartLoadPerfCurve().present() && _simPumpObj->SimFlowMover_Coef3OfThePartLoadPerfCurve().present() && _simPumpObj->SimFlowMover_Coef4OfThePartLoadPerfCurve().present())
								{
									double _c1 = _simPumpObj->SimFlowMover_Coef1OfThePartLoadPerfCurve().get();
									double _c2 = _simPumpObj->SimFlowMover_Coef2OfThePartLoadPerfCurve().get();
									double _c3 = _simPumpObj->SimFlowMover_Coef3OfThePartLoadPerfCurve().get();
									double _c4 = _simPumpObj->SimFlowMover_Coef4OfThePartLoadPerfCurve().get();
									int _dim = 9;
									double _step = _simPumpObj->SimFlowMover_RatedFlowRate().get() / (double)_dim;


									MappedProperty _mapPro4;
									_mapPro4.setPropertyName("minMaxHead");
									_mapPro4.setValueType("Matrix");
									// set matrix
									std::vector<std::vector<double> > _matrix;
									_matrix.resize(_dim+1);
									
									double _v_flow=0;
									for(int _time = 0; _time<_dim+1; ++_time)
									{
										double _RS = _c1 + _c2*_v_flow + _c3*_v_flow*_v_flow + _c4*_v_flow*_v_flow*_v_flow;

										_matrix[_time].push_back(_v_flow);
										_matrix[_time].push_back(_RS);
										_matrix[_time].push_back(_RS);

										_v_flow += _step;
										// _v_flow<=_simPumpObj->SimFlowMover_RatedFlowRate().get()
									}

									_mapPro4.setValueMatrix(_matrix);
									_mapPro4.setRecordInstance("MinMaxCharacteristics");
									_mapPro4.setRecordLocation("AixLib.DataBase.Pumps.MinMaxCharacteristicsBaseDataDefinition");
									// add property
									_mapCom.addMappedProperty(_mapPro4);
								}
							}

							// transformation
							if(_simPumpObj->SimFlowMover_RatedPumpHead().present())
							{
								MappedProperty _mapPro;
								_mapPro.setPropertyName("Head_max");
								_mapPro.setValueType("Number");
								_mapPro.setValueNumber(_simPumpObj->SimFlowMover_RatedPumpHead().get()*0.0001019716);
								// add property
								_mapCom.addMappedProperty(_mapPro);
							}
						}
						else if(_comMapGroupIt->TargetLocation().get().front()=="BuildingSystems.Fluid.Movers.FlowControlled_dp")
						{
							// property
							if(_simPumpObj->SimFlowMover_RatedFlowRate().present())
							{
								MappedProperty _mapPro;
								_mapPro.setPropertyName("m_flow_nominal");
								_mapPro.setValueType("Number");
								_mapPro.setValueNumber(_simPumpObj->SimFlowMover_RatedFlowRate().get());
								// add property
								_mapCom.addMappedProperty(_mapPro);

								//
								for(ComponentMappingGroup::Property_Map_Transformation_Name_iterator _proMapTranIt=_comMapGroupIt->Property_Map_Transformation_Name().begin(); _proMapTranIt!=_comMapGroupIt->Property_Map_Transformation_Name().end(); ++_proMapTranIt)
								{
									std::map<std::string, Data_Model_Map::Property_Map_Transformation_iterator>::iterator _itTran = ProRuleTransforList.find(*_proMapTranIt);
									if(_itTran!=ProRuleTransforList.end())
									{
										if(_itTran->second->Description().present() && _itTran->second->Description().get()=="Pump head for min and max rotational speed defintion")
										{
											// Pump head for min and max rotational speed
											if(_simPumpObj->SimFlowMover_Coef1OfThePartLoadPerfCurve().present() && _simPumpObj->SimFlowMover_Coef2OfThePartLoadPerfCurve().present() && _simPumpObj->SimFlowMover_Coef3OfThePartLoadPerfCurve().present() && _simPumpObj->SimFlowMover_Coef4OfThePartLoadPerfCurve().present())
											{
												double _c1 = _simPumpObj->SimFlowMover_Coef1OfThePartLoadPerfCurve().get();
												double _c2 = _simPumpObj->SimFlowMover_Coef2OfThePartLoadPerfCurve().get();
												double _c3 = _simPumpObj->SimFlowMover_Coef3OfThePartLoadPerfCurve().get();
												double _c4 = _simPumpObj->SimFlowMover_Coef4OfThePartLoadPerfCurve().get();
												int _dim = 9;
												double _step = _simPumpObj->SimFlowMover_RatedFlowRate().get() / (double)_dim;


												MappedProperty _mapPro4;
												_mapPro4.setPropertyName("per");
												_mapPro4.setValueType("Matrix");
												// set matrix
												std::vector<std::vector<double> > _matrix;
												_matrix.resize(_dim+1);
									
												double _v_flow=0;
												for(int _time = 0; _time<_dim+1; ++_time)
												{
													double _RS = _c1 + _c2*_v_flow + _c3*_v_flow*_v_flow + _c4*_v_flow*_v_flow*_v_flow;

													_matrix[_time].push_back(_v_flow);
													_matrix[_time].push_back(_RS);
													_matrix[_time].push_back(_RS);

													_v_flow += _step;
													// _v_flow<=_simPumpObj->SimFlowMover_RatedFlowRate().get()
												}

												_mapPro4.setValueMatrix(_matrix);
												_mapPro4.setRecordInstance("FlowControlled");
												_mapPro4.setRecordLocation("BuildingSystems.Fluid.Movers.Data.FlowControlled");
												// add property
												_mapCom.addMappedProperty(_mapPro4);
											}
										}
									}
								}
							}

							if(_simPumpObj->SimFlowMover_MotorEff().present())
							{
								MappedProperty _mapPro;
								_mapPro.setPropertyName("motorEfficiency");
								_mapPro.setValueType("Number");
								_mapPro.setValueNumber(_simPumpObj->SimFlowMover_MotorEff().get());
								_mapPro.setRecordInstance("per");
								_mapPro.setRecordLocation("BuildingSystems.Fluid.Movers.Data.FlowControlled");
								// add property
								_mapCom.addMappedProperty(_mapPro);
							}
						}
					}
					else if(_simHierarchyNode.ClassType()=="SimFlowSegment_Pipe_Indoor")
					{
						SimFlowSegment_Pipe_Indoor* _simPipeObj = static_cast<SimFlowSegment_Pipe_Indoor*>(_simHierarchyNode._SimRootObject);

						if(_comMapGroupIt->TargetLocation().get().front()=="AixLib.Fluid.FixedResistances.StaticPipe")
						{
							// property
							if(_simPipeObj->SimFlowSeg_PipesideDiam().present())
							{
								MappedProperty _mapPro;
								_mapPro.setPropertyName("D");
								_mapPro.setValueType("Number");
								_mapPro.setValueNumber(_simPipeObj->SimFlowSeg_PipesideDiam().get());
								// add property
								_mapCom.addMappedProperty(_mapPro);
							}
						}
						else if(_comMapGroupIt->TargetLocation().get().front()=="BuildingSystems.Fluid.FixedResistances.FixedResistanceDpM")
						{
							// property
							if(_simPipeObj->SimFlowSeg_PipesideDiam().present())
							{
								MappedProperty _mapPro;
								_mapPro.setPropertyName("dh");
								_mapPro.setValueType("Number");
								_mapPro.setValueNumber(_simPipeObj->SimFlowSeg_PipesideDiam().get());
								// add property
								_mapCom.addMappedProperty(_mapPro);
							}
						}
					}


					// add mapped component
					_mapComList.push_back(_mapCom);
				}
			}
		}
	}

	return _mapComList;
}

std::vector<MappedComponent> RuleFilter::getMappedData2_2(SimHierarchyNode& _simHierarchyNode, ::std::auto_ptr< ::schema::simxml::Model::SimModel >& simSysData)
{
	// save mapped data
	std::vector<MappedComponent> _mapComList;

	// component One2One mapping
	if(isComRuleOne2One(_simHierarchyNode.ClassType()))
	{
		// component level
		// load mapping rules
		std::pair<std::multimap<std::string, Data_Model_Map::Component_Map_One2One_iterator>::iterator, std::multimap<std::string, Data_Model_Map::Component_Map_One2One_iterator>::iterator> retIt = getComRuleOne2One(_simHierarchyNode.ClassType());
		// iterate rules
		for(std::multimap<std::string, Data_Model_Map::Component_Map_One2One_iterator>::iterator _it=retIt.first; _it!=retIt.second; ++_it)
		{
			// create mapped component
			MappedComponent _mapCom;
			setMappingRuleName(_mapCom, "Component_Map_One2One");
			setTargetComponentName(_mapCom, _it->second->TargetComponentName());
			if(_it->second->TargetLocation().present())
				setTargetLocation(_mapCom, _it->second->TargetLocation().get().front());

			// property level
			// property rule Gap
			for(Component_Map_One2One::Property_Map_Gap_Name_iterator _proMapGapIt=_it->second->Property_Map_Gap_Name().begin(); _proMapGapIt!=_it->second->Property_Map_Gap_Name().end(); ++_proMapGapIt)
			{
				// create mapped property
				MappedProperty _mapPro = getProRuleGapData(*_proMapGapIt);
				// add property
				_mapCom.addMappedProperty(_mapPro);
			}

			// property rule One2One
			for(Component_Map_One2One::Property_Map_One2One_Name_iterator _proMapOne2OneIt=_it->second->Property_Map_One2One_Name().begin(); _proMapOne2OneIt!=_it->second->Property_Map_One2One_Name().end(); ++_proMapOne2OneIt)
			{
				// create mapped property
				MappedProperty _mapPro = getProRuleOne2OneData(_simHierarchyNode._SimRootObject->RefId(), *_proMapOne2OneIt);
				// add property
				_mapCom.addMappedProperty(_mapPro);
			}

			// property rule Transformation
			for(Component_Map_One2One::Property_Map_Transformation_Name_iterator _proMapTranIt=_it->second->Property_Map_Transformation_Name().begin(); _proMapTranIt!=_it->second->Property_Map_Transformation_Name().end(); ++_proMapTranIt)
			{
				// create mapped property
				MappedProperty _mapPro = getProRuleTransformationData(_simHierarchyNode._SimRootObject->RefId(), *_proMapTranIt, simSysData);
				// add property
				_mapCom.addMappedProperty(_mapPro);
			}

			// add mapped component
			_mapComList.push_back(_mapCom);
		}
	}

	// component One2Many mapping
	if(isComRuleOne2Many(_simHierarchyNode.ClassType()))
	{
		// component level
		// load mapping rules
		std::pair<std::multimap<std::string, Data_Model_Map::Component_Map_One2Many_iterator>::iterator, std::multimap<std::string, Data_Model_Map::Component_Map_One2Many_iterator>::iterator> retIt = getComRuleOne2Many(_simHierarchyNode.ClassType());
		// iterate rules
		for(std::multimap<std::string, Data_Model_Map::Component_Map_One2Many_iterator>::iterator _it=retIt.first; _it!=retIt.second; ++_it)
		{	// iterate component mapping group id
			for(Component_Map_One2Many::ComponentMappingGroupName_iterator subIt=_it->second->ComponentMappingGroupName().begin(); subIt!=_it->second->ComponentMappingGroupName().end(); ++subIt)
			{
				// get the real mapping group
				if(ComMappingGroupList.find(*subIt) != ComMappingGroupList.end())
				{
					Data_Model_Map::ComponentMappingGroup_iterator _comMapGroupIt = ComMappingGroupList.find(*subIt)->second;
					// create mapped component
					MappedComponent _mapCom;
					setMappingRuleName(_mapCom, "Component_Map_One2Many");
					setTargetComponentName(_mapCom, _comMapGroupIt->TargetComponentName());
					if(_comMapGroupIt->TargetLocation().present())
						setTargetLocation(_mapCom, _comMapGroupIt->TargetLocation().get().front());

					// property level
					// property rule Gap
					for(ComponentMappingGroup::Property_Map_Gap_Name_iterator _proMapGapIt=_comMapGroupIt->Property_Map_Gap_Name().begin(); _proMapGapIt!=_comMapGroupIt->Property_Map_Gap_Name().end(); ++_proMapGapIt)
					{
						// create mapped property
						MappedProperty _mapPro = getProRuleGapData(*_proMapGapIt);
						// add property
						_mapCom.addMappedProperty(_mapPro);
					}

					// property rule One2One
					for(ComponentMappingGroup::Property_Map_One2One_Name_iterator _proMapOne2OneIt=_comMapGroupIt->Property_Map_One2One_Name().begin(); _proMapOne2OneIt!=_comMapGroupIt->Property_Map_One2One_Name().end(); ++_proMapOne2OneIt)
					{
						// create mapped property
						MappedProperty _mapPro = getProRuleOne2OneData(_simHierarchyNode._SimRootObject->RefId(), *_proMapOne2OneIt);
						// add property
						_mapCom.addMappedProperty(_mapPro);
					}

					// property rule Transformation
					for(ComponentMappingGroup::Property_Map_Transformation_Name_iterator _proMapTranIt=_comMapGroupIt->Property_Map_Transformation_Name().begin(); _proMapTranIt!=_comMapGroupIt->Property_Map_Transformation_Name().end(); ++_proMapTranIt)
					{
						// create mapped property
						MappedProperty _mapPro = getProRuleTransformationData(_simHierarchyNode._SimRootObject->RefId(), *_proMapTranIt, simSysData);
						// add property
						_mapCom.addMappedProperty(_mapPro);
					}

					// add mapped component
					_mapComList.push_back(_mapCom);
				}
			}
		}
	}

	return _mapComList;
}

// check whether there are newly added components defined by the mapping rule Gap
bool RuleFilter::isNewComponentAdded()
{
	return ComRuleGapList.size()>0 ? true : false;
}

// add new component into Modelica as defined in the component mapping rule Gap
std::vector<MappedComponent> RuleFilter::getNewComponent()
{
	// save mapped data
	std::vector<MappedComponent> _mapComList;

	// component Gap mapping
	// component level
	// iterate rules
	for(unsigned int i=0; i<ComRuleGapList.size(); ++i)
	{
		// create mapped component
		MappedComponent _mapCom;
		setMappingRuleName(_mapCom, "Component_Map_Gap");
		setTargetComponentName(_mapCom, ComRuleGapList[i]->TargetComponentName());
		if(ComRuleGapList[i]->TargetLocation().present())
			setTargetLocation(_mapCom, ComRuleGapList[i]->TargetLocation().get().front());
		
		// property level
		// property rule Gap
		for(Component_Map_Gap::Property_Map_Gap_Name_iterator _proMapGapIt=ComRuleGapList[i]->Property_Map_Gap_Name().begin(); _proMapGapIt!=ComRuleGapList[i]->Property_Map_Gap_Name().end(); ++_proMapGapIt)
		{
			// create mapped property
			MappedProperty _mapPro = getProRuleGapData(*_proMapGapIt);
			// add property
			_mapCom.addMappedProperty(_mapPro);
		}

		// add mapped component
		_mapComList.push_back(_mapCom);
	}
	
	return _mapComList;
}

// set mapping rule parsing environment
void RuleFilter::setMappingRule(::std::auto_ptr<Data_Model_Map>& _mapping_rule, SimPyCallBack* _passCallback)
{
	// set Python callback handle
	_callback = _passCallback;

	// component level setting
	// load One2One rules
	std::set<std::string> _One2OneRuleIdList;
	for(Library_Mapping_Rule::Component_Map_One2One_Name_iterator _it=_mapping_rule->Library_Mapping_Rule().Component_Map_One2One_Name().begin(); _it!=_mapping_rule->Library_Mapping_Rule().Component_Map_One2One_Name().end(); ++_it)
	{
		_One2OneRuleIdList.insert(*_it);
	}

	for(Data_Model_Map::Component_Map_One2One_iterator _subIt = _mapping_rule->Component_Map_One2One().begin(); _subIt!=_mapping_rule->Component_Map_One2One().end(); ++_subIt)
	{
		if(_One2OneRuleIdList.find(_subIt->RefId()) != _One2OneRuleIdList.end()) 
			ComRuleOne2OneList.insert(std::pair<std::string, Data_Model_Map::Component_Map_One2One_iterator>(_subIt->SourceComponentName(), _subIt));
	}

	// load One2Many rules
	std::set<std::string> _One2ManyRuleIdList;
	for(Library_Mapping_Rule::Component_Map_One2Many_Name_iterator _it=_mapping_rule->Library_Mapping_Rule().Component_Map_One2Many_Name().begin(); _it!=_mapping_rule->Library_Mapping_Rule().Component_Map_One2Many_Name().end(); ++_it)
	{
		// id
		_One2ManyRuleIdList.insert(*_it);
	}

	std::set<std::string> _ComponentMappingGroupIdList;
	for(Data_Model_Map::Component_Map_One2Many_iterator _subIt = _mapping_rule->Component_Map_One2Many().begin(); _subIt!=_mapping_rule->Component_Map_One2Many().end(); ++_subIt)
	{
		if(_One2ManyRuleIdList.find(_subIt->RefId()) != _One2ManyRuleIdList.end())
		{
			ComRuleOne2ManyList.insert(std::pair<std::string, Data_Model_Map::Component_Map_One2Many_iterator>(_subIt->SourceComponentName(), _subIt));
			// component mapping group
			for(Component_Map_One2Many::ComponentMappingGroupName_iterator _subSubIt=_subIt->ComponentMappingGroupName().begin(); _subSubIt!=_subIt->ComponentMappingGroupName().end(); ++_subSubIt)
			{
				_ComponentMappingGroupIdList.insert(*_subSubIt);
			}
		}
	}

	// load component mapping group
	for(Data_Model_Map::ComponentMappingGroup_iterator _subIt=_mapping_rule->ComponentMappingGroup().begin(); _subIt!=_mapping_rule->ComponentMappingGroup().end(); ++_subIt)
	{
		if(_ComponentMappingGroupIdList.find(_subIt->RefId()) != _ComponentMappingGroupIdList.end())
			ComMappingGroupList.insert(std::pair<std::string, Data_Model_Map::ComponentMappingGroup_iterator>(_subIt->RefId(), _subIt));
	}

	// load Gap rules
	std::set<std::string> _GapRuleIdList;
	for(Library_Mapping_Rule::Component_Map_Gap_Name_iterator _it=_mapping_rule->Library_Mapping_Rule().Component_Map_Gap_Name().begin(); _it!=_mapping_rule->Library_Mapping_Rule().Component_Map_Gap_Name().end(); ++_it)
	{
		_GapRuleIdList.insert(*_it);
	}

	for(Data_Model_Map::Component_Map_Gap_iterator _subIt = _mapping_rule->Component_Map_Gap().begin(); _subIt!=_mapping_rule->Component_Map_Gap().end(); ++_subIt)
	{
		if(_GapRuleIdList.find(_subIt->RefId()) != _GapRuleIdList.end())
			ComRuleGapList.push_back(_subIt);
	}

	// property level setting
	std::set<std::string> _ProRuleIdlist;
	// load inner property id from component rule One2One
	for(std::multimap<std::string, Data_Model_Map::Component_Map_One2One_iterator>::iterator _it=ComRuleOne2OneList.begin(); _it!=ComRuleOne2OneList.end(); ++_it)
	{
		parseInnerPropertyId<Component_Map_One2One, Data_Model_Map::Component_Map_One2One_iterator>(_it->second, _ProRuleIdlist);
	}

	// load inner property id from component rule One2Many
	for(std::map<std::string, Data_Model_Map::ComponentMappingGroup_iterator>::iterator _it=ComMappingGroupList.begin(); _it!=ComMappingGroupList.end(); ++_it)
	{
		parseInnerPropertyId<ComponentMappingGroup, Data_Model_Map::ComponentMappingGroup_iterator>(_it->second, _ProRuleIdlist);
	}

	// load inner property id from component rule Gap
	for(unsigned int i=0; i<ComRuleGapList.size(); ++i)
	{
		parseInnerPropertyId<Component_Map_Gap, Data_Model_Map::Component_Map_Gap_iterator>(ComRuleGapList[i], _ProRuleIdlist);
	}

	// load properties
	for(Data_Model_Map::Property_Map_One2One_iterator _it=_mapping_rule->Property_Map_One2One().begin(); _it!=_mapping_rule->Property_Map_One2One().end(); ++_it)
	{
		if(_ProRuleIdlist.find(_it->RefId()) != _ProRuleIdlist.end())
			ProRuleOne2OneList.insert(std::pair<std::string, Data_Model_Map::Property_Map_One2One_iterator>(_it->RefId(), _it));
	}

	for(Data_Model_Map::Property_Map_Transformation_iterator _it=_mapping_rule->Property_Map_Transformation().begin(); _it!=_mapping_rule->Property_Map_Transformation().end(); ++_it)
	{
		if(_ProRuleIdlist.find(_it->RefId()) != _ProRuleIdlist.end())
			ProRuleTransforList.insert(std::pair<std::string, Data_Model_Map::Property_Map_Transformation_iterator>(_it->RefId(), _it));
	}

	for(Data_Model_Map::Property_Map_Gap_iterator _it=_mapping_rule->Property_Map_Gap().begin(); _it!=_mapping_rule->Property_Map_Gap().end(); ++_it)
	{
		if(_ProRuleIdlist.find(_it->RefId()) != _ProRuleIdlist.end())
			ProRuleGapList.insert(std::pair<std::string, Data_Model_Map::Property_Map_Gap_iterator>(_it->RefId(), _it));
	}

	// parse internal parameter IDs of property transformation rule
	std::set<std::string> _ParametersRuleIdlist;
	for(std::map<std::string, Data_Model_Map::Property_Map_Transformation_iterator>::iterator _it=ProRuleTransforList.begin(); _it!=ProRuleTransforList.end(); ++_it)
	{
		// parse input parameter IDs
		for(Property_Map_Transformation::InputParameterName_iterator __it=_it->second->InputParameterName().begin(); __it!=_it->second->InputParameterName().end(); ++__it)
		{
			_ParametersRuleIdlist.insert(*__it);
		}

		// parse input coefficient IDs
		for(Property_Map_Transformation::InputCoefficientName_iterator __it=_it->second->InputCoefficientName().begin(); __it!=_it->second->InputCoefficientName().end(); ++__it)
		{
			_ParametersRuleIdlist.insert(*__it);
		}

		// parse output parameter IDs
		for(Property_Map_Transformation::OutputParameterName_iterator __it=_it->second->OutputParameterName().begin(); __it!=_it->second->OutputParameterName().end(); ++__it)
		{
			_ParametersRuleIdlist.insert(*__it);
		}
	}

	// load different paramters used by property Transformation rules
	// load input parameters
	for(Data_Model_Map::InputParameter_iterator _it=_mapping_rule->InputParameter().begin(); _it!=_mapping_rule->InputParameter().end(); ++_it)
	{
		if(_ParametersRuleIdlist.find(_it->RefId()) != _ParametersRuleIdlist.end())
			InputParaList.insert(std::pair<std::string, Data_Model_Map::InputParameter_iterator>(_it->RefId(), _it));
	}

	// load input coefficients
	for(Data_Model_Map::InputCoefficient_iterator _it=_mapping_rule->InputCoefficient().begin(); _it!=_mapping_rule->InputCoefficient().end(); ++_it)
	{
		if(_ParametersRuleIdlist.find(_it->RefId()) != _ParametersRuleIdlist.end())
			InputCoeffList.insert(std::pair<std::string, Data_Model_Map::InputCoefficient_iterator>(_it->RefId(), _it));
	}

	// load output parameters
	for(Data_Model_Map::OutputParameter_iterator _it=_mapping_rule->OutputParameter().begin(); _it!=_mapping_rule->OutputParameter().end(); ++_it)
	{
		if(_ParametersRuleIdlist.find(_it->RefId()) != _ParametersRuleIdlist.end())
			OutputParaList.insert(std::pair<std::string, Data_Model_Map::OutputParameter_iterator>(_it->RefId(), _it));
	}
}