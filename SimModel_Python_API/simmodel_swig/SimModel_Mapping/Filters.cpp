#include "Filters.h"
#include "SimMapping.h"

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
						_mapPro.setValueNumber(_simPipeObj->SimFlowSeg_PipesideDiam().get());
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

							MappedProperty _mapPro4;
							_mapPro4.setPropertyName("boilerEfficiency");
							_mapPro4.setValueType("Matrix");
							// set matrix
							std::vector<std::vector<double> > _matrix;
							_matrix.resize(6);
							_matrix[0].push_back(0);
							_matrix[0].push_back(0.78);
							_matrix[1].push_back(0.2);
							_matrix[1].push_back(0.79);
							_matrix[2].push_back(0.4);
							_matrix[2].push_back(0.82);
							_matrix[3].push_back(0.6);
							_matrix[3].push_back(0.84);
							_matrix[4].push_back(0.8);
							_matrix[4].push_back(0.86);
							_matrix[5].push_back(1);
							_matrix[5].push_back(0.88);
							_mapPro4.setValueMatrix(_matrix);
							_mapPro4.setRecordInstance("boilerEfficiencyB");
							_mapPro4.setRecordLocation("AixLib.DataBase.Boiler.BoilerEfficiencyBaseDataDefinition");
							// add property
							_mapCom.addMappedProperty(_mapPro4);
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
void RuleFilter::setMappingRule(::std::auto_ptr<Data_Model_Map>& _mapping_rule)
{
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
}