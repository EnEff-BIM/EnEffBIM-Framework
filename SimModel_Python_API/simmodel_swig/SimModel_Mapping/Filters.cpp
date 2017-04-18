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

// set the right child node
void RuleFilter::setRightChild(int _funItPos, int rightNeighborPos)
{
	if(!_treeNodeList[rightNeighborPos].hasParent)
	{
		// building parent-child link
		_treeNodeList[_funItPos].hasRightChild = true;
		_treeNodeList[_funItPos].rightChildId = rightNeighborPos;
		_treeNodeList[rightNeighborPos].hasParent = true;
		_treeNodeList[rightNeighborPos].parentId = _funItPos;
	}
	else
	{
		setRightChild(_funItPos, _treeNodeList[rightNeighborPos].parentId);
	}
}

// find the root node of the function element tree
int RuleFilter::findRootNode(std::vector<_treeNode>& _FunTreeNodeList)
{
	for(unsigned int _i=0; _i<_FunTreeNodeList.size(); ++_i)
	{
		if(!_FunTreeNodeList[_i].hasParent && !_FunTreeNodeList[_i].isLeaf && _FunTreeNodeList[_i]._nodeName!="\"")
			return _i;
	}

	// not found
	return -1;
}

// caculate the value defined by the given operator
double RuleFilter::getFunOperatorValue(std::vector<_treeNode>& _FunTreeNodeList, int _i, std::string _inputParaName, double _inputParaValue, std::map<std::string, double>& _inputCoefficientMap, _inputParametrInfo& __inputParameterInstance, bool _flag)
{
	// get operator
	std::string _operator = _FunTreeNodeList[_i]._nodeName;

	// get left and right children
	if(_FunTreeNodeList[_i].hasLeftChild && _FunTreeNodeList[_i].hasRightChild)
	{
		int _leftId = _FunTreeNodeList[_i].leftChildId;
		int _rightId = _FunTreeNodeList[_i].rightChildId;
		double _leftNumber = 0;
		double _rightNumber = 0;
		std::string _leftStr = "";
		std::string _rightStr = "";

		// get caculation item values
		// leaf: paramter, constants, coefficients
		if(_FunTreeNodeList[_leftId].isLeaf)
		{
			// constant
			if(_FunTreeNodeList[_leftId].isConstant)
			{
				// constant number
				if(_FunTreeNodeList[_leftId].isConstantNumber)
					_leftNumber = _FunTreeNodeList[_leftId].constantValue;
				else // constant string
					_leftStr = _FunTreeNodeList[_leftId]._nodeName;
			}
			else if(_FunTreeNodeList[_leftId]._nodeName==_inputParaName)
			{
				// input paramter
				_leftNumber = _inputParaValue;

				if(!__inputParameterInstance.isNumber)
					_leftStr = __inputParameterInstance._inputParaStrValue;
			}
			else
			{
				// input coefficients
				// search node name
				std::map<std::string, double>::iterator _it = _inputCoefficientMap.find(_FunTreeNodeList[_leftId]._nodeName);
				if(_it != _inputCoefficientMap.end())
				{
					_leftNumber = _it->second;
				}
			}
		}
		else
		{
			// it's an operator
			_leftNumber = getFunOperatorValue(_FunTreeNodeList, _leftId, _inputParaName, _inputParaValue, _inputCoefficientMap, __inputParameterInstance);
		}

		if(_FunTreeNodeList[_rightId].isLeaf)
		{
			// constant
			if(_FunTreeNodeList[_rightId].isConstant)
			{
				// constant number
				if(_FunTreeNodeList[_rightId].isConstantNumber)
					_rightNumber = _FunTreeNodeList[_rightId].constantValue;
				else // constant string
					_rightStr = _FunTreeNodeList[_rightId]._nodeName;
			}
			else if(_FunTreeNodeList[_rightId]._nodeName==_inputParaName)
			{
				// input paramter
				_rightNumber = _inputParaValue;

				if(!__inputParameterInstance.isNumber)
					_rightStr = __inputParameterInstance._inputParaStrValue;
			}
			else
			{
				// input coefficients
				// search node name
				std::map<std::string, double>::iterator _it = _inputCoefficientMap.find(_FunTreeNodeList[_rightId]._nodeName);
				if(_it != _inputCoefficientMap.end())
				{
					_rightNumber = _it->second;
				}
			}
		}
		else
		{
			// it's an operator
			if(_operator=="?" && _leftNumber<0)
			{
				_rightNumber = getFunOperatorValue(_FunTreeNodeList, _rightId, _inputParaName, _inputParaValue, _inputCoefficientMap, __inputParameterInstance, false);
			}
			else
				_rightNumber = getFunOperatorValue(_FunTreeNodeList, _rightId, _inputParaName, _inputParaValue, _inputCoefficientMap, __inputParameterInstance);
		}

		// caculation
		// leftvalue operator right value
		if(_operator=="+")
		{
			return _leftNumber + _rightNumber;
		}
		else if(_operator=="-")
		{
			return _leftNumber - _rightNumber;
		}
		else if(_operator=="*")
		{
			return _leftNumber * _rightNumber;
		}
		else if(_operator=="/")
		{
			return _leftNumber / _rightNumber;
		}
		else if(_operator=="==")
		{
			if(_leftStr!="" && _rightStr!="")
				return _leftStr == _rightStr ? 1 : -1;
			else
				return _leftNumber == _rightNumber ? 1 : -1;
		}
		else if(_operator=="?")
		{
			// not support setting string at the right item
			return _rightNumber;
		}
		else if(_operator==":")
		{
			if(_flag)
				return _leftNumber;
			else
				return _rightNumber;
		}
	}

	// not caculated
	return 0;
}

// execute the function
double RuleFilter::exeFunction(std::vector<_treeNode>& _FunTreeNodeList, std::string _inputParaName, double _inputParaValue, std::map<std::string, double>& _inputCoefficientMap, _inputParametrInfo& __inputParameterInstance)
{
	// get root node position
	int _i = findRootNode(_FunTreeNodeList);
	if(_i>=0)
	{
		double _funValue = getFunOperatorValue(_FunTreeNodeList, _i, _inputParaName, _inputParaValue, _inputCoefficientMap, __inputParameterInstance);

		return _funValue;
	}
	/*for(unsigned int _i=0; _i<_FunTreeNodeList.size(); ++_i)
	{
		std::string _msg;
		_msg += ("Pos: " + std::to_string(static_cast<long long>(_i)));
		_msg += ", ";
		_msg += _FunTreeNodeList[_i]._nodeName;
		_msg += ", ";
		_msg += _FunTreeNodeList[_i].isLeaf==true ? "leaf" : "node";
		_msg += ", ";
		_msg += _FunTreeNodeList[_i].isConstant==true ? "constant value" : "parameter value";
		_msg += ", ";
		_msg += _FunTreeNodeList[_i].isConstantNumber==true ? ("constant number: " + std::to_string(static_cast<long double>(_FunTreeNodeList[_i].constantValue))) : "constant string";
		_msg += ", ";
		_msg += _FunTreeNodeList[_i].hasParent==true ? ("has parent: " + std::to_string(static_cast<long long>(_FunTreeNodeList[_i].parentId))) : "no parent";
		_msg += ", ";
		_msg += _FunTreeNodeList[_i].hasLeftChild==true ? ("has left child: " + std::to_string(static_cast<long long>(_FunTreeNodeList[_i].leftChildId))) : "no left child";
		_msg += ", ";
		_msg += _FunTreeNodeList[_i].hasRightChild==true ? ("has right child: " + std::to_string(static_cast<long long>(_FunTreeNodeList[_i].rightChildId))) : "no right child";

		_callback->getIO(_msg);
	}*/

	// not found valid function
	return -1;
}

MappedProperty RuleFilter::getProRuleTransformationData(std::string SimComponentId, std::string _id)
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

			// save input paramter values
			_inputParametrInfo _inputParameterInstance;
			// save input coefficients
			std::map<std::string, double> _inputCoefficientMap;

			// get input parameter name
			_inputParameterInstance._inputParaName = _inputParaIt->second->ParameterName().front();
			// get input paramter value type
			// default type is single value
			std::string _inputParaType = "single";
			if(_inputParaIt->second->ValueType().present())
				_inputParaType = _inputParaIt->second->ValueType().get();

			// save info
			_inputParameterInstance._inputParaType = _inputParaType;

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
						if(_inputParaRefValue != std::numeric_limits<double>::max())
							_inputParameterInstance._inputParaValue = _inputParaRefValue;

						// testing
						// retrieve the property value
						//_mapPro.setValueType("Number");
						//if(_inputParaRefValue != std::numeric_limits<double>::max())
							//_mapPro.setValueNumber(_inputParaRefValue);
					}
					else if(_refType == "String")
					{
						_inputParameterInstance._inputParaStrValue = _callback->getRefStringValue(SimComponentId, _inputParaIt->second->RefValue().get().front());
						if(_inputParameterInstance._inputParaStrValue != "")
							_inputParameterInstance.isNumber = false;
					}
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
							std::string _lowerBoundRefId = "";
							_lowerBoundRefId = _callback->getRefStringValue(SimComponentId, _inputParaIt->second->LowerBoundRef().get().at(0));
							if(_lowerBoundRefId != "")
							{
								// get the referenced class instance for cubic interpolation
								std::string _refProType = _callback->getRefValueType(_lowerBoundRefId, _inputParaIt->second->LowerBoundRef().get().at(2));
								if(_refProType == "Number")
									_inputParaLowerBoundValue = _callback->getRefNumberValue(_lowerBoundRefId, _inputParaIt->second->LowerBoundRef().get().at(2));
							}
						}
					}
				}
				// save info
				_inputParameterInstance._inputParaLowerBoundValue = _inputParaLowerBoundValue;

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
							std::string _upperBoundRefId = "";
							_upperBoundRefId = _callback->getRefStringValue(SimComponentId, _inputParaIt->second->UpperBoundRef().get().at(0));
							if(_upperBoundRefId != "")
							{
								// get the referenced class instance for cubic interpolation
								std::string _refProType = _callback->getRefValueType(_upperBoundRefId, _inputParaIt->second->UpperBoundRef().get().at(2));
								if(_refProType == "Number")
									_inputParaUpperBoundValue = _callback->getRefNumberValue(_upperBoundRefId, _inputParaIt->second->UpperBoundRef().get().at(2));
							}
						}
					}
				}
				// save info
				_inputParameterInstance._inputParaUpperBoundValue = _inputParaUpperBoundValue;
			}

			// get input coefficient values
			for(Property_Map_Transformation::InputCoefficientName_iterator _inputCoeffNameIt=_it->second->InputCoefficientName().begin(); _inputCoeffNameIt!=_it->second->InputCoefficientName().end(); ++_inputCoeffNameIt)
			{
				std::map<std::string, Data_Model_Map::InputCoefficient_iterator>::iterator _inputCoeffIt = InputCoeffList.find(*_inputCoeffNameIt);

				if(_inputCoeffIt!=InputCoeffList.end())
				{
					if(_inputCoeffIt->second->Value().present())
					{
						// value: double
						_inputCoefficientMap.insert(std::pair<std::string, double>(_inputCoeffIt->second->CoefficientName(), _inputCoeffIt->second->Value().get()));
					}
					else if(_inputCoeffIt->second->RefValue().present() && _callback)
					{
						// refValue: list
						if(_inputCoeffIt->second->RefValue().get().size()==1)
						{
							// get input coefficient value
							std::string _refType = _callback->getRefValueType(SimComponentId, _inputCoeffIt->second->RefValue().get().front());
							if(_refType == "Number")
								_inputCoefficientMap.insert(std::pair<std::string, double>(_inputCoeffIt->second->CoefficientName(), _callback->getRefNumberValue(SimComponentId, _inputCoeffIt->second->RefValue().get().front())));

							// testing
							// retrieve the property value
							//_mapPro.setValueType("Number");
							//_mapPro.setValueNumber(_callback->getRefNumberValue(SimComponentId, _inputCoeffIt->second->RefValue().get().front()));
						}
						else
						{
							// get input coefficient value
							std::string _refType = _callback->getRefValueType(SimComponentId, _inputCoeffIt->second->RefValue().get().at(0));
							if(_refType == "String")
							{
								// get a RefId
								std::string _refClassId = "";
								_refClassId = _callback->getRefStringValue(SimComponentId, _inputCoeffIt->second->RefValue().get().at(0));
								if(_refClassId!="")
								{
									std::string _refProType = _callback->getRefValueType(_refClassId, _inputCoeffIt->second->RefValue().get().at(2));
									if(_refProType == "Number")
										_inputCoefficientMap.insert(std::pair<std::string, double>(_inputCoeffIt->second->CoefficientName(), _callback->getRefNumberValue(_refClassId, _inputCoeffIt->second->RefValue().get().at(2))));

									// testing
									// retrieve the property value
									//_mapPro.setValueType("Number");
									//_mapPro.setValueNumber(_callback->getRefNumberValue(_refClassId, _inputCoeffIt->second->RefValue().get().at(2)));
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
				setOperatorRank();

				// get result name
				std::string _fun_result_name = _it->second->Function().front();
				// minimum number of function item: result = input parameter
				if(_it->second->Function().size()>=3 && _it->second->Function().at(1)=="=")
				{
					// parse internal items
					// beginning from the right side of the '='
					// calcuation operation
					{
						// create a node list
						// 1st iteration: parse left neighborhood
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
									while(__i < _fun_item.size() && ((_fun_item[__i]=='0' || _fun_item[__i]=='1' || _fun_item[__i]=='2' || _fun_item[__i]=='3' || _fun_item[__i]=='4' || _fun_item[__i]=='5' || _fun_item[__i]=='6' || _fun_item[__i]=='7' || _fun_item[__i]=='8' || _fun_item[__i]=='9') || _fun_item[__i]=='.' && __i>0 || _fun_item[0]=='-'))
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

											// compare left and right && !_treeNodeList[rightNeighbor-2].isLeaf
											if(rightNeighbor<_it->second->Function().size() && _it->second->Function().at(rightNeighbor)!="\"" && _it->second->Function().at(leftNeighbor)!="\"" && !_treeNodeList[leftNeighbor-2].isLeaf)
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

						// 2nd round parse right neighborhood
						for(unsigned int _funIt=2; _funIt<_it->second->Function().size(); ++_funIt)
						{
							std::string _fun_item = _it->second->Function().at(_funIt);
							// parse tree node
							if(_fun_item=="+" || _fun_item=="-" || _fun_item=="*" || _fun_item=="/" || _fun_item=="==" || _fun_item==":" || _fun_item=="?")
							{
								if(_funIt+1 < _it->second->Function().size() && !_treeNodeList[_funIt-2].hasRightChild)
								{
									unsigned int rightNeighbor = _funIt + 1;
									while(rightNeighbor<_it->second->Function().size() && _it->second->Function().at(rightNeighbor)=="\"")
										++rightNeighbor;
									
									if(rightNeighbor<_it->second->Function().size() && _it->second->Function().at(rightNeighbor)!="\"")
									{
										// check right item
										// building parent-child link
										setRightChild(_funIt-2, rightNeighbor-2);
										// testing
										//_mapPro.setValueType("String");
										//_mapPro.setValueString(_treeNodeList[_funIt-2]._nodeName);
									}
								}
							}
						}

						// execute the function
						if(_inputParameterInstance._inputParaType=="single")
						{
							double _funResult = exeFunction(_treeNodeList, _inputParameterInstance._inputParaName, _inputParameterInstance._inputParaValue, _inputCoefficientMap, _inputParameterInstance);
							// output
							_mapPro.setValueType("Number");
							_mapPro.setValueNumber(_funResult);
						}
						else
						{
							// default step number
							int _dim = 11;
							// interpolation step
							double __step = (_inputParameterInstance._inputParaUpperBoundValue-_inputParameterInstance._inputParaLowerBoundValue) / (double)(_dim-1);
							//if(_outputParaIt->second->ValueType().present())
							_mapPro.setValueType("Matrix");
							// set matrix
							std::vector<std::vector<double> > _matrix;
							_matrix.resize(_dim);

							double _paraValue = _inputParameterInstance._inputParaLowerBoundValue;
							for(int _time = 0; _time<_dim; ++_time)
							{
								double _funResult = exeFunction(_treeNodeList, _inputParameterInstance._inputParaName, _paraValue, _inputCoefficientMap, _inputParameterInstance);

								// output format
								if(_outputParaIt->second->ValueFormat().present())
								{
									for(unsigned int _outputFromatId=0; _outputFromatId<_outputParaIt->second->ValueFormat().get().size(); ++_outputFromatId)
									{
										if(_outputParaIt->second->ValueFormat().get().at(_outputFromatId)==_inputParameterInstance._inputParaName)
											_matrix[_time].push_back(_paraValue);
										else if(_outputParaIt->second->ValueFormat().get().at(_outputFromatId)==_it->second->Function().at(0))
											_matrix[_time].push_back(_funResult);
									}
								}
								else
								{
									_matrix[_time].push_back(_paraValue);
									_matrix[_time].push_back(_funResult);
								}
								
								_paraValue += __step;
							}

							// save result
							_mapPro.setValueMatrix(_matrix);
						}
					}
				}
			}
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
std::vector<MappedComponent> RuleFilter::getMappedData2_2(SimHierarchyNode& _simHierarchyNode)
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
				MappedProperty _mapPro = getProRuleTransformationData(_simHierarchyNode._SimRootObject->RefId(), *_proMapTranIt);
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
						MappedProperty _mapPro = getProRuleTransformationData(_simHierarchyNode._SimRootObject->RefId(), *_proMapTranIt);
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