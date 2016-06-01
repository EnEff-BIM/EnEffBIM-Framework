#include "SimHierarchy.h"
#include "../SimModel_Mapping/SimMapping.h"
#include "../SimModel_PyCallBack/SimPyCallBack.h"

// get its parent objects
std::vector<SimHierarchyNode*>& SimHierarchyNode::getParentList()
{
	return ParentList;
}

// get its child objects
std::vector<SimHierarchyNode*>& SimHierarchyNode::getChildList()
{
	return ChildList;
}

// get its mapped objects
std::vector<MappedComponent*>& SimHierarchyNode::getMappedComponents()
{
	return LocalMappedComponentList;
}

// check SimModel object class type
bool SimHierarchyNode::isClassType(std::string _type)
{
	std::string __type = typeid(*_SimRootObject).name();
	if(__type.substr(__type.find_last_of(":")+1) == _type)
		return true;
	else
		return false;
}

// get SimModel object class type
std::string SimHierarchyNode::ClassType()
{
	std::string _type = typeid(*_SimRootObject).name();
	return _type.substr(_type.find_last_of(":")+1);
}

// check parent object
bool SimHierarchyNode::isParent(SimHierarchyNode& _simNode)
{
	if(ParentIdList.find(_simNode._SimRootObject->RefId()) != ParentIdList.end())
		return true;
	else
		return false;
}

bool SimHierarchyNode::isParent(SimHierarchyNode* _simNode)
{
	if(ParentIdList.find(_simNode->_SimRootObject->RefId()) != ParentIdList.end())
		return true;
	else
		return false;
}

// check child object
bool SimHierarchyNode::isChild(SimHierarchyNode& _simNode)
{
	if(ChildIdList.find(_simNode._SimRootObject->RefId()) != ChildIdList.end())
		return true;
	else
		return false;
}

bool SimHierarchyNode::isChild(SimHierarchyNode* _simNode)
{
	if(ChildIdList.find(_simNode->_SimRootObject->RefId()) != ChildIdList.end())
		return true;
	else
		return false;
}

// add mapped component object
void SimHierarchyNode::addMappedComponent(MappedComponent& _mapObj)
{
	LocalMappedComponentList.push_back(&_mapObj);
}

// set SimModel object
void setCurrentObject(SimHierarchyNode& _simNode, SimRoot& _simObj)
{
	_simNode._SimRootObject = &_simObj;
}

// add parent object
void addParent(SimHierarchyNode& _simNode, SimHierarchyNode& _simParentNode)
{
	_simNode.ParentList.push_back(&_simParentNode);
	_simNode.ParentIdList.insert(_simParentNode._SimRootObject->RefId());
}

// add child object
void addChild(SimHierarchyNode& _simNode, SimHierarchyNode& _simChildNode)
{
	_simNode.ChildList.push_back(&_simChildNode);
	_simNode.ChildIdList.insert(_simChildNode._SimRootObject->RefId());

}

// add parent child relationship
void addNodesRelationship(SimHierarchyNode& _simParentNode, SimHierarchyNode&_simChildNode)
{
	// add parent nodes of the given child node
	addParent(_simChildNode, _simParentNode);
	// add child nodes of the given parent node
	addChild(_simParentNode, _simChildNode);
}

/**********************************************************************/

// get SimModel Hierarchical Root Node
SimHierarchyNode* SimHierarchy::getHierarchyRootNode()
{
	if(SimHierarchyNodeList.size())
		return &SimHierarchyNodeList.at(0);
	else
		return NULL;
}

// get SimModel Hierarchical Nodes
/*std::vector<SimHierarchyNode> SimHierarchy::getHierarchyNodeList()
{
	return SimHierarchyNodeList;
}*/

std::vector<SimHierarchyNode>& SimHierarchy::getHierarchyNodeList()
{
	return SimHierarchyNodeList;
}

// get SimModel Hierarchical Node by retrieve object Id
SimHierarchyNode* SimHierarchy::getHierarchyNode(std::string _Id)
{
	std::map<std::string, SimHierarchyNode*>::iterator _it = SimHierarchyNode_IdMapList.find(_Id);
	if(_it != SimHierarchyNode_IdMapList.end())
		return _it->second;
	else
		return NULL;
}

// check SimModel object class type
bool SimHierarchy::isClassType(SimRoot& _simObj, std::string _type)
{
	std::string __type = typeid(_simObj).name();
	if(__type.substr(__type.find_last_of(":")+1) == _type)
		return true;
	else
		return false;
}

bool SimHierarchy::isClassType(SimRoot* _simObj, std::string _type)
{
	std::string __type = typeid(*_simObj).name();
	if(__type.substr(__type.find_last_of(":")+1) == _type)
		return true;
	else
		return false;
}

// get SimModel object class type
std::string SimHierarchy::ClassType(SimRoot& _simObj)
{
	std::string _type = typeid(_simObj).name();
	return _type.substr(_type.find_last_of(":")+1);
}

std::string SimHierarchy::ClassType(SimRoot* _simObj)
{
	std::string _type = typeid(*_simObj).name();
	return _type.substr(_type.find_last_of(":")+1);
}

// set Python callback function
void SimHierarchy::setCallBack(SimPyCallBack& callback)
{
	_callback = &callback;
}

void SimHierarchy::parseMaterialLayer(SimRoot* _simMaterialLayerObj, std::vector<std::pair<int, int> >& _nodeIndexPairList, std::map<std::string, int>& _nodeIndexList, int _id_MaterialLayerSet)
{
	if(_simMaterialLayerObj)
	{
		// check node index list: avoid recreating the same node
		if(_nodeIndexList.find(_simMaterialLayerObj->RefId())==_nodeIndexList.end())
		{
			SimHierarchyNode SimMaterialLayer_Node;
			setCurrentObject(SimMaterialLayer_Node, *_simMaterialLayerObj);
			addHierarchyNode(SimMaterialLayer_Node);
			int _id_SimMaterialLayer = SimHierarchyNodeList.size() - 1;
			// save current object index position: <ref_id, index_pos>
			_nodeIndexList.insert(std::pair<std::string, int>(_simMaterialLayerObj->RefId(), _id_SimMaterialLayer));
			// save index pair for parent-child relationships
			_nodeIndexPairList.push_back(std::pair<int, int>(_id_MaterialLayerSet, _id_SimMaterialLayer));

			// parse material
			std::string _materialId = "";
			_materialId = _callback->getReferenceId(_simMaterialLayerObj->RefId(), "SimMatLayer_MaterialName");
			if(_materialId!="")
			{
				SimRoot* _simMaterialObj = _callback->getSimClassObj(_materialId);
				if(_simMaterialObj)
				{
					// check node index list: avoid recreating the same node
					if(_nodeIndexList.find(_simMaterialObj->RefId())==_nodeIndexList.end())
					{
						SimHierarchyNode SimMaterial_Node;
						setCurrentObject(SimMaterial_Node, *_simMaterialObj);
						addHierarchyNode(SimMaterial_Node);
						int _id_SimMaterial = SimHierarchyNodeList.size() - 1;
						// save current object index position: <ref_id, index_pos>
						_nodeIndexList.insert(std::pair<std::string, int>(_simMaterialObj->RefId(), _id_SimMaterial));
						// save index pair for parent-child relationships
						_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimMaterialLayer, _id_SimMaterial));
					}
					else
					{
						// save index pair for parent-child relationships
						_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimMaterialLayer, _nodeIndexList.find(_simMaterialObj->RefId())->second));
					}
				}
			}
		}
		else
		{
			// save index pair for parent-child relationships
			_nodeIndexPairList.push_back(std::pair<int, int>(_id_MaterialLayerSet, _nodeIndexList.find(_simMaterialLayerObj->RefId())->second));
		}
	}
}

// parse SimSpace
void SimHierarchy::parseSimSpaceTree(::std::auto_ptr< ::schema::simxml::Model::SimModel >& simGeometryData, std::vector<std::pair<int, int> >& _nodeIndexPairList, std::map<std::string, int>& _nodeIndexList, SimModel::SimSpatialZone_ThermalZone_Default_iterator& _simThermalZoneIt)
{
	// parse SimSpace
	for(SimModel::SimSpace_Occupied_Default_iterator _simSpaceOccupiedIt=simGeometryData->SimSpace_Occupied_Default().begin(); _simSpaceOccupiedIt!=simGeometryData->SimSpace_Occupied_Default().end(); ++_simSpaceOccupiedIt)
	{
		if(_simSpaceOccupiedIt->SpaceZoneAssignments().present())
		{
			for(::xml_schema::idrefs::iterator _simSpaceOccupiedSubIt=_simSpaceOccupiedIt->SpaceZoneAssignments().get().begin(); _simSpaceOccupiedSubIt!=_simSpaceOccupiedIt->SpaceZoneAssignments().get().end(); ++_simSpaceOccupiedSubIt)
			{
				if(*_simSpaceOccupiedSubIt==_simThermalZoneIt->RefId())
				{
					// check node index list: avoid recreating the same node
					if(_nodeIndexList.find(_simSpaceOccupiedIt->RefId())==_nodeIndexList.end())
					{
						SimHierarchyNode SimSpace_Occupied_Node;
						setCurrentObject(SimSpace_Occupied_Node, *_simSpaceOccupiedIt);
						addHierarchyNode(SimSpace_Occupied_Node);
						int _id_SimSpaceOccupied = SimHierarchyNodeList.size() - 1;
						// save current object index position: <ref_id, index_pos>
						_nodeIndexList.insert(std::pair<std::string, int>(_simSpaceOccupiedIt->RefId(), _id_SimSpaceOccupied));

						// save index pair for parent-child relationships
						_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simThermalZoneIt->RefId())->second, _id_SimSpaceOccupied));

						// link to building story
						if(_simSpaceOccupiedIt->SpaceInSpatialContainer().present() && _nodeIndexList.find(_simSpaceOccupiedIt->SpaceInSpatialContainer().get())!=_nodeIndexList.end())
						{
							// save index pair for parent-child relationships
							_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simSpaceOccupiedIt->SpaceInSpatialContainer().get())->second, _nodeIndexList.find(_simSpaceOccupiedIt->RefId())->second));
						}

						// parse SimSpaceBoundary
						for(SimModel::SimSpaceBoundary_SecondLevel_SubTypeA_iterator _simSpaceBoundarySecondSubTypeAIt=simGeometryData->SimSpaceBoundary_SecondLevel_SubTypeA().begin(); _simSpaceBoundarySecondSubTypeAIt!=simGeometryData->SimSpaceBoundary_SecondLevel_SubTypeA().end(); ++_simSpaceBoundarySecondSubTypeAIt)
						{
							if(_simSpaceBoundarySecondSubTypeAIt->RelatingSpace().present() && _simSpaceBoundarySecondSubTypeAIt->RelatingSpace().get()==_simSpaceOccupiedIt->RefId())
							{
								// check node index list: avoid recreating the same node
								if(_nodeIndexList.find(_simSpaceBoundarySecondSubTypeAIt->RefId())==_nodeIndexList.end())
								{
									SimHierarchyNode SimSpaceBoundary_SecondSubTypeA_Node;
									setCurrentObject(SimSpaceBoundary_SecondSubTypeA_Node, *_simSpaceBoundarySecondSubTypeAIt);
									addHierarchyNode(SimSpaceBoundary_SecondSubTypeA_Node);
									int _id_SimSpaceBoundary_SecondSubTypeA = SimHierarchyNodeList.size() - 1;
									// save current object index position: <ref_id, index_pos>
									_nodeIndexList.insert(std::pair<std::string, int>(_simSpaceBoundarySecondSubTypeAIt->RefId(), _id_SimSpaceBoundary_SecondSubTypeA));

									// save index pair for parent-child relationships
									_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simSpaceOccupiedIt->RefId())->second, _id_SimSpaceBoundary_SecondSubTypeA));

									// parse SimBuildingElement: different element classes
									if(_simSpaceBoundarySecondSubTypeAIt->RelatedBuildingElement().present() && _callback)
									{
										SimRoot* _simBuildingElementObj = _callback->getSimClassObj(_simSpaceBoundarySecondSubTypeAIt->RelatedBuildingElement().get());
										if(_simBuildingElementObj)
										{
											// check node index list: avoid recreating the same node
											if(_nodeIndexList.find(_simBuildingElementObj->RefId())==_nodeIndexList.end())
											{
												SimHierarchyNode SimBuildingElement_Node;
												setCurrentObject(SimBuildingElement_Node, *_simBuildingElementObj);
												addHierarchyNode(SimBuildingElement_Node);
												int _id_SimBuildingElement = SimHierarchyNodeList.size() - 1;
												// save current object index position: <ref_id, index_pos>
												_nodeIndexList.insert(std::pair<std::string, int>(_simBuildingElementObj->RefId(), _id_SimBuildingElement));
												// save index pair for parent-child relationships
												_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simSpaceBoundarySecondSubTypeAIt->RefId())->second, _id_SimBuildingElement));

												// parse SimBuildingElement node internal link: material, opening, building story
												// MaterialLayerSet
												std::string _materialLayerSetId = "";
												if(ClassType(_simBuildingElementObj)=="SimWindow_Window_Exterior")
													_materialLayerSetId = _callback->getReferenceId(_simBuildingElementObj->RefId(), "MaterialList");
												else
													_materialLayerSetId = _callback->getReferenceId(_simBuildingElementObj->RefId(), "MaterialLayerSet");
										
												if(_materialLayerSetId!="")
												{
													SimRoot* _simMaterialLayerSetObj = _callback->getSimClassObj(_materialLayerSetId);
													if(_simMaterialLayerSetObj)
													{
														// check node index list: avoid recreating the same node
														if(_nodeIndexList.find(_simMaterialLayerSetObj->RefId())==_nodeIndexList.end())
														{
															SimHierarchyNode SimMaterialLayerSet_Node;
															setCurrentObject(SimMaterialLayerSet_Node, *_simMaterialLayerSetObj);
															addHierarchyNode(SimMaterialLayerSet_Node);
															int _id_SimMaterialLayerSet = SimHierarchyNodeList.size() - 1;
															// save current object index position: <ref_id, index_pos>
															_nodeIndexList.insert(std::pair<std::string, int>(_simMaterialLayerSetObj->RefId(), _id_SimMaterialLayerSet));
															// save index pair for parent-child relationships
															_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simBuildingElementObj->RefId())->second, _id_SimMaterialLayerSet));

															// parse outside MaterialLayer
															std::string _outsideMaterialLayerId = "";
															_outsideMaterialLayerId = _callback->getReferenceId(_materialLayerSetId, "SimMatLayerSet_OutsideLayer");
															if(_outsideMaterialLayerId!="")
															{
																SimRoot* _simMaterialLayerObj = _callback->getSimClassObj(_outsideMaterialLayerId);
																// add metrial layer
																parseMaterialLayer(_simMaterialLayerObj, _nodeIndexPairList, _nodeIndexList, _id_SimMaterialLayerSet);	
															}

															// parse the other MaterialLayer
															//{
															// create proxy layer class id
															//std::string _proxyClassId = _materialLayerSetId+"P";
															//SimMaterialLayer2_10 _proxyClassObj = SimMaterialLayer2_10(_proxyClassId);
															
															if(ClassType(_simMaterialLayerSetObj)=="SimMaterialLayerSet_OpaqueLayerSet_Roof")
															{
																SimMaterialLayerSet_OpaqueLayerSet_Roof* _simMaterialLayerSetObj_tmp = static_cast<SimMaterialLayerSet_OpaqueLayerSet_Roof*>(_simMaterialLayerSetObj);
																// add proxy layer class
																/*SimHierarchyNode SimProxyClass_Node;
																setCurrentObject(SimProxyClass_Node, simProxyClassList[0]);
																addHierarchyNode(SimProxyClass_Node);
																int _id_SimProxyClass = SimHierarchyNodeList.size() - 1;
																// save index pair for parent-child relationships
																_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_materialLayerSetId)->second, _id_SimProxyClass));*/
																// add other MaterialLayers
																for(::xml_schema::idrefs::iterator _simTmpIt=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().begin(); _simTmpIt!=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().end(); ++_simTmpIt)
																{
																	SimRoot* _tmpObj = _callback->getSimClassObj(*_simTmpIt);
																	// add metrial layer
																	parseMaterialLayer(_tmpObj, _nodeIndexPairList, _nodeIndexList, _id_SimMaterialLayerSet);
																}
															}
															else if(ClassType(_simMaterialLayerSetObj)=="SimMaterialLayerSet_OpaqueLayerSet_Floor")
															{
																SimMaterialLayerSet_OpaqueLayerSet_Floor* _simMaterialLayerSetObj_tmp = static_cast<SimMaterialLayerSet_OpaqueLayerSet_Floor*>(_simMaterialLayerSetObj);
																// add other MaterialLayers
																for(::xml_schema::idrefs::iterator _simTmpIt=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().begin(); _simTmpIt!=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().end(); ++_simTmpIt)
																{
																	SimRoot* _tmpObj = _callback->getSimClassObj(*_simTmpIt);
																	// add metrial layer
																	parseMaterialLayer(_tmpObj, _nodeIndexPairList, _nodeIndexList, _id_SimMaterialLayerSet);
																}
															}
															else if(ClassType(_simMaterialLayerSetObj)=="SimMaterialLayerSet_OpaqueLayerSet_Wall")
															{
																SimMaterialLayerSet_OpaqueLayerSet_Wall* _simMaterialLayerSetObj_tmp = static_cast<SimMaterialLayerSet_OpaqueLayerSet_Wall*>(_simMaterialLayerSetObj);
																// add other MaterialLayers
																for(::xml_schema::idrefs::iterator _simTmpIt=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().begin(); _simTmpIt!=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().end(); ++_simTmpIt)
																{
																	SimRoot* _tmpObj = _callback->getSimClassObj(*_simTmpIt);
																	// add metrial layer
																	parseMaterialLayer(_tmpObj, _nodeIndexPairList, _nodeIndexList, _id_SimMaterialLayerSet);
																}
															}
															else if(ClassType(_simMaterialLayerSetObj)=="SimMaterialLayerSet_GlazingLayerSet_Window")
															{
																SimMaterialLayerSet_GlazingLayerSet_Window* _simMaterialLayerSetObj_tmp = static_cast<SimMaterialLayerSet_GlazingLayerSet_Window*>(_simMaterialLayerSetObj);
																if(_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().present())
																{
																	// add other MaterialLayers
																	for(::xml_schema::idrefs::iterator _simTmpIt=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().begin(); _simTmpIt!=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().end(); ++_simTmpIt)
																	{
																		SimRoot* _tmpObj = _callback->getSimClassObj(*_simTmpIt);
																		// add metrial layer
																		parseMaterialLayer(_tmpObj, _nodeIndexPairList, _nodeIndexList, _id_SimMaterialLayerSet);
																	}
																}	
															}
															
																/***************************************/
															//}
														}
														else
														{
															// save index pair for parent-child relationships
															_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simBuildingElementObj->RefId())->second, _nodeIndexList.find(_simMaterialLayerSetObj->RefId())->second));
														}
													}
												}
										
												// opening on building element
												for(SimModel::SimFeatureElementSubtraction_Void_Opening_iterator _simFeatureElementSubtractionVoidOpeningIt=simGeometryData->SimFeatureElementSubtraction_Void_Opening().begin(); _simFeatureElementSubtractionVoidOpeningIt!=simGeometryData->SimFeatureElementSubtraction_Void_Opening().end(); ++_simFeatureElementSubtractionVoidOpeningIt)
												{
													if(_simFeatureElementSubtractionVoidOpeningIt->VoidedBldgElement().present() && _simFeatureElementSubtractionVoidOpeningIt->VoidedBldgElement().get()==_simBuildingElementObj->RefId())
													{
														// check node index list: avoid recreating the same node
														if(_nodeIndexList.find(_simFeatureElementSubtractionVoidOpeningIt->RefId())==_nodeIndexList.end())
														{
															SimHierarchyNode SimFeatureElementSubtractionVoidOpening_Node;
															setCurrentObject(SimFeatureElementSubtractionVoidOpening_Node, *_simFeatureElementSubtractionVoidOpeningIt);
															addHierarchyNode(SimFeatureElementSubtractionVoidOpening_Node);
															int _id_SimFeatureElementSubtractionVoidOpening = SimHierarchyNodeList.size() - 1;
															// save current object index position: <ref_id, index_pos>
															_nodeIndexList.insert(std::pair<std::string, int>(_simFeatureElementSubtractionVoidOpeningIt->RefId(), _id_SimFeatureElementSubtractionVoidOpening));
															// save index pair for parent-child relationships
															_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simBuildingElementObj->RefId())->second, _id_SimFeatureElementSubtractionVoidOpening));
															// parse window filling the opening
															for(SimModel::SimWindow_Window_Exterior_iterator _simWindowExteriorIt=simGeometryData->SimWindow_Window_Exterior().begin(); _simWindowExteriorIt!=simGeometryData->SimWindow_Window_Exterior().end(); ++_simWindowExteriorIt)
															{
																if(_simWindowExteriorIt->OpeningFilledByWindow().present() && _simWindowExteriorIt->OpeningFilledByWindow().get()==_simFeatureElementSubtractionVoidOpeningIt->RefId())
																{
																	// check node index list: avoid recreating the same node
																	if(_nodeIndexList.find(_simWindowExteriorIt->RefId())==_nodeIndexList.end())
																	{
																		SimHierarchyNode SimWindowExterior_Node;
																		setCurrentObject(SimWindowExterior_Node, *_simWindowExteriorIt);
																		addHierarchyNode(SimWindowExterior_Node);
																		int _id_SimWindowExterior = SimHierarchyNodeList.size() - 1;
																		// save current object index position: <ref_id, index_pos>
																		_nodeIndexList.insert(std::pair<std::string, int>(_simWindowExteriorIt->RefId(), _id_SimWindowExterior));
																		// save index pair for parent-child relationships
																		_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simFeatureElementSubtractionVoidOpeningIt->RefId())->second, _id_SimWindowExterior));
																	}
																	else
																	{
																		// save index pair for parent-child relationships
																		_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simFeatureElementSubtractionVoidOpeningIt->RefId())->second, _nodeIndexList.find(_simWindowExteriorIt->RefId())->second));
																	}
																}
													
																break;
															}
														}
														else
														{
															// save index pair for parent-child relationships
															_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simBuildingElementObj->RefId())->second, _nodeIndexList.find(_simFeatureElementSubtractionVoidOpeningIt->RefId())->second));
														}
													}
												}
										
												// building story link
												std::string _storeyId = "";
												_storeyId = _callback->getReferenceId(_simBuildingElementObj->RefId(), "ContainingSpatialStructure");
												if(_storeyId!="" && _nodeIndexList.find(_storeyId)!=_nodeIndexList.end())
												{
													// save index pair for parent-child relationships
													_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_storeyId)->second, _nodeIndexList.find(_simBuildingElementObj->RefId())->second));
												}
											}
											else
											{
												// save index pair for parent-child relationships
												_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simSpaceBoundarySecondSubTypeAIt->RefId())->second, _nodeIndexList.find(_simBuildingElementObj->RefId())->second));
											}
										}
									}
								}
								else
								{
									// save index pair for parent-child relationships
									_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simSpaceOccupiedIt->RefId())->second, _nodeIndexList.find(_simSpaceBoundarySecondSubTypeAIt->RefId())->second));
								}
							}
						}////
					}
					else
					{
						// save index pair for parent-child relationships
						_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simThermalZoneIt->RefId())->second, _nodeIndexList.find(_simSpaceOccupiedIt->RefId())->second));
					}

					break;
				}
			}
		}
	}
}

// load specified geometry class objects
void SimHierarchy::loadSimGeomClassObj(std::string _geoName)
{
	if(_callback)
	{
		std::vector<std::string> _simClassList;
		// building element
		_simClassList.push_back("SimSlab_RoofSlab_RoofUnderAir");
		_simClassList.push_back("SimSlab_Floor_FloorOverEarth");
		_simClassList.push_back("SimWall_Wall_ExteriorAboveGrade");
		_simClassList.push_back("SimWindow_Window_Exterior");
		// building MaterialLayerSet
		_simClassList.push_back("SimMaterialLayerSet_OpaqueLayerSet_Roof");
		_simClassList.push_back("SimMaterialLayerSet_OpaqueLayerSet_Floor");
		_simClassList.push_back("SimMaterialLayerSet_OpaqueLayerSet_Wall");
		_simClassList.push_back("SimMaterialLayerSet_GlazingLayerSet_Window");
		// building MaterialLayer
		_simClassList.push_back("SimMaterialLayer_OpaqueMaterialLayer_Default");
		_simClassList.push_back("SimMaterialLayer_GlazingMaterialLayer_Default");
		// building Material
		_simClassList.push_back("SimMaterial_OpaqueMaterial_Default");
		_simClassList.push_back("SimMaterial_OpaqueMaterial_AirGap");
		_simClassList.push_back("SimMaterial_GlazingMaterial_Gas");
		_simClassList.push_back("SimMaterial_GlazingMaterial_Glazing");
		_simClassList.push_back("SimMaterial_GlazingMaterial_SimpleGlazingSystem");
		// load data into dictionary
		_callback->loadSimGeomClassObj(_geoName, _simClassList);
	}
}

// load specified system class objects
void SimHierarchy::loadSimSysClassObj(std::string _sysName)
{
	if(_callback)
	{
		std::vector<std::string> _simClassList;
		// building element
		_simClassList.push_back("SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Water");
		_simClassList.push_back("SimFlowEnergyTransferStorage_HotWaterTank_Mixed");
		_simClassList.push_back("SimFlowFitting_Default_Default");
		_simClassList.push_back("SimFlowMover_Pump_VariableSpeedReturn");
		_simClassList.push_back("SimFlowPlant_Boiler_BoilerHotWater");
		_simClassList.push_back("SimFlowSegment_Pipe_Indoor");
		_simClassList.push_back("SimDistributionPort_HotWaterFlowPort_Water_Out");
		_simClassList.push_back("SimDistributionPort_HotWaterFlowPort_Water_In");
		// load data into dictionary
		_callback->loadSimSysClassObj(_sysName, _simClassList);
	}
}

// parse SimSystem
void SimHierarchy::parseSimSystem(::std::auto_ptr< ::schema::simxml::Model::SimModel >& simSysData, int _id_SimBuilding, std::vector<std::pair<int, int> >& _nodeIndexPairList, std::map<std::string, int>& _nodeIndexList)
{
	std::set<std::string> _systemIdList;
	for(SimModel::SimSystem_HvacHotWater_FullSystem_iterator _simSystemIt=simSysData->SimSystem_HvacHotWater_FullSystem().begin(); _simSystemIt!=simSysData->SimSystem_HvacHotWater_FullSystem().end(); ++_simSystemIt)
	{
		_systemIdList.insert(_simSystemIt->RefId());
	}

	// parse SimSystem
	if(_nodeIndexList.find(simSysData->SimSystem_HvacHotWater_FullSystem().front().RefId())==_nodeIndexList.end())
	{
		SimHierarchyNode SimSystem_Node;
		setCurrentObject(SimSystem_Node, simSysData->SimSystem_HvacHotWater_FullSystem().front());
		addHierarchyNode(SimSystem_Node);
		int _id_SimSystem = SimHierarchyNodeList.size() - 1;

		// save current object index position: <ref_id, index_pos>
		_nodeIndexList.insert(std::pair<std::string, int>(simSysData->SimSystem_HvacHotWater_FullSystem().front().RefId(), _id_SimSystem));
		// save index pair for parent-child relationships
		_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimBuilding, _id_SimSystem));

		// parse system element
		for(SimModel::SimFlowController_Valve_Default_iterator _simFlowControllerValveIt=simSysData->SimFlowController_Valve_Default().begin(); _simFlowControllerValveIt!=simSysData->SimFlowController_Valve_Default().end(); ++_simFlowControllerValveIt)
		{
			if(_simFlowControllerValveIt->AssignedToGroups().present())
			{
				for(::xml_schema::idrefs::iterator _simFlowControllerValveSubIt=_simFlowControllerValveIt->AssignedToGroups().get().begin(); _simFlowControllerValveSubIt!=_simFlowControllerValveIt->AssignedToGroups().get().end(); ++_simFlowControllerValveSubIt)
				{
					if(_systemIdList.find(*_simFlowControllerValveSubIt)!=_systemIdList.end())
					{
						if(_nodeIndexList.find(_simFlowControllerValveIt->RefId())==_nodeIndexList.end())
						{
							SimHierarchyNode SimFlowControllerValve_Node;
							setCurrentObject(SimFlowControllerValve_Node, *_simFlowControllerValveIt);
							addHierarchyNode(SimFlowControllerValve_Node);
							int _id_SimFlowControllerValve = SimHierarchyNodeList.size() - 1;
							// save current object index position: <ref_id, index_pos>
							_nodeIndexList.insert(std::pair<std::string, int>(_simFlowControllerValveIt->RefId(), _id_SimFlowControllerValve));
							// save index pair for parent-child relationships
							_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimSystem, _id_SimFlowControllerValve));
						}
						else
						{
							// save index pair for parent-child relationships
							_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimSystem, _nodeIndexList.find(_simFlowControllerValveIt->RefId())->second));
						}
					}

					break;
				}
			}
		}
		// system element
		for(SimModel::SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Water_iterator _simSystemElementIt=simSysData->SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Water().begin(); _simSystemElementIt!=simSysData->SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Water().end(); ++_simSystemElementIt)
		{
			if(_simSystemElementIt->AssignedToGroups().present())
			{
				for(::xml_schema::idrefs::iterator _simSystemElementSubIt=_simSystemElementIt->AssignedToGroups().get().begin(); _simSystemElementSubIt!=_simSystemElementIt->AssignedToGroups().get().end(); ++_simSystemElementSubIt)
				{
					if(_systemIdList.find(*_simSystemElementSubIt)!=_systemIdList.end())
					{
						if(_nodeIndexList.find(_simSystemElementIt->RefId())==_nodeIndexList.end())
						{
							SimHierarchyNode SimSystemElement_Node;
							setCurrentObject(SimSystemElement_Node, *_simSystemElementIt);
							addHierarchyNode(SimSystemElement_Node);
							int _id_SimSystemElement = SimHierarchyNodeList.size() - 1;
							// save current object index position: <ref_id, index_pos>
							_nodeIndexList.insert(std::pair<std::string, int>(_simSystemElementIt->RefId(), _id_SimSystemElement));
							// save index pair for parent-child relationships
							_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimSystem, _id_SimSystemElement));
						}
						else
						{
							// save index pair for parent-child relationships
							_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimSystem, _nodeIndexList.find(_simSystemElementIt->RefId())->second));
						}
					}

					// zone Hvac group id

					break;
				}
			}
		}
		// system element
		for(SimModel::SimFlowEnergyTransferStorage_HotWaterTank_Mixed_iterator _simSystemElementIt=simSysData->SimFlowEnergyTransferStorage_HotWaterTank_Mixed().begin(); _simSystemElementIt!=simSysData->SimFlowEnergyTransferStorage_HotWaterTank_Mixed().end(); ++_simSystemElementIt)
		{
			if(_simSystemElementIt->AssignedToGroups().present())
			{
				for(::xml_schema::idrefs::iterator _simSystemElementSubIt=_simSystemElementIt->AssignedToGroups().get().begin(); _simSystemElementSubIt!=_simSystemElementIt->AssignedToGroups().get().end(); ++_simSystemElementSubIt)
				{
					if(_systemIdList.find(*_simSystemElementSubIt)!=_systemIdList.end())
					{
						if(_nodeIndexList.find(_simSystemElementIt->RefId())==_nodeIndexList.end())
						{
							SimHierarchyNode SimSystemElement_Node;
							setCurrentObject(SimSystemElement_Node, *_simSystemElementIt);
							addHierarchyNode(SimSystemElement_Node);
							int _id_SimSystemElement = SimHierarchyNodeList.size() - 1;
							// save current object index position: <ref_id, index_pos>
							_nodeIndexList.insert(std::pair<std::string, int>(_simSystemElementIt->RefId(), _id_SimSystemElement));
							// save index pair for parent-child relationships
							_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimSystem, _id_SimSystemElement));
						}
						else
						{
							// save index pair for parent-child relationships
							_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimSystem, _nodeIndexList.find(_simSystemElementIt->RefId())->second));
						}
					}

					break;
				}
			}
		}
		// system element
		for(SimModel::SimFlowFitting_Default_Default_iterator _simSystemElementIt=simSysData->SimFlowFitting_Default_Default().begin(); _simSystemElementIt!=simSysData->SimFlowFitting_Default_Default().end(); ++_simSystemElementIt)
		{
			if(_simSystemElementIt->AssignedToGroups().present())
			{
				for(::xml_schema::idrefs::iterator _simSystemElementSubIt=_simSystemElementIt->AssignedToGroups().get().begin(); _simSystemElementSubIt!=_simSystemElementIt->AssignedToGroups().get().end(); ++_simSystemElementSubIt)
				{
					if(_systemIdList.find(*_simSystemElementSubIt)!=_systemIdList.end())
					{
						if(_nodeIndexList.find(_simSystemElementIt->RefId())==_nodeIndexList.end())
						{
							SimHierarchyNode SimSystemElement_Node;
							setCurrentObject(SimSystemElement_Node, *_simSystemElementIt);
							addHierarchyNode(SimSystemElement_Node);
							int _id_SimSystemElement = SimHierarchyNodeList.size() - 1;
							// save current object index position: <ref_id, index_pos>
							_nodeIndexList.insert(std::pair<std::string, int>(_simSystemElementIt->RefId(), _id_SimSystemElement));
							// save index pair for parent-child relationships
							_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimSystem, _id_SimSystemElement));
						}
						else
						{
							// save index pair for parent-child relationships
							_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimSystem, _nodeIndexList.find(_simSystemElementIt->RefId())->second));
						}
					}

					break;
				}
			}
		}
		// system element
		for(SimModel::SimFlowMover_Pump_VariableSpeedReturn_iterator _simSystemElementIt=simSysData->SimFlowMover_Pump_VariableSpeedReturn().begin(); _simSystemElementIt!=simSysData->SimFlowMover_Pump_VariableSpeedReturn().end(); ++_simSystemElementIt)
		{
			if(_simSystemElementIt->AssignedToGroups().present())
			{
				for(::xml_schema::idrefs::iterator _simSystemElementSubIt=_simSystemElementIt->AssignedToGroups().get().begin(); _simSystemElementSubIt!=_simSystemElementIt->AssignedToGroups().get().end(); ++_simSystemElementSubIt)
				{
					if(_systemIdList.find(*_simSystemElementSubIt)!=_systemIdList.end())
					{
						if(_nodeIndexList.find(_simSystemElementIt->RefId())==_nodeIndexList.end())
						{
							SimHierarchyNode SimSystemElement_Node;
							setCurrentObject(SimSystemElement_Node, *_simSystemElementIt);
							addHierarchyNode(SimSystemElement_Node);
							int _id_SimSystemElement = SimHierarchyNodeList.size() - 1;
							// save current object index position: <ref_id, index_pos>
							_nodeIndexList.insert(std::pair<std::string, int>(_simSystemElementIt->RefId(), _id_SimSystemElement));
							// save index pair for parent-child relationships
							_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimSystem, _id_SimSystemElement));
						}
						else
						{
							// save index pair for parent-child relationships
							_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimSystem, _nodeIndexList.find(_simSystemElementIt->RefId())->second));
						}
					}

					break;
				}
			}
		}
		// system element
		for(SimModel::SimFlowPlant_Boiler_BoilerHotWater_iterator _simSystemElementIt=simSysData->SimFlowPlant_Boiler_BoilerHotWater().begin(); _simSystemElementIt!=simSysData->SimFlowPlant_Boiler_BoilerHotWater().end(); ++_simSystemElementIt)
		{
			if(_simSystemElementIt->AssignedToGroups().present())
			{
				for(::xml_schema::idrefs::iterator _simSystemElementSubIt=_simSystemElementIt->AssignedToGroups().get().begin(); _simSystemElementSubIt!=_simSystemElementIt->AssignedToGroups().get().end(); ++_simSystemElementSubIt)
				{
					if(_systemIdList.find(*_simSystemElementSubIt)!=_systemIdList.end())
					{
						if(_nodeIndexList.find(_simSystemElementIt->RefId())==_nodeIndexList.end())
						{
							SimHierarchyNode SimSystemElement_Node;
							setCurrentObject(SimSystemElement_Node, *_simSystemElementIt);
							addHierarchyNode(SimSystemElement_Node);
							int _id_SimSystemElement = SimHierarchyNodeList.size() - 1;
							// save current object index position: <ref_id, index_pos>
							_nodeIndexList.insert(std::pair<std::string, int>(_simSystemElementIt->RefId(), _id_SimSystemElement));
							// save index pair for parent-child relationships
							_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimSystem, _id_SimSystemElement));
						}
						else
						{
							// save index pair for parent-child relationships
							_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimSystem, _nodeIndexList.find(_simSystemElementIt->RefId())->second));
						}
					}

					break;
				}
			}
		}
		// system element
		for(SimModel::SimFlowSegment_Pipe_Indoor_iterator _simSystemElementIt=simSysData->SimFlowSegment_Pipe_Indoor().begin(); _simSystemElementIt!=simSysData->SimFlowSegment_Pipe_Indoor().end(); ++_simSystemElementIt)
		{
			if(_simSystemElementIt->AssignedToGroups().present())
			{
				for(::xml_schema::idrefs::iterator _simSystemElementSubIt=_simSystemElementIt->AssignedToGroups().get().begin(); _simSystemElementSubIt!=_simSystemElementIt->AssignedToGroups().get().end(); ++_simSystemElementSubIt)
				{
					if(_systemIdList.find(*_simSystemElementSubIt)!=_systemIdList.end())
					{
						if(_nodeIndexList.find(_simSystemElementIt->RefId())==_nodeIndexList.end())
						{
							SimHierarchyNode SimSystemElement_Node;
							setCurrentObject(SimSystemElement_Node, *_simSystemElementIt);
							addHierarchyNode(SimSystemElement_Node);
							int _id_SimSystemElement = SimHierarchyNodeList.size() - 1;
							// save current object index position: <ref_id, index_pos>
							_nodeIndexList.insert(std::pair<std::string, int>(_simSystemElementIt->RefId(), _id_SimSystemElement));
							// save index pair for parent-child relationships
							_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimSystem, _id_SimSystemElement));
						}
						else
						{
							// save index pair for parent-child relationships
							_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimSystem, _nodeIndexList.find(_simSystemElementIt->RefId())->second));
						}
					}

					break;
				}
			}
		}
		// simconnection
		for(SimModel::SimDistributionPort_HotWaterFlowPort_Water_Out_iterator _simPortElementIt=simSysData->SimDistributionPort_HotWaterFlowPort_Water_Out().begin(); _simPortElementIt!=simSysData->SimDistributionPort_HotWaterFlowPort_Water_Out().end(); ++_simPortElementIt)
		{
			if(_simPortElementIt->HostElement().present())
			{
				// search parent element
				if(_nodeIndexList.find(_simPortElementIt->HostElement().get())!=_nodeIndexList.end())
				{
					if(_nodeIndexList.find(_simPortElementIt->RefId())==_nodeIndexList.end())
					{
						SimHierarchyNode SimSystemElement_Node;
						setCurrentObject(SimSystemElement_Node, *_simPortElementIt);
						addHierarchyNode(SimSystemElement_Node);
						int _id_SimSystemElement = SimHierarchyNodeList.size() - 1;
						// save current object index position: <ref_id, index_pos>
						_nodeIndexList.insert(std::pair<std::string, int>(_simPortElementIt->RefId(), _id_SimSystemElement));
						// save index pair for parent-child relationships
						_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simPortElementIt->HostElement().get())->second, _id_SimSystemElement));
					}
					else
					{
						// save index pair for parent-child relationships
						_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simPortElementIt->HostElement().get())->second, _nodeIndexList.find(_simPortElementIt->RefId())->second));
					}
				}
			}
		}

		for(SimModel::SimDistributionPort_HotWaterFlowPort_Water_In_iterator _simPortElementIt=simSysData->SimDistributionPort_HotWaterFlowPort_Water_In().begin(); _simPortElementIt!=simSysData->SimDistributionPort_HotWaterFlowPort_Water_In().end(); ++_simPortElementIt)
		{
			if(_simPortElementIt->HostElement().present())
			{
				// search parent element
				if(_nodeIndexList.find(_simPortElementIt->HostElement().get())!=_nodeIndexList.end())
				{
					if(_nodeIndexList.find(_simPortElementIt->RefId())==_nodeIndexList.end())
					{
						SimHierarchyNode SimSystemElement_Node;
						setCurrentObject(SimSystemElement_Node, *_simPortElementIt);
						addHierarchyNode(SimSystemElement_Node);
						int _id_SimSystemElement = SimHierarchyNodeList.size() - 1;
						// save current object index position: <ref_id, index_pos>
						_nodeIndexList.insert(std::pair<std::string, int>(_simPortElementIt->RefId(), _id_SimSystemElement));
						// save index pair for parent-child relationships
						_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simPortElementIt->HostElement().get())->second, _id_SimSystemElement));
					}
					else
					{
						// save index pair for parent-child relationships
						_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simPortElementIt->HostElement().get())->second, _nodeIndexList.find(_simPortElementIt->RefId())->second));
					}
				}
			}
		}

		for(SimModel::SimConnection_HotWaterFlow_Default_iterator _simPortElementIt=simSysData->SimConnection_HotWaterFlow_Default().begin(); _simPortElementIt!=simSysData->SimConnection_HotWaterFlow_Default().end(); ++_simPortElementIt)
		{
			if(_simPortElementIt->SourcePort().present())
			{
				// search parent element
				if(_nodeIndexList.find(_simPortElementIt->SourcePort().get())!=_nodeIndexList.end())
				{
					if(_nodeIndexList.find(_simPortElementIt->RefId())==_nodeIndexList.end())
					{
						SimHierarchyNode SimSystemElement_Node;
						setCurrentObject(SimSystemElement_Node, *_simPortElementIt);
						addHierarchyNode(SimSystemElement_Node);
						int _id_SimSystemElement = SimHierarchyNodeList.size() - 1;
						// save current object index position: <ref_id, index_pos>
						_nodeIndexList.insert(std::pair<std::string, int>(_simPortElementIt->RefId(), _id_SimSystemElement));
						// save index pair for parent-child relationships
						_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simPortElementIt->SourcePort().get())->second, _id_SimSystemElement));
					}
					else
					{
						// save index pair for parent-child relationships
						_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simPortElementIt->SourcePort().get())->second, _nodeIndexList.find(_simPortElementIt->RefId())->second));
					}
				}
			}

			if(_simPortElementIt->TargetPort().present())
			{
				// search parent element
				if(_nodeIndexList.find(_simPortElementIt->TargetPort().get())!=_nodeIndexList.end())
				{
					if(_nodeIndexList.find(_simPortElementIt->RefId())==_nodeIndexList.end())
					{
						SimHierarchyNode SimSystemElement_Node;
						setCurrentObject(SimSystemElement_Node, *_simPortElementIt);
						addHierarchyNode(SimSystemElement_Node);
						int _id_SimSystemElement = SimHierarchyNodeList.size() - 1;
						// save current object index position: <ref_id, index_pos>
						_nodeIndexList.insert(std::pair<std::string, int>(_simPortElementIt->RefId(), _id_SimSystemElement));
						// save index pair for parent-child relationships
						_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simPortElementIt->TargetPort().get())->second, _id_SimSystemElement));
					}
					else
					{
						// save index pair for parent-child relationships
						_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simPortElementIt->TargetPort().get())->second, _nodeIndexList.find(_simPortElementIt->RefId())->second));
					}
				}
			}
		}
		// end
	}
	else
	{
		// save index pair for parent-child relationships
		_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimBuilding, _nodeIndexList.find(simSysData->SimSystem_HvacHotWater_FullSystem().front().RefId())->second));
	}
}

void SimHierarchy::parser(::std::auto_ptr< ::schema::simxml::Model::SimModel >& simGeometryData, ::std::auto_ptr< ::schema::simxml::Model::SimModel >& simSysData, std::string _geoName, std::string _sysName)
{
	// load specified geometry class objects
	loadSimGeomClassObj(_geoName);

	// parsing SimXML hierarchy
	// save <parent_node_index, child_node_index>
	std::vector<std::pair<int, int> > _nodeIndexPairList;
	// save object index position: <node_refId, node_index>
	std::map<std::string, int> _nodeIndexList;
	// parse SimProject
	if(simGeometryData->SimProject_Project_DesignAlternative().size())
	{
		SimHierarchyNode SimProject_Node;
		setCurrentObject(SimProject_Node, simGeometryData->SimProject_Project_DesignAlternative().front());
		addHierarchyNode(SimProject_Node);
		int _id_SimProject = SimHierarchyNodeList.size() - 1;

		// parse SimSite
		for(SimModel::SimSite_BuildingSite_Default_iterator _simSiteIt=simGeometryData->SimSite_BuildingSite_Default().begin(); _simSiteIt!=simGeometryData->SimSite_BuildingSite_Default().end(); ++_simSiteIt)
		{
			if(_simSiteIt->SiteInSpatialContainer().present())
			{	
				// check reference id
				if(_simSiteIt->SiteInSpatialContainer().get()==simGeometryData->SimProject_Project_DesignAlternative().front().RefId())
				{
					SimHierarchyNode SimSite_Node;
					setCurrentObject(SimSite_Node, *_simSiteIt);
					addHierarchyNode(SimSite_Node);
					int _id_SimSite = SimHierarchyNodeList.size() - 1;

					// save index pair for parent-child relationships
					_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimProject, _id_SimSite));

					// parse SimBuilding
					for(SimModel::SimBuilding_Building_Default_iterator _simBuildingIt=simGeometryData->SimBuilding_Building_Default().begin(); _simBuildingIt!=simGeometryData->SimBuilding_Building_Default().end(); ++_simBuildingIt)
					{
						if(_simBuildingIt->BuildingInSpatialContainer().present())
						{
							if(_simBuildingIt->BuildingInSpatialContainer().get()==_simSiteIt->RefId())
							{
								SimHierarchyNode SimBuilding_Node;
								setCurrentObject(SimBuilding_Node, *_simBuildingIt);
								addHierarchyNode(SimBuilding_Node);
								int _id_SimBuilding = SimHierarchyNodeList.size() - 1;

								// save index pair for parent-child relationships
								_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimSite, _id_SimBuilding));

								// parse building story
								for(SimModel::SimBuildingStory_BuildingStory_Default_iterator _simBuildingStoryIt=simGeometryData->SimBuildingStory_BuildingStory_Default().begin(); _simBuildingStoryIt!=simGeometryData->SimBuildingStory_BuildingStory_Default().end(); ++_simBuildingStoryIt)
								{
									if(_simBuildingStoryIt->BldgStoryInSpatialContainer().present() && _simBuildingStoryIt->BldgStoryInSpatialContainer().get()==_simBuildingIt->RefId())
									{
										SimHierarchyNode SimBuildingStory_Node;
										setCurrentObject(SimBuildingStory_Node, *_simBuildingStoryIt);
										addHierarchyNode(SimBuildingStory_Node);
										int _id_SimBuildingStory = SimHierarchyNodeList.size() - 1;
										// save current object index position: <ref_id, index_pos>
										_nodeIndexList.insert(std::pair<std::string, int>(_simBuildingStoryIt->RefId(), _id_SimBuildingStory));
										// save index pair for parent-child relationships
										_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimBuilding, _id_SimBuildingStory));
									}
								}

								// parse SimGroup (ZoneGroup)
								for(SimModel::SimGroup_SpatialZoneGroup_ZoneGroup_iterator _simGroupZoneIt=simGeometryData->SimGroup_SpatialZoneGroup_ZoneGroup().begin(); _simGroupZoneIt!=simGeometryData->SimGroup_SpatialZoneGroup_ZoneGroup().end(); ++_simGroupZoneIt)
								{
									if(_simGroupZoneIt->ContainingBuildings().present())
									{
										// stop checking when finding the 1st id instance meet the requriement: only one building each SimXML file
										for(::xml_schema::idrefs::iterator _simGroupZoneSubIt=_simGroupZoneIt->ContainingBuildings().get().begin(); _simGroupZoneSubIt!=_simGroupZoneIt->ContainingBuildings().get().end(); ++_simGroupZoneSubIt)
										{
											if(*_simGroupZoneSubIt==_simBuildingIt->RefId())
											{
												// check node index list: avoid recreating the same node
												if(_nodeIndexList.find(_simGroupZoneIt->RefId())==_nodeIndexList.end())
												{
													SimHierarchyNode SimGroup_ZoneGroup_Node;
													setCurrentObject(SimGroup_ZoneGroup_Node, *_simGroupZoneIt);
													addHierarchyNode(SimGroup_ZoneGroup_Node);
													int _id_SimGroup_ZoneGroup = SimHierarchyNodeList.size() - 1;
													// save current object index position: <ref_id, index_pos>
													_nodeIndexList.insert(std::pair<std::string, int>(_simGroupZoneIt->RefId(), _id_SimGroup_ZoneGroup));

													// save index pair for parent-child relationships
													_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimBuilding, _id_SimGroup_ZoneGroup));
												}
												else
												{
													// save index pair for parent-child relationships
													_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimBuilding, _nodeIndexList.find(_simGroupZoneIt->RefId())->second));
												}
												
												break;
											}
										}
									}
								}

								// parse SimGroup (ZoneHVAC)
								for(SimModel::SimGroup_SpatialZoneGroup_ZoneHvacGroup_iterator _simGroupZoneHvacIt=simGeometryData->SimGroup_SpatialZoneGroup_ZoneHvacGroup().begin(); _simGroupZoneHvacIt!=simGeometryData->SimGroup_SpatialZoneGroup_ZoneHvacGroup().end(); ++_simGroupZoneHvacIt)
								{
									// select non-template objects
									if(!_simGroupZoneHvacIt->IsTemplateObject().present() || !_simGroupZoneHvacIt->IsTemplateObject().get())
									{
										if(_simGroupZoneHvacIt->ContainingBuildings().present())
										{
											for(::xml_schema::idrefs::iterator _simGroupZoneHvacSubIt=_simGroupZoneHvacIt->ContainingBuildings().get().begin(); _simGroupZoneHvacSubIt!=_simGroupZoneHvacIt->ContainingBuildings().get().end(); ++_simGroupZoneHvacSubIt)
											{
												if(*_simGroupZoneHvacSubIt==_simBuildingIt->RefId())
												{
													// check node index list: avoid recreating the same node
													if(_nodeIndexList.find(_simGroupZoneHvacIt->RefId())==_nodeIndexList.end())
													{
														SimHierarchyNode SimGroup_ZoneHvacGroup_Node;
														setCurrentObject(SimGroup_ZoneHvacGroup_Node, *_simGroupZoneHvacIt);
														addHierarchyNode(SimGroup_ZoneHvacGroup_Node);
														int _id_SimGroup_ZoneHvacGroup = SimHierarchyNodeList.size() - 1;
														// save current object index position: <ref_id, index_pos>
														_nodeIndexList.insert(std::pair<std::string, int>(_simGroupZoneHvacIt->RefId(), _id_SimGroup_ZoneHvacGroup));

														// save index pair for parent-child relationships
														_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimBuilding, _id_SimGroup_ZoneHvacGroup));
													}
													else
													{
														// save index pair for parent-child relationships
														_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimBuilding, _nodeIndexList.find(_simGroupZoneHvacIt->RefId())->second));
													}

													break;
												}
											}
										}
									}
								}

								// parse SimZone (ThermalZone)
								for(SimModel::SimSpatialZone_ThermalZone_Default_iterator _simThermalZoneIt=simGeometryData->SimSpatialZone_ThermalZone_Default().begin(); _simThermalZoneIt!=simGeometryData->SimSpatialZone_ThermalZone_Default().end(); ++_simThermalZoneIt)
								{
									// assigned to SimBuilding
									if(_simThermalZoneIt->ContainingBuilding().present() && _simThermalZoneIt->ContainingBuilding().get()==_simBuildingIt->RefId())
									{
										SimHierarchyNode SimThermalZone_Node;
										setCurrentObject(SimThermalZone_Node, *_simThermalZoneIt);
										addHierarchyNode(SimThermalZone_Node);
										int _id_SimThermalZone = SimHierarchyNodeList.size() - 1;
										// save current object index position: <ref_id, index_pos>
										_nodeIndexList.insert(std::pair<std::string, int>(_simThermalZoneIt->RefId(), _id_SimThermalZone));

										// save index pair for parent-child relationships
										_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimBuilding, _id_SimThermalZone));

										// parse SimSpace tree
										parseSimSpaceTree(simGeometryData, _nodeIndexPairList, _nodeIndexList, _simThermalZoneIt);
									}

									// assigned to SimGroup: ZoneGroup + ZoneHVAC
									if(_simThermalZoneIt->ParentGroups().present())
									{
										for(::xml_schema::idrefs::iterator _simThermalZoneSubIt=_simThermalZoneIt->ParentGroups().get().begin(); _simThermalZoneSubIt!=_simThermalZoneIt->ParentGroups().get().end(); ++_simThermalZoneSubIt)
										{
											if(_nodeIndexList.find(*_simThermalZoneSubIt)!=_nodeIndexList.end())
											{
												if(_nodeIndexList.find(_simThermalZoneIt->RefId())==_nodeIndexList.end())
												{
													SimHierarchyNode SimThermalZone_Node;
													setCurrentObject(SimThermalZone_Node, *_simThermalZoneIt);
													addHierarchyNode(SimThermalZone_Node);
													int _id_SimThermalZone = SimHierarchyNodeList.size() - 1;
													// save current object index position: <ref_id, index_pos>
													_nodeIndexList.insert(std::pair<std::string, int>(_simThermalZoneIt->RefId(), _id_SimThermalZone));

													// save index pair for parent-child relationships
													_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simThermalZoneSubIt)->second, _id_SimThermalZone));

													// parse SimSpace tree
													parseSimSpaceTree(simGeometryData, _nodeIndexPairList, _nodeIndexList, _simThermalZoneIt);
												}
												else
												{
													// save index pair for parent-child relationships
													_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simThermalZoneSubIt)->second, _nodeIndexList.find(_simThermalZoneIt->RefId())->second));
												}	
											}
										}
									}
								}

								// parse SimSpatialZone_ThermalZone_AboveCeilingVoid

								// parse SimSystem
								parseSimSystem(simSysData, _id_SimBuilding, _nodeIndexPairList, _nodeIndexList);

								/*SimHierarchyNode SimSystem_Node;
								setCurrentObject(SimSystem_Node, simSysData->SimSystem_HvacHotWater_FullSystem().front());
								addHierarchyNode(SimSystem_Node);
								int _id_SimSystem = SimHierarchyNodeList.size() - 1;

								// save index pair for parent-child relationships
								_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimBuilding, _id_SimSystem));*/
								
								/*for(SimModel::SimSystem_HvacHotWater_FullSystem_iterator _simSystemIt=simSysData->SimSystem_HvacHotWater_FullSystem().begin(); _simSystemIt!=simSysData->SimSystem_HvacHotWater_FullSystem().end(); ++_simSystemIt)
								{
								}*/
							}
						}
					}
				}
			}
		}
	}

	/**/

	// build hierarchy search map <ref_id, node>
	for(unsigned int i=0; i<SimHierarchyNodeList.size(); ++i)
	{
		SimHierarchyNode_IdMapList.insert(
			std::pair<std::string, SimHierarchyNode*>(SimHierarchyNodeList.at(i)._SimRootObject->RefId(), &SimHierarchyNodeList.at(i))
		);
	}

	// add parent-child relationship
	for(unsigned int _i=0; _i<_nodeIndexPairList.size(); ++_i)
	{
		addNodesRelationship(SimHierarchyNodeList.at(_nodeIndexPairList[_i].first), SimHierarchyNodeList.at(_nodeIndexPairList[_i].second));
	}
	
	//addNodesRelationship(SimHierarchyNodeList.at(_id_SimProject), SimHierarchyNodeList.at(_id_SimSite));
}

// parse SimModel hierarchy data
void SimHierarchy::parser(::std::auto_ptr< ::schema::simxml::Model::SimModel >& SimModel_Data)
{	
	// parsing SimXML hierarchy
	// dummy data for testing
	SimHierarchyNode SimProject_Node;
	setCurrentObject(SimProject_Node, SimModel_Data->SimProject_Project_DesignAlternative().front());
	addHierarchyNode(SimProject_Node);
	int _id_SimProject = SimHierarchyNodeList.size() - 1;

	SimHierarchyNode SimSite_Node;
	setCurrentObject(SimSite_Node, SimModel_Data->SimSite_BuildingSite_Default().front());
	addHierarchyNode(SimSite_Node);
	int _id_SimSite = SimHierarchyNodeList.size() - 1;

	SimHierarchyNode SimBuilding_Node;
	setCurrentObject(SimBuilding_Node, SimModel_Data->SimBuilding_Building_Default().front());
	addHierarchyNode(SimBuilding_Node);
	int _id_SimBuilding = SimHierarchyNodeList.size() - 1;

	SimHierarchyNode SimGroup_ZoneGroup_Node;
	setCurrentObject(SimGroup_ZoneGroup_Node, SimModel_Data->SimGroup_SpatialZoneGroup_ZoneGroup().front());
	addHierarchyNode(SimGroup_ZoneGroup_Node);
	int _id_SimGroup_ZoneGroup = SimHierarchyNodeList.size() - 1;

	std::vector<int> _id_SimGroup_ZoneHvac_Vec;
	for(SimModel::SimGroup_SpatialZoneGroup_ZoneHvacGroup_iterator _it = SimModel_Data->SimGroup_SpatialZoneGroup_ZoneHvacGroup().begin(); _it != SimModel_Data->SimGroup_SpatialZoneGroup_ZoneHvacGroup().end(); ++_it)
	{
		if(!_it->IsTemplateObject().present())
		{
			SimHierarchyNode SimGroup_ZoneHvac_Node;
			setCurrentObject(SimGroup_ZoneHvac_Node, *_it);
			addHierarchyNode(SimGroup_ZoneHvac_Node);
			_id_SimGroup_ZoneHvac_Vec.push_back(SimHierarchyNodeList.size() - 1);
		}
	}

	SimHierarchyNode SimThermalZone_Node;
	setCurrentObject(SimThermalZone_Node, SimModel_Data->SimSpatialZone_ThermalZone_Default().front());
	addHierarchyNode(SimThermalZone_Node);
	int _id_SimThermalZone = SimHierarchyNodeList.size() - 1;

	SimHierarchyNode SimSpace_Occupied_Node;
	setCurrentObject(SimSpace_Occupied_Node, SimModel_Data->SimSpace_Occupied_Default().front());
	addHierarchyNode(SimSpace_Occupied_Node);
	int _id_SimSpace_Occupied = SimHierarchyNodeList.size() - 1;
	
	std::vector<int> _id_SimSpaceBoundary_Vec;
	for(SimModel::SimSpaceBoundary_SecondLevel_SubTypeA_iterator _it = SimModel_Data->SimSpaceBoundary_SecondLevel_SubTypeA().begin(); _it != SimModel_Data->SimSpaceBoundary_SecondLevel_SubTypeA().end(); ++_it)
	{
		SimHierarchyNode SimSpaceBoundary_Node;
		setCurrentObject(SimSpaceBoundary_Node, *_it);
		addHierarchyNode(SimSpaceBoundary_Node);
		_id_SimSpaceBoundary_Vec.push_back(SimHierarchyNodeList.size() - 1);
		
	}

	int _id_SimList;
	for(SimModel::SimList_EquipmentList_ZoneHvac_iterator _it = SimModel_Data->SimList_EquipmentList_ZoneHvac().begin(); _it != SimModel_Data->SimList_EquipmentList_ZoneHvac().end(); ++_it)
	{
		if(_it->RefId()=="ID826")
		{
			SimHierarchyNode SimList_Node;
			setCurrentObject(SimList_Node, *_it);
			addHierarchyNode(SimList_Node);
			_id_SimList = SimHierarchyNodeList.size() - 1;
		}
	}

	// building element
	int _id_SimSlab;
	for(SimModel::SimSlab_RoofSlab_RoofUnderAir_iterator _it = SimModel_Data->SimSlab_RoofSlab_RoofUnderAir().begin(); _it != SimModel_Data->SimSlab_RoofSlab_RoofUnderAir().end(); ++_it)
	{
		if(_it->RefId()=="ID863")
		{
			SimHierarchyNode SimSlab_Node;
			setCurrentObject(SimSlab_Node, *_it);
			addHierarchyNode(SimSlab_Node);
			_id_SimSlab = SimHierarchyNodeList.size() - 1;
		}
	}

	int _id_SimSlab_Floor;
	for(SimModel::SimSlab_Floor_FloorOverEarth_iterator _it = SimModel_Data->SimSlab_Floor_FloorOverEarth().begin(); _it != SimModel_Data->SimSlab_Floor_FloorOverEarth().end(); ++_it)
	{
		if(_it->RefId()=="ID862")
		{
			SimHierarchyNode SimSlab_Node;
			setCurrentObject(SimSlab_Node, *_it);
			addHierarchyNode(SimSlab_Node);
			_id_SimSlab_Floor = SimHierarchyNodeList.size() - 1;
		}
	}

	std::vector<int> _id_SimWall_Vec;
	for(SimModel::SimWall_Wall_ExteriorAboveGrade_iterator _it = SimModel_Data->SimWall_Wall_ExteriorAboveGrade().begin(); _it != SimModel_Data->SimWall_Wall_ExteriorAboveGrade().end(); ++_it)
	{
		//if(_it->RefId()=="ID866" || _it->RefId()=="ID867" || _it->RefId()=="ID868" || _it->RefId()=="ID869")
		{
			SimHierarchyNode SimWall_Node;
			setCurrentObject(SimWall_Node, *_it);
			addHierarchyNode(SimWall_Node);
			_id_SimWall_Vec.push_back(SimHierarchyNodeList.size() - 1);
		}
	}

	int _id_SimWindow;
	for(SimModel::SimWindow_Window_Exterior_iterator _it = SimModel_Data->SimWindow_Window_Exterior().begin(); _it != SimModel_Data->SimWindow_Window_Exterior().end(); ++_it)
	{
		if(_it->RefId()=="ID875")
		{
			SimHierarchyNode SimWindow_Node;
			setCurrentObject(SimWindow_Node, *_it);
			addHierarchyNode(SimWindow_Node);
			_id_SimWindow = SimHierarchyNodeList.size() - 1;
		}
	}

	int _id_SimMaterialLayerSet_Roof;
	for(SimModel::SimMaterialLayerSet_OpaqueLayerSet_Roof_iterator _it = SimModel_Data->SimMaterialLayerSet_OpaqueLayerSet_Roof().begin(); _it != SimModel_Data->SimMaterialLayerSet_OpaqueLayerSet_Roof().end(); ++_it)
	{
		if(_it->RefId()=="ID1339")
		{
			SimHierarchyNode SimMaterialLayerSet_Node;
			setCurrentObject(SimMaterialLayerSet_Node, *_it);
			addHierarchyNode(SimMaterialLayerSet_Node);
			_id_SimMaterialLayerSet_Roof = SimHierarchyNodeList.size() - 1;
		}
	}

	int _id_SimMaterialLayerSet_Floor;
	for(SimModel::SimMaterialLayerSet_OpaqueLayerSet_Floor_iterator _it = SimModel_Data->SimMaterialLayerSet_OpaqueLayerSet_Floor().begin(); _it != SimModel_Data->SimMaterialLayerSet_OpaqueLayerSet_Floor().end(); ++_it)
	{
		if(_it->RefId()=="ID1340")
		{
			SimHierarchyNode SimMaterialLayerSet_Node;
			setCurrentObject(SimMaterialLayerSet_Node, *_it);
			addHierarchyNode(SimMaterialLayerSet_Node);
			_id_SimMaterialLayerSet_Floor = SimHierarchyNodeList.size() - 1;
		}
	}
	
	int _id_SimMaterialLayerSet_Wall; // 3 additional materials
	for(SimModel::SimMaterialLayerSet_OpaqueLayerSet_Wall_iterator _it = SimModel_Data->SimMaterialLayerSet_OpaqueLayerSet_Wall().begin(); _it != SimModel_Data->SimMaterialLayerSet_OpaqueLayerSet_Wall().end(); ++_it)
	{
		if(_it->RefId()=="ID1336")
		{
			SimHierarchyNode SimMaterialLayerSet_Node;
			setCurrentObject(SimMaterialLayerSet_Node, *_it);
			addHierarchyNode(SimMaterialLayerSet_Node);
			_id_SimMaterialLayerSet_Wall = SimHierarchyNodeList.size() - 1;
		}
	}

	int _id_SimMaterialLayerSet_Window;
	for(SimModel::SimMaterialLayerSet_GlazingLayerSet_Window_iterator _it = SimModel_Data->SimMaterialLayerSet_GlazingLayerSet_Window().begin(); _it != SimModel_Data->SimMaterialLayerSet_GlazingLayerSet_Window().end(); ++_it)
	{
		if(_it->RefId()=="ID1355")
		{
			SimHierarchyNode SimMaterialLayerSet_Node;
			setCurrentObject(SimMaterialLayerSet_Node, *_it);
			addHierarchyNode(SimMaterialLayerSet_Node);
			_id_SimMaterialLayerSet_Window = SimHierarchyNodeList.size() - 1;
		}
	}

	int _id_SimFeatureElementSubtraction_Opening;
	for(SimModel::SimFeatureElementSubtraction_Void_Opening_iterator _it = SimModel_Data->SimFeatureElementSubtraction_Void_Opening().begin(); _it != SimModel_Data->SimFeatureElementSubtraction_Void_Opening().end(); ++_it)
	{
		if(_it->RefId()=="ID1271")
		{
			SimHierarchyNode SimFeatureElementSubtraction_Opening_Node;
			setCurrentObject(SimFeatureElementSubtraction_Opening_Node, *_it);
			addHierarchyNode(SimFeatureElementSubtraction_Opening_Node);
			_id_SimFeatureElementSubtraction_Opening = SimHierarchyNodeList.size() - 1;
		}
	}
	
	std::vector<int> _id_SimMaterialLayer_OpaqueMaterialLayer_Default_Vec;
	for(SimModel::SimMaterialLayer_OpaqueMaterialLayer_Default_iterator _it = SimModel_Data->SimMaterialLayer_OpaqueMaterialLayer_Default().begin(); _it != SimModel_Data->SimMaterialLayer_OpaqueMaterialLayer_Default().end(); ++_it)
	{
		if(_it->RefId()=="ID1311" || _it->RefId()=="ID1314" || _it->RefId()=="ID1303")
		{
			SimHierarchyNode SimMaterialLayer_Node;
			setCurrentObject(SimMaterialLayer_Node, *_it);
			addHierarchyNode(SimMaterialLayer_Node);
			_id_SimMaterialLayer_OpaqueMaterialLayer_Default_Vec.push_back(SimHierarchyNodeList.size() - 1);
		}
	}

	int _id_SimMaterialLayer_GlazingMaterialLayer_Default;
	for(SimModel::SimMaterialLayer_GlazingMaterialLayer_Default_iterator _it = SimModel_Data->SimMaterialLayer_GlazingMaterialLayer_Default().begin(); _it != SimModel_Data->SimMaterialLayer_GlazingMaterialLayer_Default().end(); ++_it)
	{
		if(_it->RefId()=="ID1335")
		{
			SimHierarchyNode SimMaterialLayer_GlazingMaterialLayer_Default_Node;
			setCurrentObject(SimMaterialLayer_GlazingMaterialLayer_Default_Node, *_it);
			addHierarchyNode(SimMaterialLayer_GlazingMaterialLayer_Default_Node);
			_id_SimMaterialLayer_GlazingMaterialLayer_Default = SimHierarchyNodeList.size() - 1;
		}
	}

	// material
	std::vector<int> _id_SimMaterial_OpaqueMaterial_Default_Vec;
	for(SimModel::SimMaterial_OpaqueMaterial_Default_iterator _it = SimModel_Data->SimMaterial_OpaqueMaterial_Default().begin(); _it != SimModel_Data->SimMaterial_OpaqueMaterial_Default().end(); ++_it)
	{
		if(_it->RefId()=="ID1283" || _it->RefId()=="ID1285" || _it->RefId()=="ID1275")
		{
			SimHierarchyNode SimMaterial_Node;
			setCurrentObject(SimMaterial_Node, *_it);
			addHierarchyNode(SimMaterial_Node);
			_id_SimMaterial_OpaqueMaterial_Default_Vec.push_back(SimHierarchyNodeList.size() - 1);
		}
	}

	int _id_SimMaterial_GlazingMaterial_SimpleGlazingSystem;
	for(SimModel::SimMaterial_GlazingMaterial_SimpleGlazingSystem_iterator _it = SimModel_Data->SimMaterial_GlazingMaterial_SimpleGlazingSystem().begin(); _it != SimModel_Data->SimMaterial_GlazingMaterial_SimpleGlazingSystem().end(); ++_it)
	{
		//if(_it->RefId()=="ID1302")
		{
			SimHierarchyNode SimMaterial_GlazingMaterial_SimpleGlazingSystem_Node;
			setCurrentObject(SimMaterial_GlazingMaterial_SimpleGlazingSystem_Node, *_it);
			addHierarchyNode(SimMaterial_GlazingMaterial_SimpleGlazingSystem_Node);
			_id_SimMaterial_GlazingMaterial_SimpleGlazingSystem = SimHierarchyNodeList.size() - 1;
		}
	}
	/////////
	int _id_SimSystem;
	for(SimModel::SimSystem_HvacHotWater_FullSystem_iterator _it = SimModel_Data->SimSystem_HvacHotWater_FullSystem().begin(); _it != SimModel_Data->SimSystem_HvacHotWater_FullSystem().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimSystem_Node;
			setCurrentObject(SimSystem_Node, *_it);
			addHierarchyNode(SimSystem_Node);
			_id_SimSystem = SimHierarchyNodeList.size() - 1;
		}
	}

	int _id_SimSystem_Control;
	for(SimModel::SimSystem_HvacHotWater_Control_iterator _it = SimModel_Data->SimSystem_HvacHotWater_Control().begin(); _it != SimModel_Data->SimSystem_HvacHotWater_Control().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimSystem_Control_Node;
			setCurrentObject(SimSystem_Control_Node, *_it);
			addHierarchyNode(SimSystem_Control_Node);
			_id_SimSystem_Control = SimHierarchyNodeList.size() - 1;
		}
	}

	int _id_SimController_SupplyWater_Temperature;
	for(SimModel::SimController_SupplyWater_Temperature_iterator _it = SimModel_Data->SimController_SupplyWater_Temperature().begin(); _it != SimModel_Data->SimController_SupplyWater_Temperature().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimController_SupplyWater_Temperature_Node;
			setCurrentObject(SimController_SupplyWater_Temperature_Node, *_it);
			addHierarchyNode(SimController_SupplyWater_Temperature_Node);
			_id_SimController_SupplyWater_Temperature = SimHierarchyNodeList.size() - 1;
		}
	}

	int _id_SimSensor_TemperatureSensor_DryBulb;
	for(SimModel::SimController_SupplyWater_Temperature_iterator _it = SimModel_Data->SimSensor_TemperatureSensor_DryBulb().begin(); _it != SimModel_Data->SimSensor_TemperatureSensor_DryBulb().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimSensor_TemperatureSensor_DryBulb_Node;
			setCurrentObject(SimSensor_TemperatureSensor_DryBulb_Node, *_it);
			addHierarchyNode(SimSensor_TemperatureSensor_DryBulb_Node);
			_id_SimSensor_TemperatureSensor_DryBulb = SimHierarchyNodeList.size() - 1;
		}
	}
	
	int _id_SimSystem_Demand;
	for(SimModel::SimSystem_HvacHotWater_Demand_iterator _it = SimModel_Data->SimSystem_HvacHotWater_Demand().begin(); _it != SimModel_Data->SimSystem_HvacHotWater_Demand().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimSystem_Demand_Node;
			setCurrentObject(SimSystem_Demand_Node, *_it);
			addHierarchyNode(SimSystem_Demand_Node);
			_id_SimSystem_Demand = SimHierarchyNodeList.size() - 1;
		}
	}

	std::vector<int> _id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec;
	for(SimModel::SimFlowEnergyTransfer_ConvectiveHeater_Water_iterator _it = SimModel_Data->SimFlowEnergyTransfer_ConvectiveHeater_Water().begin(); _it != SimModel_Data->SimFlowEnergyTransfer_ConvectiveHeater_Water().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimFlowEnergyTransfer_ConvectiveHeater_Water_Node;
			setCurrentObject(SimFlowEnergyTransfer_ConvectiveHeater_Water_Node, *_it);
			addHierarchyNode(SimFlowEnergyTransfer_ConvectiveHeater_Water_Node);
			_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec.push_back(SimHierarchyNodeList.size() - 1);
		}
	}

	int _id_SimFlowFitting_Mixer_DemandProxyMixerWater;
	for(SimModel::SimFlowFitting_Mixer_DemandProxyMixerWater_iterator _it = SimModel_Data->SimFlowFitting_Mixer_DemandProxyMixerWater().begin(); _it != SimModel_Data->SimFlowFitting_Mixer_DemandProxyMixerWater().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimFlowFitting_Mixer_DemandProxyMixerWater_Node;
			setCurrentObject(SimFlowFitting_Mixer_DemandProxyMixerWater_Node, *_it);
			addHierarchyNode(SimFlowFitting_Mixer_DemandProxyMixerWater_Node);
			_id_SimFlowFitting_Mixer_DemandProxyMixerWater = SimHierarchyNodeList.size() - 1;
		}
	}
	
	int _id_SimFlowFitting_Splitter_DemandProxySplitterWater;
	for(SimModel::SimFlowFitting_Splitter_DemandProxySplitterWater_iterator _it = SimModel_Data->SimFlowFitting_Splitter_DemandProxySplitterWater().begin(); _it != SimModel_Data->SimFlowFitting_Splitter_DemandProxySplitterWater().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimFlowFitting_Splitter_DemandProxySplitterWater_Node;
			setCurrentObject(SimFlowFitting_Splitter_DemandProxySplitterWater_Node, *_it);
			addHierarchyNode(SimFlowFitting_Splitter_DemandProxySplitterWater_Node);
			_id_SimFlowFitting_Splitter_DemandProxySplitterWater = SimHierarchyNodeList.size() - 1;
		}
	}

	int _id_SimSystem_Supply;
	for(SimModel::SimSystem_HvacHotWater_Supply_iterator _it = SimModel_Data->SimSystem_HvacHotWater_Supply().begin(); _it != SimModel_Data->SimSystem_HvacHotWater_Supply().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimSystem_Supply_Node;
			setCurrentObject(SimSystem_Supply_Node, *_it);
			addHierarchyNode(SimSystem_Supply_Node);
			_id_SimSystem_Supply = SimHierarchyNodeList.size() - 1;
		}
	}
	
	int _id_SimFlowMover_Pump_VariableSpeedReturn;
	for(SimModel::SimFlowMover_Pump_VariableSpeedReturn_iterator _it = SimModel_Data->SimFlowMover_Pump_VariableSpeedReturn().begin(); _it != SimModel_Data->SimFlowMover_Pump_VariableSpeedReturn().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimFlowMover_Pump_VariableSpeedReturn_Node;
			setCurrentObject(SimFlowMover_Pump_VariableSpeedReturn_Node, *_it);
			addHierarchyNode(SimFlowMover_Pump_VariableSpeedReturn_Node);
			_id_SimFlowMover_Pump_VariableSpeedReturn = SimHierarchyNodeList.size() - 1;
		}
	}

	int _id_SimFlowPlant_Boiler_BoilerHotWater;
	for(SimModel::SimFlowPlant_Boiler_BoilerHotWater_iterator _it = SimModel_Data->SimFlowPlant_Boiler_BoilerHotWater().begin(); _it != SimModel_Data->SimFlowPlant_Boiler_BoilerHotWater().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimFlowPlant_Boiler_BoilerHotWater_Node;
			setCurrentObject(SimFlowPlant_Boiler_BoilerHotWater_Node, *_it);
			addHierarchyNode(SimFlowPlant_Boiler_BoilerHotWater_Node);
			_id_SimFlowPlant_Boiler_BoilerHotWater = SimHierarchyNodeList.size() - 1;
		}
	}
	
	std::vector<int> _id_SimBuildingStory_Vec;
	for(SimModel::SimBuildingStory_BuildingStory_Default_iterator _it = SimModel_Data->SimBuildingStory_BuildingStory_Default().begin(); _it != SimModel_Data->SimBuildingStory_BuildingStory_Default().end(); ++_it)
	{
		SimHierarchyNode SimBuildingStory_Node;
		setCurrentObject(SimBuildingStory_Node, *_it);
		addHierarchyNode(SimBuildingStory_Node);
		_id_SimBuildingStory_Vec.push_back(SimHierarchyNodeList.size() - 1);
	}
	
	// topology
	std::vector<int> _id_SimConnection_Vec;
	for(SimModel::SimConnection_HotWaterFlow_Default_iterator _it = SimModel_Data->SimConnection_HotWaterFlow_Default().begin(); _it != SimModel_Data->SimConnection_HotWaterFlow_Default().end(); ++_it)
	{
		SimHierarchyNode SimConnection_Node;
		setCurrentObject(SimConnection_Node, *_it);
		addHierarchyNode(SimConnection_Node);
		_id_SimConnection_Vec.push_back(SimHierarchyNodeList.size() - 1);
	}

	std::vector<int> _id_SimNode_Out_Vec;
	for(SimModel::SimNode_HotWaterFlowPort_Water_Out_iterator _it = SimModel_Data->SimNode_HotWaterFlowPort_Water_Out().begin(); _it != SimModel_Data->SimNode_HotWaterFlowPort_Water_Out().end(); ++_it)
	{
		if(_it->RefId()=="ID1402" || _it->RefId()=="ID1392" || _it->RefId()=="ID1390" || _it->RefId()=="ID1394" || _it->RefId()=="ID1396" 
			|| _it->RefId()=="ID1398")
		{
			SimHierarchyNode SimNode_Out_Node;
			setCurrentObject(SimNode_Out_Node, *_it);
			addHierarchyNode(SimNode_Out_Node);
			_id_SimNode_Out_Vec.push_back(SimHierarchyNodeList.size() - 1);
		}
	}

	std::vector<int> _id_SimNode_In_Vec;
	for(SimModel::SimNode_HotWaterFlowPort_Water_In_iterator _it = SimModel_Data->SimNode_HotWaterFlowPort_Water_In().begin(); _it != SimModel_Data->SimNode_HotWaterFlowPort_Water_In().end(); ++_it)
	{
		if(_it->RefId()=="ID1389" || _it->RefId()=="ID1399" || _it->RefId()=="ID1393" || _it->RefId()=="ID1395" || _it->RefId()=="ID1391" 
			|| _it->RefId()=="ID1401")
		{
			SimHierarchyNode SimNode_In_Node;
			setCurrentObject(SimNode_In_Node, *_it);
			addHierarchyNode(SimNode_In_Node);
			_id_SimNode_In_Vec.push_back(SimHierarchyNodeList.size() - 1);
		}
	}

	std::vector<int> _id_SimNode_DigitalControl_In_Vec;
	for(SimModel::SimNode_DigitalControl_HWLoop_DigitalSignal_In_iterator _it = SimModel_Data->SimNode_DigitalControl_HWLoop_DigitalSignal_In().begin(); _it != SimModel_Data->SimNode_DigitalControl_HWLoop_DigitalSignal_In().end(); ++_it)
	{
		if(_it->RefId()=="ID1400" || _it->RefId()=="ID1417" || _it->RefId()=="ID1403" || _it->RefId()=="ID1415")
		{
			SimHierarchyNode SimNode_DigitalControl_In_Node;
			setCurrentObject(SimNode_DigitalControl_In_Node, *_it);
			addHierarchyNode(SimNode_DigitalControl_In_Node);
			_id_SimNode_DigitalControl_In_Vec.push_back(SimHierarchyNodeList.size() - 1);
		}
	}

	// build hierarchy search map
	for(unsigned int i=0; i<SimHierarchyNodeList.size(); ++i)
	{
		SimHierarchyNode_IdMapList.insert(
			std::pair<std::string, SimHierarchyNode*>(SimHierarchyNodeList.at(i)._SimRootObject->RefId(), &SimHierarchyNodeList.at(i))
		);
	}

	// add parent-child relationship
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimProject), SimHierarchyNodeList.at(_id_SimSite));
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSite), SimHierarchyNodeList.at(_id_SimBuilding));
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimBuilding), SimHierarchyNodeList.at(_id_SimGroup_ZoneGroup));

	for(unsigned int _i=0; _i<_id_SimGroup_ZoneHvac_Vec.size(); ++_i)
		addNodesRelationship(SimHierarchyNodeList.at(_id_SimBuilding), SimHierarchyNodeList.at(_id_SimGroup_ZoneHvac_Vec[_i]));

	addNodesRelationship(SimHierarchyNodeList.at(_id_SimBuilding), SimHierarchyNodeList.at(_id_SimThermalZone));
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimGroup_ZoneGroup), SimHierarchyNodeList.at(_id_SimThermalZone));
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimGroup_ZoneHvac_Vec[0]), SimHierarchyNodeList.at(_id_SimThermalZone));

	addNodesRelationship(SimHierarchyNodeList.at(_id_SimThermalZone), SimHierarchyNodeList.at(_id_SimSpace_Occupied));
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimThermalZone), SimHierarchyNodeList.at(_id_SimList));
	
	for(unsigned int _i=0; _i<_id_SimSpaceBoundary_Vec.size(); ++_i)
	{
		addNodesRelationship(SimHierarchyNodeList.at(_id_SimSpace_Occupied), SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i]));

		if(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i])._SimRootObject->RefId() == "ID2157")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i]), SimHierarchyNodeList.at(_id_SimSlab));
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimSlab), SimHierarchyNodeList.at(_id_SimMaterialLayerSet_Roof));

			for(unsigned int _j=0; _j<_id_SimMaterialLayer_OpaqueMaterialLayer_Default_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimMaterialLayer_OpaqueMaterialLayer_Default_Vec[_j])._SimRootObject->RefId() == "ID1311")
				{
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimMaterialLayerSet_Roof), SimHierarchyNodeList.at(_id_SimMaterialLayer_OpaqueMaterialLayer_Default_Vec[_j]));

					for(unsigned int _k=0; _k<_id_SimMaterial_OpaqueMaterial_Default_Vec.size(); ++_k)
					{
						if(SimHierarchyNodeList.at(_id_SimMaterial_OpaqueMaterial_Default_Vec[_k])._SimRootObject->RefId() == "ID1283")
							addNodesRelationship(SimHierarchyNodeList.at(_id_SimMaterialLayer_OpaqueMaterialLayer_Default_Vec[_j]), SimHierarchyNodeList.at(_id_SimMaterial_OpaqueMaterial_Default_Vec[_k]));
					}
				}
			}
		}
		
		if(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i])._SimRootObject->RefId() == "ID2158")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i]), SimHierarchyNodeList.at(_id_SimSlab_Floor));
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimSlab_Floor), SimHierarchyNodeList.at(_id_SimMaterialLayerSet_Floor));

			for(unsigned int _j=0; _j<_id_SimMaterialLayer_OpaqueMaterialLayer_Default_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimMaterialLayer_OpaqueMaterialLayer_Default_Vec[_j])._SimRootObject->RefId() == "ID1314")
				{
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimMaterialLayerSet_Floor), SimHierarchyNodeList.at(_id_SimMaterialLayer_OpaqueMaterialLayer_Default_Vec[_j]));

					for(unsigned int _k=0; _k<_id_SimMaterial_OpaqueMaterial_Default_Vec.size(); ++_k)
					{
						if(SimHierarchyNodeList.at(_id_SimMaterial_OpaqueMaterial_Default_Vec[_k])._SimRootObject->RefId() == "ID1285")
							addNodesRelationship(SimHierarchyNodeList.at(_id_SimMaterialLayer_OpaqueMaterialLayer_Default_Vec[_j]), SimHierarchyNodeList.at(_id_SimMaterial_OpaqueMaterial_Default_Vec[_k]));
					}
				}
			}
		}


		if(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i])._SimRootObject->RefId() == "ID2159")
		{
			for(unsigned int _j=0; _j<_id_SimWall_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimWall_Vec[_j])._SimRootObject->RefId() == "ID866")
				{
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i]), SimHierarchyNodeList.at(_id_SimWall_Vec[_j]));
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimWall_Vec[_j]), SimHierarchyNodeList.at(_id_SimMaterialLayerSet_Wall));

					for(unsigned int _k=0; _k<_id_SimMaterialLayer_OpaqueMaterialLayer_Default_Vec.size(); ++_k)
					{
						if(SimHierarchyNodeList.at(_id_SimMaterialLayer_OpaqueMaterialLayer_Default_Vec[_k])._SimRootObject->RefId() == "ID1303")
						{
							addNodesRelationship(SimHierarchyNodeList.at(_id_SimMaterialLayerSet_Wall), SimHierarchyNodeList.at(_id_SimMaterialLayer_OpaqueMaterialLayer_Default_Vec[_k]));
							
							for(unsigned int _k=0; _k<_id_SimMaterial_OpaqueMaterial_Default_Vec.size(); ++_k)
							{
								if(SimHierarchyNodeList.at(_id_SimMaterial_OpaqueMaterial_Default_Vec[_k])._SimRootObject->RefId() == "ID1275")
									addNodesRelationship(SimHierarchyNodeList.at(_id_SimMaterialLayer_OpaqueMaterialLayer_Default_Vec[_j]), SimHierarchyNodeList.at(_id_SimMaterial_OpaqueMaterial_Default_Vec[_k]));
							}
						}
					}
				}	
			}
		}
		
		if(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i])._SimRootObject->RefId() == "ID2160")
		{
			for(unsigned int _j=0; _j<_id_SimWall_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimWall_Vec[_j])._SimRootObject->RefId() == "ID867")
				{
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i]), SimHierarchyNodeList.at(_id_SimWall_Vec[_j]));
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimWall_Vec[_j]), SimHierarchyNodeList.at(_id_SimMaterialLayerSet_Wall));
				}
			}

		}

		if(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i])._SimRootObject->RefId() == "ID2161")
		{
			for(unsigned int _j=0; _j<_id_SimWall_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimWall_Vec[_j])._SimRootObject->RefId() == "ID868")
				{
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i]), SimHierarchyNodeList.at(_id_SimWall_Vec[_j]));
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimWall_Vec[_j]), SimHierarchyNodeList.at(_id_SimMaterialLayerSet_Wall));
				}
			}

		}

		if(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i])._SimRootObject->RefId() == "ID2163")
		{
			for(unsigned int _j=0; _j<_id_SimWall_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimWall_Vec[_j])._SimRootObject->RefId() == "ID869")
				{
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i]), SimHierarchyNodeList.at(_id_SimWall_Vec[_j]));
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimWall_Vec[_j]), SimHierarchyNodeList.at(_id_SimMaterialLayerSet_Wall));
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimWall_Vec[_j]), SimHierarchyNodeList.at(_id_SimFeatureElementSubtraction_Opening));
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimFeatureElementSubtraction_Opening), SimHierarchyNodeList.at(_id_SimWindow));
				}
			}
		}

		if(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i])._SimRootObject->RefId() == "ID2162")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i]), SimHierarchyNodeList.at(_id_SimWindow));
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimWindow), SimHierarchyNodeList.at(_id_SimMaterialLayerSet_Window));
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimMaterialLayerSet_Window), SimHierarchyNodeList.at(_id_SimMaterialLayer_GlazingMaterialLayer_Default));
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimMaterialLayer_GlazingMaterialLayer_Default), SimHierarchyNodeList.at(_id_SimMaterial_GlazingMaterial_SimpleGlazingSystem));
		}
	}
	///..
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimBuilding), SimHierarchyNodeList.at(_id_SimSystem));
	
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem), SimHierarchyNodeList.at(_id_SimSystem_Control));

	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem_Control), SimHierarchyNodeList.at(_id_SimController_SupplyWater_Temperature));
	
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem_Control), SimHierarchyNodeList.at(_id_SimSensor_TemperatureSensor_DryBulb));
	
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem), SimHierarchyNodeList.at(_id_SimSystem_Demand));
	
	for(unsigned int _i=0; _i<_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec.size(); ++_i)
	{
		addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem_Demand), SimHierarchyNodeList.at(_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec[_i]));

		if(SimHierarchyNodeList.at(_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec[_i])._SimRootObject->RefId() == "ID880")
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimGroup_ZoneHvac_Vec[0]), SimHierarchyNodeList.at(_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec[_i]));

		if(SimHierarchyNodeList.at(_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec[_i])._SimRootObject->RefId() == "ID881")
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimList), SimHierarchyNodeList.at(_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec[_i]));
	}
		
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem_Demand), SimHierarchyNodeList.at(_id_SimFlowFitting_Mixer_DemandProxyMixerWater));
	
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem_Demand), SimHierarchyNodeList.at(_id_SimFlowFitting_Splitter_DemandProxySplitterWater));
	
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem), SimHierarchyNodeList.at(_id_SimSystem_Supply));
	
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem_Supply), SimHierarchyNodeList.at(_id_SimFlowMover_Pump_VariableSpeedReturn));
	
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem_Supply), SimHierarchyNodeList.at(_id_SimFlowPlant_Boiler_BoilerHotWater));

	for(unsigned int _i=0; _i<_id_SimBuildingStory_Vec.size(); ++_i)
	{
		addNodesRelationship(SimHierarchyNodeList.at(_id_SimBuilding), SimHierarchyNodeList.at(_id_SimBuildingStory_Vec[_i]));

		if(SimHierarchyNodeList.at(_id_SimBuildingStory_Vec[_i])._SimRootObject->RefId() == "ID859")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimBuildingStory_Vec[_i]), SimHierarchyNodeList.at(_id_SimSpace_Occupied));
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimBuildingStory_Vec[_i]), SimHierarchyNodeList.at(_id_SimSlab_Floor));

			for(unsigned int _j=0; _j<_id_SimWall_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimWall_Vec[_j])._SimRootObject->RefId() == "ID866" || SimHierarchyNodeList.at(_id_SimWall_Vec[_j])._SimRootObject->RefId() == "ID867" || SimHierarchyNodeList.at(_id_SimWall_Vec[_j])._SimRootObject->RefId() == "ID868" || SimHierarchyNodeList.at(_id_SimWall_Vec[_j])._SimRootObject->RefId() == "ID869")
				{
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimBuildingStory_Vec[_i]), SimHierarchyNodeList.at(_id_SimWall_Vec[_j]));
				}
			}

			addNodesRelationship(SimHierarchyNodeList.at(_id_SimBuildingStory_Vec[_i]), SimHierarchyNodeList.at(_id_SimWindow));
		}

		if(SimHierarchyNodeList.at(_id_SimBuildingStory_Vec[_i])._SimRootObject->RefId() == "ID860")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimBuildingStory_Vec[_i]), SimHierarchyNodeList.at(_id_SimSlab));

			for(unsigned int _j=0; _j<_id_SimWall_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimWall_Vec[_j])._SimRootObject->RefId() == "ID870" || SimHierarchyNodeList.at(_id_SimWall_Vec[_j])._SimRootObject->RefId() == "ID871" || SimHierarchyNodeList.at(_id_SimWall_Vec[_j])._SimRootObject->RefId() == "ID872" || SimHierarchyNodeList.at(_id_SimWall_Vec[_j])._SimRootObject->RefId() == "ID873")
				{
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimBuildingStory_Vec[_i]), SimHierarchyNodeList.at(_id_SimWall_Vec[_j]));
				}
			}
		}
	}
	
	// connection
	for(unsigned int _i=0; _i<_id_SimNode_Out_Vec.size(); ++_i)
	{
		if(SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i])._SimRootObject->RefId() == "ID1402")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimFlowPlant_Boiler_BoilerHotWater), SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i]));
			for(unsigned int _j=0; _j<_id_SimConnection_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1258")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i]), SimHierarchyNodeList.at(_id_SimConnection_Vec[_j]));
			}
		}

		if(SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i])._SimRootObject->RefId() == "ID1392")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimFlowFitting_Mixer_DemandProxyMixerWater), SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i]));

			for(unsigned int _j=0; _j<_id_SimConnection_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1259")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i]), SimHierarchyNodeList.at(_id_SimConnection_Vec[_j]));
			}
		}

		if(SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i])._SimRootObject->RefId() == "ID1390")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimFlowFitting_Splitter_DemandProxySplitterWater), SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i]));

			for(unsigned int _j=0; _j<_id_SimConnection_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1260" ||
					SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1261" )
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i]), SimHierarchyNodeList.at(_id_SimConnection_Vec[_j]));
			}
		}

		if(SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i])._SimRootObject->RefId() == "ID1394")
		{
			for(unsigned int _j=0; _j<_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec.size(); ++_j)
			{				
				if(SimHierarchyNodeList.at(_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec[_j])._SimRootObject->RefId() == "ID880")
				{
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec[_j]), SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i]));
				}
			}

			for(unsigned int _j=0; _j<_id_SimConnection_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1262")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i]), SimHierarchyNodeList.at(_id_SimConnection_Vec[_j]));
			}
		}

		if(SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i])._SimRootObject->RefId() == "ID1396")
		{
			for(unsigned int _j=0; _j<_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec.size(); ++_j)
			{				
				if(SimHierarchyNodeList.at(_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec[_j])._SimRootObject->RefId() == "ID881")
				{
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec[_j]), SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i]));
				}
			}

			for(unsigned int _j=0; _j<_id_SimConnection_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1263")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i]), SimHierarchyNodeList.at(_id_SimConnection_Vec[_j]));
			}
		}

		if(SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i])._SimRootObject->RefId() == "ID1398")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimFlowMover_Pump_VariableSpeedReturn), SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i]));

			for(unsigned int _j=0; _j<_id_SimConnection_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1264")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimNode_Out_Vec[_i]), SimHierarchyNodeList.at(_id_SimConnection_Vec[_j]));
			}
		}
	}

	for(unsigned int _i=0; _i<_id_SimNode_In_Vec.size(); ++_i)
	{
		if(SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i])._SimRootObject->RefId() == "ID1389")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimFlowFitting_Splitter_DemandProxySplitterWater), SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i]));

			for(unsigned int _j=0; _j<_id_SimConnection_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1258")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i]), SimHierarchyNodeList.at(_id_SimConnection_Vec[_j]));
			}
		}

		if(SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i])._SimRootObject->RefId() == "ID1399")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimFlowMover_Pump_VariableSpeedReturn), SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i]));

			for(unsigned int _j=0; _j<_id_SimConnection_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1259")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i]), SimHierarchyNodeList.at(_id_SimConnection_Vec[_j]));
			}
		}

		if(SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i])._SimRootObject->RefId() == "ID1393")
		{
			for(unsigned int _j=0; _j<_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec.size(); ++_j)
			{				
				if(SimHierarchyNodeList.at(_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec[_j])._SimRootObject->RefId() == "ID880")
				{
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec[_j]), SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i]));
				}
			}

			for(unsigned int _j=0; _j<_id_SimConnection_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1260")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i]), SimHierarchyNodeList.at(_id_SimConnection_Vec[_j]));
			}
		}

		if(SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i])._SimRootObject->RefId() == "ID1395")
		{
			for(unsigned int _j=0; _j<_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec.size(); ++_j)
			{				
				if(SimHierarchyNodeList.at(_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec[_j])._SimRootObject->RefId() == "ID881")
				{
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec[_j]), SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i]));
				}
			}

			for(unsigned int _j=0; _j<_id_SimConnection_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1261")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i]), SimHierarchyNodeList.at(_id_SimConnection_Vec[_j]));
			}
		}

		if(SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i])._SimRootObject->RefId() == "ID1391")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimFlowFitting_Mixer_DemandProxyMixerWater), SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i]));

			for(unsigned int _j=0; _j<_id_SimConnection_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1262" || 
					SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1263")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i]), SimHierarchyNodeList.at(_id_SimConnection_Vec[_j]));
			}
		}

		if(SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i])._SimRootObject->RefId() == "ID1401")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimFlowPlant_Boiler_BoilerHotWater), SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i]));
			for(unsigned int _j=0; _j<_id_SimConnection_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1264")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimNode_In_Vec[_i]), SimHierarchyNodeList.at(_id_SimConnection_Vec[_j]));
			}
		}
	}

	for(unsigned int _i=0; _i<_id_SimNode_DigitalControl_In_Vec.size(); ++_i)
	{
		if(SimHierarchyNodeList.at(_id_SimNode_DigitalControl_In_Vec[_i])._SimRootObject->RefId() == "ID1400")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimFlowPlant_Boiler_BoilerHotWater), SimHierarchyNodeList.at(_id_SimNode_DigitalControl_In_Vec[_i]));

			for(unsigned int _j=0; _j<_id_SimConnection_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1265")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimNode_DigitalControl_In_Vec[_i]), SimHierarchyNodeList.at(_id_SimConnection_Vec[_j]));
			}
		}

		if(SimHierarchyNodeList.at(_id_SimNode_DigitalControl_In_Vec[_i])._SimRootObject->RefId() == "ID1417")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimController_SupplyWater_Temperature), SimHierarchyNodeList.at(_id_SimNode_DigitalControl_In_Vec[_i]));

			for(unsigned int _j=0; _j<_id_SimConnection_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1265")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimNode_DigitalControl_In_Vec[_i]), SimHierarchyNodeList.at(_id_SimConnection_Vec[_j]));
			}
		}

		if(SimHierarchyNodeList.at(_id_SimNode_DigitalControl_In_Vec[_i])._SimRootObject->RefId() == "ID1403")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimSensor_TemperatureSensor_DryBulb), SimHierarchyNodeList.at(_id_SimNode_DigitalControl_In_Vec[_i]));

			for(unsigned int _j=0; _j<_id_SimConnection_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1266")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimNode_DigitalControl_In_Vec[_i]), SimHierarchyNodeList.at(_id_SimConnection_Vec[_j]));
			}
		}

		if(SimHierarchyNodeList.at(_id_SimNode_DigitalControl_In_Vec[_i])._SimRootObject->RefId() == "ID1415")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimController_SupplyWater_Temperature), SimHierarchyNodeList.at(_id_SimNode_DigitalControl_In_Vec[_i]));

			for(unsigned int _j=0; _j<_id_SimConnection_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimConnection_Vec[_j])._SimRootObject->RefId() == "ID1266")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimNode_DigitalControl_In_Vec[_i]), SimHierarchyNodeList.at(_id_SimConnection_Vec[_j]));
			}
		}
	}


	// return SimXML data
	//return SimModel_Data;
}

// add SimModel Hiearachial Node
void SimHierarchy::addHierarchyNode(SimHierarchyNode& _simNode)
{
	SimHierarchyNodeList.push_back(_simNode);
}