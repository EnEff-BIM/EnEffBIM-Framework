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

// get Python callback handler
SimPyCallBack* SimHierarchy::getCallBack()
{
	return _callback;
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

									// parse SurfaceNormal
									if(_simSpaceBoundarySecondSubTypeAIt->SurfaceNormal().present() && _callback)
									{
										SimRoot* _simSurfaceNormalObj = _callback->getSimClassObj(_simSpaceBoundarySecondSubTypeAIt->SurfaceNormal().get());
										if(_simSurfaceNormalObj)
										{
											// check node index list: avoid recreating the same node
											if(_nodeIndexList.find(_simSurfaceNormalObj->RefId())==_nodeIndexList.end())
											{
												SimHierarchyNode SimSurfaceNormal_Node;
												setCurrentObject(SimSurfaceNormal_Node, *_simSurfaceNormalObj);
												addHierarchyNode(SimSurfaceNormal_Node);
												int _id_SurfaceNormal = SimHierarchyNodeList.size() - 1;
												// save current object index position: <ref_id, index_pos>
												_nodeIndexList.insert(std::pair<std::string, int>(_simSurfaceNormalObj->RefId(), _id_SurfaceNormal));
												// save index pair for parent-child relationships
												_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simSpaceBoundarySecondSubTypeAIt->RefId())->second, _id_SurfaceNormal));
											}
											else
											{
												// save index pair for parent-child relationships
												_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simSpaceBoundarySecondSubTypeAIt->RefId())->second, _nodeIndexList.find(_simSurfaceNormalObj->RefId())->second));
											}
										}
									}

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
																if(_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().present())
																{
																	for(::xml_schema::idrefs::iterator _simTmpIt=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().begin(); _simTmpIt!=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().end(); ++_simTmpIt)
																	{
																		SimRoot* _tmpObj = _callback->getSimClassObj(*_simTmpIt);
																		// add metrial layer
																		parseMaterialLayer(_tmpObj, _nodeIndexPairList, _nodeIndexList, _id_SimMaterialLayerSet);
																	}
																}
															}
															else if(ClassType(_simMaterialLayerSetObj)=="SimMaterialLayerSet_OpaqueLayerSet_Floor")
															{
																SimMaterialLayerSet_OpaqueLayerSet_Floor* _simMaterialLayerSetObj_tmp = static_cast<SimMaterialLayerSet_OpaqueLayerSet_Floor*>(_simMaterialLayerSetObj);
																// add other MaterialLayers
																if(_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().present())
																{
																	for(::xml_schema::idrefs::iterator _simTmpIt=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().begin(); _simTmpIt!=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().end(); ++_simTmpIt)
																	{
																		SimRoot* _tmpObj = _callback->getSimClassObj(*_simTmpIt);
																		// add metrial layer
																		parseMaterialLayer(_tmpObj, _nodeIndexPairList, _nodeIndexList, _id_SimMaterialLayerSet);
																	}
																}
															}
															else if(ClassType(_simMaterialLayerSetObj)=="SimMaterialLayerSet_OpaqueLayerSet_Wall")
															{
																SimMaterialLayerSet_OpaqueLayerSet_Wall* _simMaterialLayerSetObj_tmp = static_cast<SimMaterialLayerSet_OpaqueLayerSet_Wall*>(_simMaterialLayerSetObj);
																// add other MaterialLayers
																if(_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().present())
																{
																	for(::xml_schema::idrefs::iterator _simTmpIt=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().begin(); _simTmpIt!=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().end(); ++_simTmpIt)
																	{
																		SimRoot* _tmpObj = _callback->getSimClassObj(*_simTmpIt);
																		// add metrial layer
																		parseMaterialLayer(_tmpObj, _nodeIndexPairList, _nodeIndexList, _id_SimMaterialLayerSet);
																	}
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

												/*insert code begin*/
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

																		// building story link
																		if(_simWindowExteriorIt->ContainingSpatialStructure().present() && _nodeIndexList.find(_simWindowExteriorIt->ContainingSpatialStructure().get())!=_nodeIndexList.end())
																		{
																			// save index pair for parent-child relationships
																			_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simWindowExteriorIt->ContainingSpatialStructure().get())->second, _id_SimWindowExterior));
																		}

																		// parse internal material
																		if(_simWindowExteriorIt->MaterialList().present())
																		{
																			std::string _materialLayerSetId = _simWindowExteriorIt->MaterialList().get();
																			SimRoot* _simMaterialLayerSetObj = _callback->getSimClassObj(_simWindowExteriorIt->MaterialList().get());
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
																					_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simWindowExteriorIt->RefId())->second, _id_SimMaterialLayerSet));

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
																					if(ClassType(_simMaterialLayerSetObj)=="SimMaterialLayerSet_OpaqueLayerSet_Roof")
																					{
																						SimMaterialLayerSet_OpaqueLayerSet_Roof* _simMaterialLayerSetObj_tmp = static_cast<SimMaterialLayerSet_OpaqueLayerSet_Roof*>(_simMaterialLayerSetObj);
																						
																						// add other MaterialLayers
																						if(_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().present())
																						{
																							for(::xml_schema::idrefs::iterator _simTmpIt=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().begin(); _simTmpIt!=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().end(); ++_simTmpIt)
																							{
																								SimRoot* _tmpObj = _callback->getSimClassObj(*_simTmpIt);
																								// add metrial layer
																								parseMaterialLayer(_tmpObj, _nodeIndexPairList, _nodeIndexList, _id_SimMaterialLayerSet);
																							}
																						}
																					}
																					else if(ClassType(_simMaterialLayerSetObj)=="SimMaterialLayerSet_OpaqueLayerSet_Floor")
																					{
																						SimMaterialLayerSet_OpaqueLayerSet_Floor* _simMaterialLayerSetObj_tmp = static_cast<SimMaterialLayerSet_OpaqueLayerSet_Floor*>(_simMaterialLayerSetObj);
																						// add other MaterialLayers
																						if(_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().present())
																						{
																							for(::xml_schema::idrefs::iterator _simTmpIt=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().begin(); _simTmpIt!=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().end(); ++_simTmpIt)
																							{
																								SimRoot* _tmpObj = _callback->getSimClassObj(*_simTmpIt);
																								// add metrial layer
																								parseMaterialLayer(_tmpObj, _nodeIndexPairList, _nodeIndexList, _id_SimMaterialLayerSet);
																							}
																						}
																					}
																					else if(ClassType(_simMaterialLayerSetObj)=="SimMaterialLayerSet_OpaqueLayerSet_Wall")
																					{
																						SimMaterialLayerSet_OpaqueLayerSet_Wall* _simMaterialLayerSetObj_tmp = static_cast<SimMaterialLayerSet_OpaqueLayerSet_Wall*>(_simMaterialLayerSetObj);
																						// add other MaterialLayers
																						if(_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().present())
																						{
																							for(::xml_schema::idrefs::iterator _simTmpIt=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().begin(); _simTmpIt!=_simMaterialLayerSetObj_tmp->SimMatLayerSet_Layer_2_10().get().end(); ++_simTmpIt)
																							{
																								SimRoot* _tmpObj = _callback->getSimClassObj(*_simTmpIt);
																								// add metrial layer
																								parseMaterialLayer(_tmpObj, _nodeIndexPairList, _nodeIndexList, _id_SimMaterialLayerSet);
																							}
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
																					_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simWindowExteriorIt->RefId())->second, _nodeIndexList.find(_simMaterialLayerSetObj->RefId())->second));
																				}
																			}
																		}
																	}
																	else
																	{
																		// save index pair for parent-child relationships
																		_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simFeatureElementSubtractionVoidOpeningIt->RefId())->second, _nodeIndexList.find(_simWindowExteriorIt->RefId())->second));
																	}

																	break;
																}
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
												/*insert code end*/
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
		_simClassList.push_back("SimSlab_Floor_InterzoneFloor");
		_simClassList.push_back("SimWall_Wall_ExteriorAboveGrade");
		_simClassList.push_back("SimWindow_Window_Exterior");
		_simClassList.push_back("SimWall_Wall_Interior");
		// building MaterialLayerSet
		_simClassList.push_back("SimMaterialLayerSet_OpaqueLayerSet_Roof");
		_simClassList.push_back("SimMaterialLayerSet_OpaqueLayerSet_Floor");
		_simClassList.push_back("SimMaterialLayerSet_OpaqueLayerSet_Wall");
		_simClassList.push_back("SimMaterialLayerSet_GlazingLayerSet_Window");
		// building MaterialLayer
		_simClassList.push_back("SimMaterialLayer_OpaqueMaterialLayer_Default");
		_simClassList.push_back("SimMaterialLayer_GlazingMaterialLayer_Default");
		// building Material
		_simClassList.push_back("SimMaterial_Default_Default");
		_simClassList.push_back("SimMaterial_OpaqueMaterial_Default");
		_simClassList.push_back("SimMaterial_OpaqueMaterial_AirGap");
		_simClassList.push_back("SimMaterial_GlazingMaterial_Gas");
		_simClassList.push_back("SimMaterial_GlazingMaterial_Glazing");
		_simClassList.push_back("SimMaterial_GlazingMaterial_SimpleGlazingSystem");
		//
		_simClassList.push_back("SimGeomVector_Vector_Direction");
		_simClassList.push_back("SimTemplateZoneLoads_ZoneLoads_Default");
		_simClassList.push_back("SimTemplateZoneConditions_ZoneConditions_Default");
		_simClassList.push_back("SimInternalLoad_Equipment_Electric");
		_simClassList.push_back("SimInternalLoad_People_Default");
		_simClassList.push_back("SimInternalLoad_Lights_Default");
		_simClassList.push_back("SimController_ZoneControlTemperature_Thermostat");
		_simClassList.push_back("SimControlScheme_SetpointScheme_SingleHeating");
		//
		_simClassList.push_back("SimTimeSeriesSchedule_Year_Default");

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
		_simClassList.push_back("SimFlowEnergyTransferStorage_HotWaterTank_Expansion");
		_simClassList.push_back("SimFlowFitting_Default_Default");
		_simClassList.push_back("SimFlowMover_Pump_VariableSpeedReturn");
		_simClassList.push_back("SimFlowPlant_Boiler_BoilerHotWater");
		_simClassList.push_back("SimFlowSegment_Pipe_Indoor");
		_simClassList.push_back("SimDistributionPort_HotWaterFlowPort_Water_Out");
		_simClassList.push_back("SimDistributionPort_HotWaterFlowPort_Water_In");
		_simClassList.push_back("SimPerformanceCurve_Mathematical_Cubic");
		// load data into dictionary
		_callback->loadSimSysClassObj(_sysName, _simClassList);
	}
}

// parse day time series
bool SimHierarchy::parseDayTimeSeries(::std::auto_ptr< ::schema::simxml::Model::SimModel >& simSysData, int _id_ParentNode, std::string _timeSeriesId, std::vector<std::pair<int, int> >& _nodeIndexPairList, std::map<std::string, int>& _nodeIndexList)
{
	// day series
	for(SimModel::SimTimeSeriesSchedule_Day_Interval_iterator _daySeriesIt=simSysData->SimTimeSeriesSchedule_Day_Interval().begin(); _daySeriesIt!=simSysData->SimTimeSeriesSchedule_Day_Interval().end(); ++_daySeriesIt)
	{
		if(_daySeriesIt->RefId()==_timeSeriesId)
		{
			// add day series
			if(_nodeIndexList.find(_daySeriesIt->RefId())==_nodeIndexList.end())
			{
				SimHierarchyNode SimTimeSeries_Node;
				setCurrentObject(SimTimeSeries_Node, *_daySeriesIt);
				addHierarchyNode(SimTimeSeries_Node);
				int _id_SimTimeSeries = SimHierarchyNodeList.size() - 1;
				// save current object index position: <ref_id, index_pos>
				_nodeIndexList.insert(std::pair<std::string, int>(_daySeriesIt->RefId(), _id_SimTimeSeries));
				// save index pair for parent-child relationships
				_nodeIndexPairList.push_back(std::pair<int, int>(_id_ParentNode, _id_SimTimeSeries));
			}
			else
			{
				// save index pair for parent-child relationships
				_nodeIndexPairList.push_back(std::pair<int, int>(_id_ParentNode, _nodeIndexList.find(_daySeriesIt->RefId())->second));
			}

			// ending
			return true;
		}
	}

	// ending: not found
	return false;
}

// parse week time series
bool SimHierarchy::parseWeekTimeSeries(::std::auto_ptr< ::schema::simxml::Model::SimModel >& simSysData, int _id_ParentNode, std::string _timeSeriesId, std::vector<std::pair<int, int> >& _nodeIndexPairList, std::map<std::string, int>& _nodeIndexList)
{
	// week series
	for(SimModel::SimTimeSeriesSchedule_Week_Daily_iterator _weekSeriesIt=simSysData->SimTimeSeriesSchedule_Week_Daily().begin(); _weekSeriesIt!=simSysData->SimTimeSeriesSchedule_Week_Daily().end(); ++_weekSeriesIt)
	{
		if(_weekSeriesIt->RefId()==_timeSeriesId)
		{
			// add week series
			if(_nodeIndexList.find(_weekSeriesIt->RefId())==_nodeIndexList.end())
			{
				SimHierarchyNode SimTimeSeries_Node;
				setCurrentObject(SimTimeSeries_Node, *_weekSeriesIt);
				addHierarchyNode(SimTimeSeries_Node);
				int _id_SimTimeSeries = SimHierarchyNodeList.size() - 1;
				// save current object index position: <ref_id, index_pos>
				_nodeIndexList.insert(std::pair<std::string, int>(_weekSeriesIt->RefId(), _id_SimTimeSeries));
				// save index pair for parent-child relationships
				_nodeIndexPairList.push_back(std::pair<int, int>(_id_ParentNode, _id_SimTimeSeries));

				// parse sub-series: day
				if(_weekSeriesIt->SimTimeSeriesSched_CustomDay_1_2_SchedDayName().present())
				{
					for(::xml_schema::idrefs::iterator _subWeekSeriesIt=_weekSeriesIt->SimTimeSeriesSched_CustomDay_1_2_SchedDayName().get().begin(); _subWeekSeriesIt!=_weekSeriesIt->SimTimeSeriesSched_CustomDay_1_2_SchedDayName().get().end(); ++_subWeekSeriesIt)
					{
						// day series
						parseDayTimeSeries(simSysData, _id_SimTimeSeries, *_subWeekSeriesIt, _nodeIndexPairList, _nodeIndexList);
					}
				}
			}
			else
			{
				// save index pair for parent-child relationships
				_nodeIndexPairList.push_back(std::pair<int, int>(_id_ParentNode, _nodeIndexList.find(_weekSeriesIt->RefId())->second));
			}

			// ending
			return true;
		}
	}

	// ending: not found
	return false;
}

// parse year time series
bool SimHierarchy::parseYearTimeSeries(::std::auto_ptr< ::schema::simxml::Model::SimModel >& simSysData, int _id_ParentNode, std::string _timeSeriesId, std::vector<std::pair<int, int> >& _nodeIndexPairList, std::map<std::string, int>& _nodeIndexList)
{
	// year series
	for(SimModel::SimTimeSeriesSchedule_Year_Default_iterator _yearSeriesIt=simSysData->SimTimeSeriesSchedule_Year_Default().begin(); _yearSeriesIt!=simSysData->SimTimeSeriesSchedule_Year_Default().end(); ++_yearSeriesIt)
	{
		if(_yearSeriesIt->RefId()==_timeSeriesId)
		{
			// add year series
			if(_nodeIndexList.find(_yearSeriesIt->RefId())==_nodeIndexList.end())
			{
				SimHierarchyNode SimTimeSeries_Node;
				setCurrentObject(SimTimeSeries_Node, *_yearSeriesIt);
				addHierarchyNode(SimTimeSeries_Node);
				int _id_SimTimeSeries = SimHierarchyNodeList.size() - 1;
				// save current object index position: <ref_id, index_pos>
				_nodeIndexList.insert(std::pair<std::string, int>(_yearSeriesIt->RefId(), _id_SimTimeSeries));
				// save index pair for parent-child relationships
				_nodeIndexPairList.push_back(std::pair<int, int>(_id_ParentNode, _id_SimTimeSeries));

				// parse sub-series: multiple series
				if(_yearSeriesIt->SimTimeSeriesSched_Sched_WeekName_1_53().present())
				{
					for(::xml_schema::idrefs::iterator _subYearSeriesIt=_yearSeriesIt->SimTimeSeriesSched_Sched_WeekName_1_53().get().begin(); _subYearSeriesIt!=_yearSeriesIt->SimTimeSeriesSched_Sched_WeekName_1_53().get().end(); ++_subYearSeriesIt)
					{
						// week series
						if(!parseWeekTimeSeries(simSysData, _id_SimTimeSeries, *_subYearSeriesIt, _nodeIndexPairList, _nodeIndexList))
						{
							// day series
							parseDayTimeSeries(simSysData, _id_SimTimeSeries, *_subYearSeriesIt, _nodeIndexPairList, _nodeIndexList);
						}
					}
				}
			}
			else
			{
				// save index pair for parent-child relationships
				_nodeIndexPairList.push_back(std::pair<int, int>(_id_ParentNode, _nodeIndexList.find(_yearSeriesIt->RefId())->second));
			}

			// ending
			return true;
		}
	}

	// ending: not found
	return false;
}

// parse time series
void SimHierarchy::parseTimeSeries(::std::auto_ptr< ::schema::simxml::Model::SimModel >& simSysData, int _id_SimSystemElement, std::string _timeSeriesId, std::vector<std::pair<int, int> >& _nodeIndexPairList, std::map<std::string, int>& _nodeIndexList)
{
	// year series
	if(!parseYearTimeSeries(simSysData, _id_SimSystemElement, _timeSeriesId, _nodeIndexPairList, _nodeIndexList))
	{
		// week series
		if(!parseWeekTimeSeries(simSysData, _id_SimSystemElement, _timeSeriesId, _nodeIndexPairList, _nodeIndexList))
		{
			// day series
			parseDayTimeSeries(simSysData, _id_SimSystemElement, _timeSeriesId, _nodeIndexPairList, _nodeIndexList);
		}
	}
}

// parse SimSystem
// for new feature testing
void SimHierarchy::parseSimSystemTmp(::std::auto_ptr< ::schema::simxml::Model::SimModel >& simSysData, ::std::auto_ptr< ::schema::simxml::Model::SimModel >& simGeometryData, int _id_SimBuilding, std::vector<std::pair<int, int> >& _nodeIndexPairList, std::map<std::string, int>& _nodeIndexList)
{
	std::set<std::string> _subSystemIdList;
	// Simsystem
	for(SimModel::SimSystem_HvacHotWater_FullSystem_iterator _simFullSystemIt=simSysData->SimSystem_HvacHotWater_FullSystem().begin(); _simFullSystemIt!=simSysData->SimSystem_HvacHotWater_FullSystem().end(); ++_simFullSystemIt)
	{
		// save sub-system Ref Id
		_subSystemIdList.insert(_simFullSystemIt->RefId());
		// create the child node of the SimBuilding node in the hierarch tree
		if(_nodeIndexList.find(_simFullSystemIt->RefId())==_nodeIndexList.end())
		{
			SimHierarchyNode SimSystem_Node;
			setCurrentObject(SimSystem_Node, *_simFullSystemIt);
			addHierarchyNode(SimSystem_Node);
			int _id_SimSystem = SimHierarchyNodeList.size() - 1;

			// save current object index position: <ref_id, index_pos>
			_nodeIndexList.insert(std::pair<std::string, int>(_simFullSystemIt->RefId(), _id_SimSystem));
			// save index pair for parent-child relationships
			_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimBuilding, _id_SimSystem));
		}
		else
		{
			// save index pair for parent-child relationships
			_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimBuilding, _nodeIndexList.find(_simFullSystemIt->RefId())->second));
		}
	}

	{
		// parse system element
		if(_subSystemIdList.size())
		{
			// supply side
			for(SimModel::SimSystem_HvacHotWater_Supply_iterator _simSystemIt=simSysData->SimSystem_HvacHotWater_Supply().begin(); _simSystemIt!=simSysData->SimSystem_HvacHotWater_Supply().end(); ++_simSystemIt)
			{
				if(_simSystemIt->ParentSystem().present() && _nodeIndexList.find(_simSystemIt->ParentSystem().get())!=_nodeIndexList.end())
				{
					// save sub-system Ref Id
					_subSystemIdList.insert(_simSystemIt->RefId());
					// create the child node of the SimBuilding node in the hierarch tree
					if(_nodeIndexList.find(_simSystemIt->RefId())==_nodeIndexList.end())
					{
						SimHierarchyNode SimSystem_Node;
						setCurrentObject(SimSystem_Node, *_simSystemIt);
						addHierarchyNode(SimSystem_Node);
						int _id_SimSystem = SimHierarchyNodeList.size() - 1;

						// save current object index position: <ref_id, index_pos>
						_nodeIndexList.insert(std::pair<std::string, int>(_simSystemIt->RefId(), _id_SimSystem));
						// save index pair for parent-child relationships
						_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simSystemIt->ParentSystem().get())->second, _id_SimSystem));
					}
					else
					{
						// save index pair for parent-child relationships
						_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simSystemIt->ParentSystem().get())->second, _nodeIndexList.find(_simSystemIt->RefId())->second));
					}
				}
			}

			// demand side
			for(SimModel::SimSystem_HvacHotWater_Demand_iterator _simSystemIt=simSysData->SimSystem_HvacHotWater_Demand().begin(); _simSystemIt!=simSysData->SimSystem_HvacHotWater_Demand().end(); ++_simSystemIt)
			{
				if(_simSystemIt->ParentSystem().present() && _nodeIndexList.find(_simSystemIt->ParentSystem().get())!=_nodeIndexList.end())
				{
					// save sub-system Ref Id
					_subSystemIdList.insert(_simSystemIt->RefId());
					// create the child node of the SimBuilding node in the hierarch tree
					if(_nodeIndexList.find(_simSystemIt->RefId())==_nodeIndexList.end())
					{
						SimHierarchyNode SimSystem_Node;
						setCurrentObject(SimSystem_Node, *_simSystemIt);
						addHierarchyNode(SimSystem_Node);
						int _id_SimSystem = SimHierarchyNodeList.size() - 1;

						// save current object index position: <ref_id, index_pos>
						_nodeIndexList.insert(std::pair<std::string, int>(_simSystemIt->RefId(), _id_SimSystem));
						// save index pair for parent-child relationships
						_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simSystemIt->ParentSystem().get())->second, _id_SimSystem));
					}
					else
					{
						// save index pair for parent-child relationships
						_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simSystemIt->ParentSystem().get())->second, _nodeIndexList.find(_simSystemIt->RefId())->second));
					}
				}
			}

			// SimFlowController_Valve_TemperingValve
			for(SimModel::SimFlowController_Valve_TemperingValve_iterator _simFlowControllerValveIt=simSysData->SimFlowController_Valve_TemperingValve().begin(); _simFlowControllerValveIt!=simSysData->SimFlowController_Valve_TemperingValve().end(); ++_simFlowControllerValveIt)
			{
				if(_simFlowControllerValveIt->AssignedToGroups().present())
				{
					for(::xml_schema::idrefs::iterator _simFlowControllerValveSubIt=_simFlowControllerValveIt->AssignedToGroups().get().begin(); _simFlowControllerValveSubIt!=_simFlowControllerValveIt->AssignedToGroups().get().end(); ++_simFlowControllerValveSubIt)
					
					{
						if(_subSystemIdList.find(*_simFlowControllerValveSubIt)!=_subSystemIdList.end())
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
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simFlowControllerValveSubIt)->second, _id_SimFlowControllerValve));
							}
							else
							{
								// save index pair for parent-child relationships
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simFlowControllerValveSubIt)->second, _nodeIndexList.find(_simFlowControllerValveIt->RefId())->second));
							}
						}
					}
				}
			}

			//
			for(SimModel::SimFlowController_Valve_Default_iterator _simFlowControllerValveIt=simSysData->SimFlowController_Valve_Default().begin(); _simFlowControllerValveIt!=simSysData->SimFlowController_Valve_Default().end(); ++_simFlowControllerValveIt)
			{
				if(_simFlowControllerValveIt->AssignedToGroups().present())
				{
					for(::xml_schema::idrefs::iterator _simFlowControllerValveSubIt=_simFlowControllerValveIt->AssignedToGroups().get().begin(); _simFlowControllerValveSubIt!=_simFlowControllerValveIt->AssignedToGroups().get().end(); ++_simFlowControllerValveSubIt)
					
					{
						if(_subSystemIdList.find(*_simFlowControllerValveSubIt)!=_subSystemIdList.end())
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
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simFlowControllerValveSubIt)->second, _id_SimFlowControllerValve));
							}
							else
							{
								// save index pair for parent-child relationships
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simFlowControllerValveSubIt)->second, _nodeIndexList.find(_simFlowControllerValveIt->RefId())->second));
							}
						}
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
						if(_subSystemIdList.find(*_simSystemElementSubIt)!=_subSystemIdList.end())
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
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simSystemElementSubIt)->second, _id_SimSystemElement));
							}
							else
							{
								// save index pair for parent-child relationships
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simSystemElementSubIt)->second, _nodeIndexList.find(_simSystemElementIt->RefId())->second));
							}
						}

						// zone Hvac group id
						//_simSystemElementIt->AssignedToGroups().get().size();
						//_simSystemElementIt->AssignedToGroups().get().back();
					}
				}
			}
			
			// SimFlowEnergyTransferStorage_HotWaterTank_Expansion
			for(SimModel::SimFlowEnergyTransferStorage_HotWaterTank_Expansion_iterator _simSystemElementIt=simSysData->SimFlowEnergyTransferStorage_HotWaterTank_Expansion().begin(); _simSystemElementIt!=simSysData->SimFlowEnergyTransferStorage_HotWaterTank_Expansion().end(); ++_simSystemElementIt)
			{
				if(_simSystemElementIt->AssignedToGroups().present())
				{
					for(::xml_schema::idrefs::iterator _simSystemElementSubIt=_simSystemElementIt->AssignedToGroups().get().begin(); _simSystemElementSubIt!=_simSystemElementIt->AssignedToGroups().get().end(); ++_simSystemElementSubIt)
					{
						if(_subSystemIdList.find(*_simSystemElementSubIt)!=_subSystemIdList.end())
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
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simSystemElementSubIt)->second, _id_SimSystemElement));
							}
							else
							{
								// save index pair for parent-child relationships
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simSystemElementSubIt)->second, _nodeIndexList.find(_simSystemElementIt->RefId())->second));
							}
						}
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
						if(_subSystemIdList.find(*_simSystemElementSubIt)!=_subSystemIdList.end())
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
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simSystemElementSubIt)->second, _id_SimSystemElement));
							}
							else
							{
								// save index pair for parent-child relationships
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simSystemElementSubIt)->second, _nodeIndexList.find(_simSystemElementIt->RefId())->second));
							}
						}
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
						if(_subSystemIdList.find(*_simSystemElementSubIt)!=_subSystemIdList.end())
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
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simSystemElementSubIt)->second, _id_SimSystemElement));
							}
							else
							{
								// save index pair for parent-child relationships
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simSystemElementSubIt)->second, _nodeIndexList.find(_simSystemElementIt->RefId())->second));
							}
						}
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
						if(_subSystemIdList.find(*_simSystemElementSubIt)!=_subSystemIdList.end())
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
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simSystemElementSubIt)->second, _id_SimSystemElement));
							}
							else
							{
								// save index pair for parent-child relationships
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simSystemElementSubIt)->second, _nodeIndexList.find(_simSystemElementIt->RefId())->second));
							}
						}
					}
					
					// parse attached time series
					if(_nodeIndexList.find(_simSystemElementIt->RefId())!=_nodeIndexList.end())
					{
						if(_simSystemElementIt->SimFlowMover_PumprpmSchedName().present())
						{
							parseTimeSeries(simSysData, _nodeIndexList.find(_simSystemElementIt->RefId())->second, _simSystemElementIt->SimFlowMover_PumprpmSchedName().get(), _nodeIndexPairList, _nodeIndexList);
						}
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
						if(_subSystemIdList.find(*_simSystemElementSubIt)!=_subSystemIdList.end())
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
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simSystemElementSubIt)->second, _id_SimSystemElement));
							}
							else
							{
								// save index pair for parent-child relationships
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simSystemElementSubIt)->second, _nodeIndexList.find(_simSystemElementIt->RefId())->second));
							}
						}
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
						if(_subSystemIdList.find(*_simSystemElementSubIt)!=_subSystemIdList.end())
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
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simSystemElementSubIt)->second, _id_SimSystemElement));
							}
							else
							{
								// save index pair for parent-child relationships
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simSystemElementSubIt)->second, _nodeIndexList.find(_simSystemElementIt->RefId())->second));
							}
						}
					}
				}
			}

			// SimController_SupplyWater_Temperature
			for(SimModel::SimController_SupplyWater_Temperature_iterator _simSystemElementIt=simSysData->SimController_SupplyWater_Temperature().begin(); _simSystemElementIt!=simSysData->SimController_SupplyWater_Temperature().end(); ++_simSystemElementIt)
			{
				if(_simSystemElementIt->AssignedToFlowElement().present())
				{
					for(::xml_schema::idrefs::iterator _simSystemElementSubIt=_simSystemElementIt->AssignedToFlowElement().get().begin(); _simSystemElementSubIt!=_simSystemElementIt->AssignedToFlowElement().get().end(); ++_simSystemElementSubIt)
					{
						if(_nodeIndexList.find(*_simSystemElementSubIt)!=_nodeIndexList.end())
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
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simSystemElementSubIt)->second, _id_SimSystemElement));
							}
							else
							{
								// save index pair for parent-child relationships
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(*_simSystemElementSubIt)->second, _nodeIndexList.find(_simSystemElementIt->RefId())->second));
							}
						}
					}
				}
			}

			// save thermal zone id mapping info
			std::map<std::string, std::string> _simThermalZoneMap;
			// SimSpatialZone_ThermalZone_Default
			for(SimModel::SimSpatialZone_ThermalZone_Default_iterator _simSystemElementIt=simSysData->SimSpatialZone_ThermalZone_Default().begin(); _simSystemElementIt!=simSysData->SimSpatialZone_ThermalZone_Default().end(); ++_simSystemElementIt)
			{
				if(_simSystemElementIt->SimModelName().present())
				{
					for(SimModel::SimSpatialZone_ThermalZone_Default_iterator _simGeomElementIt=simGeometryData->SimSpatialZone_ThermalZone_Default().begin(); _simGeomElementIt!=simGeometryData->SimSpatialZone_ThermalZone_Default().end(); ++_simGeomElementIt)
					{
						if(_simGeomElementIt->IfcName().present() && _simSystemElementIt->SimModelName().get()==_simGeomElementIt->IfcName().get())
						{
							_simThermalZoneMap.insert(std::pair<std::string, std::string>(_simSystemElementIt->RefId(), _simGeomElementIt->RefId()));
						}
					}
				}
			}

			// SimList_EquipmentList_ZoneHvac
			for(SimModel::SimList_EquipmentList_ZoneHvac_iterator _simSystemElementIt=simSysData->SimList_EquipmentList_ZoneHvac().begin(); _simSystemElementIt!=simSysData->SimList_EquipmentList_ZoneHvac().end(); ++_simSystemElementIt)
			{
				// link to radiator
				if(_simSystemElementIt->SimList_ZoneEqmt_1_18_Name().present())
				{
					for(::xml_schema::idrefs::iterator _simSystemElementSubIt=_simSystemElementIt->SimList_ZoneEqmt_1_18_Name().get().begin(); _simSystemElementSubIt!=_simSystemElementIt->SimList_ZoneEqmt_1_18_Name().get().end(); ++_simSystemElementSubIt)
					{
						if(_nodeIndexList.find(*_simSystemElementSubIt)!=_nodeIndexList.end())
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
								_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimSystemElement, _nodeIndexList.find(*_simSystemElementSubIt)->second));
							}
							else
							{
								// save index pair for parent-child relationships
								_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simSystemElementIt->RefId())->second, _nodeIndexList.find(*_simSystemElementSubIt)->second));
							}
						}
					}
				}

				// link to thermal zone
				if(_simSystemElementIt->ParentGroups().present())
				{
					for(::xml_schema::idrefs::iterator _simThermalZoneIt=_simSystemElementIt->ParentGroups().get().begin(); _simThermalZoneIt!=_simSystemElementIt->ParentGroups().get().end(); ++_simThermalZoneIt)
					{
						if(_simThermalZoneMap.find(*_simThermalZoneIt)!=_simThermalZoneMap.end())
						{
							// retrieve the real thermal zone ref id defined in the geometry file
							std::string _thermalZoneRefId = _simThermalZoneMap.find(*_simThermalZoneIt)->second;

							if(_nodeIndexList.find(_thermalZoneRefId)!=_nodeIndexList.end())
							{
								// build parent child link
								if(_nodeIndexList.find(_simSystemElementIt->RefId())==_nodeIndexList.end())
								{
									SimHierarchyNode SimSystemElement_Node;
									setCurrentObject(SimSystemElement_Node, *_simSystemElementIt);
									addHierarchyNode(SimSystemElement_Node);
									int _id_SimSystemElement = SimHierarchyNodeList.size() - 1;
									// save current object index position: <ref_id, index_pos>
									_nodeIndexList.insert(std::pair<std::string, int>(_simSystemElementIt->RefId(), _id_SimSystemElement));
									// save index pair for parent-child relationships
									_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_thermalZoneRefId)->second, _id_SimSystemElement));
								}
								else
								{
									// save index pair for parent-child relationships
									_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_thermalZoneRefId)->second, _nodeIndexList.find(_simSystemElementIt->RefId())->second));
								}
							}
						}
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

			// InOrOut port
		for(SimModel::SimDistributionPort_HotWaterFlowPort_Water_InOrOut_iterator _simPortElementIt=simSysData->SimDistributionPort_HotWaterFlowPort_Water_InOrOut().begin(); _simPortElementIt!=simSysData->SimDistributionPort_HotWaterFlowPort_Water_InOrOut().end(); ++_simPortElementIt)
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

	}

}

// parse SimModel hierarchy data
// new update for version 2.2
void SimHierarchy::parser2_2(::std::auto_ptr< ::schema::simxml::Model::SimModel >& simGeometryData, ::std::auto_ptr< ::schema::simxml::Model::SimModel >& simSysData, std::string _geoName, std::string _sysName)
{
	// load specified geometry class objects
	loadSimGeomClassObj(_geoName);
	// load HVAC components
	loadSimSysClassObj(_sysName);

	//return;
	// parsing SimXML hierarchy
	// save <parent_node_index, child_node_index>
	std::vector<std::pair<int, int> > _nodeIndexPairList;
	// save object index position: <node_refId, node_index>
	std::map<std::string, int> _nodeIndexList;
	//
	std::map<std::string, SimModel::SimGeomVector_Vector_Direction_iterator> _simGeomVectorMap;
	for(SimModel::SimGeomVector_Vector_Direction_iterator _simGeomVecIt=simGeometryData->SimGeomVector_Vector_Direction().begin(); _simGeomVecIt!=simGeometryData->SimGeomVector_Vector_Direction().end(); ++_simGeomVecIt)
	{
		_simGeomVectorMap.insert(std::pair<std::string, SimModel::SimGeomVector_Vector_Direction_iterator>(_simGeomVecIt->RefId(), _simGeomVecIt));
	}

	// parse SimProject
	if(simGeometryData->SimProject_Project_DesignAlternative().size())
	{
		SimHierarchyNode SimProject_Node;
		setCurrentObject(SimProject_Node, simGeometryData->SimProject_Project_DesignAlternative().front());
		addHierarchyNode(SimProject_Node);
		int _id_SimProject = SimHierarchyNodeList.size() - 1;

		// parse coordinates
		if(simGeometryData->SimProject_Project_DesignAlternative().front()._3DModelRepresentationContexts().present())
		{
			for(::xml_schema::idrefs::iterator _simProjectSubIt=simGeometryData->SimProject_Project_DesignAlternative().front()._3DModelRepresentationContexts().get().begin(); _simProjectSubIt!=simGeometryData->SimProject_Project_DesignAlternative().front()._3DModelRepresentationContexts().get().end(); ++_simProjectSubIt)
			{
				for(SimModel::SimModelRepresentationContext_GeometricRepresentationContext_Default_iterator _simGeomRepIt=simGeometryData->SimModelRepresentationContext_GeometricRepresentationContext_Default().begin(); _simGeomRepIt!=simGeometryData->SimModelRepresentationContext_GeometricRepresentationContext_Default().end(); ++_simGeomRepIt)
				{
					if(_simGeomRepIt->RefId()==*_simProjectSubIt)
					{
						// check node index list: avoid recreating the same node
						if(_nodeIndexList.find(_simGeomRepIt->RefId())==_nodeIndexList.end())
						{
							SimHierarchyNode SimGeometricRepresentationContext_Node;
							setCurrentObject(SimGeometricRepresentationContext_Node, *_simGeomRepIt);
							addHierarchyNode(SimGeometricRepresentationContext_Node);
							int _id_SimGeometricRepresentationContext_Node = SimHierarchyNodeList.size() - 1;
							// save current object index position: <ref_id, index_pos>
							_nodeIndexList.insert(std::pair<std::string, int>(_simGeomRepIt->RefId(), _id_SimGeometricRepresentationContext_Node));
						
							// save index pair for parent-child relationships
							_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimProject, _id_SimGeometricRepresentationContext_Node));

							// parse WorldCoordinateSystem
							if(_simGeomRepIt->WorldCoordinateSystem().present())
							{
								for(SimModel::SimPlacement_Axis2Placement3D_Default_iterator _simPlace3DIt=simGeometryData->SimPlacement_Axis2Placement3D_Default().begin(); _simPlace3DIt!=simGeometryData->SimPlacement_Axis2Placement3D_Default().end(); ++_simPlace3DIt)
								{
									if(_simPlace3DIt->RefId()==_simGeomRepIt->WorldCoordinateSystem().get())
									{
										// check node index list: avoid recreating the same node
										if(_nodeIndexList.find(_simPlace3DIt->RefId())==_nodeIndexList.end())
										{
											SimHierarchyNode SimAxis2Placement3D_Node;
											setCurrentObject(SimAxis2Placement3D_Node, *_simPlace3DIt);
											addHierarchyNode(SimAxis2Placement3D_Node);
											int _id_SimAxis2Placement3D_Node = SimHierarchyNodeList.size() - 1;
											// save current object index position: <ref_id, index_pos>
											_nodeIndexList.insert(std::pair<std::string, int>(_simPlace3DIt->RefId(), _id_SimAxis2Placement3D_Node));
						
											// save index pair for parent-child relationships
											_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simGeomRepIt->RefId())->second, _id_SimAxis2Placement3D_Node));

											// Axis
											if(_simPlace3DIt->Axis().present() && _simGeomVectorMap.find(_simPlace3DIt->Axis().get())!=_simGeomVectorMap.end())
											{
												// check node index list: avoid recreating the same node
												if(_nodeIndexList.find(_simPlace3DIt->Axis().get())==_nodeIndexList.end())
												{
													SimHierarchyNode SimGeomVector_Node;
													setCurrentObject(SimGeomVector_Node, *_simGeomVectorMap.find(_simPlace3DIt->Axis().get())->second);
													addHierarchyNode(SimGeomVector_Node);
													int _id_SimGeomVector_Node = SimHierarchyNodeList.size() - 1;
													// save current object index position: <ref_id, index_pos>
													_nodeIndexList.insert(std::pair<std::string, int>(_simPlace3DIt->Axis().get(), _id_SimGeomVector_Node));
						
													// save index pair for parent-child relationships
													_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simPlace3DIt->RefId())->second, _id_SimGeomVector_Node));
												}
												else
												{
													// save index pair for parent-child relationships
													_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simPlace3DIt->RefId())->second, _nodeIndexList.find(_simPlace3DIt->Axis().get())->second));
												}
											}

											// RefDirection
											if(_simPlace3DIt->RefDirection().present() && _simGeomVectorMap.find(_simPlace3DIt->RefDirection().get())!=_simGeomVectorMap.end())
											{
												// check node index list: avoid recreating the same node
												if(_nodeIndexList.find(_simPlace3DIt->RefDirection().get())==_nodeIndexList.end())
												{
													SimHierarchyNode SimGeomVector_Node;
													setCurrentObject(SimGeomVector_Node, *_simGeomVectorMap.find(_simPlace3DIt->RefDirection().get())->second);
													addHierarchyNode(SimGeomVector_Node);
													int _id_SimGeomVector_Node = SimHierarchyNodeList.size() - 1;
													// save current object index position: <ref_id, index_pos>
													_nodeIndexList.insert(std::pair<std::string, int>(_simPlace3DIt->RefDirection().get(), _id_SimGeomVector_Node));
						
													// save index pair for parent-child relationships
													_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simPlace3DIt->RefId())->second, _id_SimGeomVector_Node));
												}
												else
												{
													// save index pair for parent-child relationships
													_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simPlace3DIt->RefId())->second, _nodeIndexList.find(_simPlace3DIt->RefDirection().get())->second));
												}
											}
										}
										else
										{
											// save index pair for parent-child relationships
											_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simGeomRepIt->RefId())->second, _nodeIndexList.find(_simPlace3DIt->RefId())->second));
										}

										break;
									}
								}
							}

							// TrueNorth
							if(_simGeomRepIt->TrueNorth().present() && _simGeomVectorMap.find(_simGeomRepIt->TrueNorth().get())!=_simGeomVectorMap.end())
							{
								// check node index list: avoid recreating the same node
								if(_nodeIndexList.find(_simGeomRepIt->TrueNorth().get())==_nodeIndexList.end())
								{
									SimHierarchyNode SimGeomVector_Node;
									setCurrentObject(SimGeomVector_Node, *_simGeomVectorMap.find(_simGeomRepIt->TrueNorth().get())->second);
									addHierarchyNode(SimGeomVector_Node);
									int _id_SimGeomVector_Node = SimHierarchyNodeList.size() - 1;
									// save current object index position: <ref_id, index_pos>
									_nodeIndexList.insert(std::pair<std::string, int>(_simGeomRepIt->TrueNorth().get(), _id_SimGeomVector_Node));
						
									// save index pair for parent-child relationships
									_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simGeomRepIt->RefId())->second, _id_SimGeomVector_Node));
								}
								else
								{
									// save index pair for parent-child relationships
									_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simGeomRepIt->RefId())->second, _nodeIndexList.find(_simGeomRepIt->TrueNorth().get())->second));
								}
							}
						}
						else
						{
							// save index pair for parent-child relationships
							_nodeIndexPairList.push_back(std::pair<int, int>(_id_SimProject, _nodeIndexList.find(_simGeomRepIt->RefId())->second));
						}

						break;
					}
				}
			}
		}

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
								// from version 2.2, SimSpatialZone_ThermalZone_Default class was moved into HVAC file
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

										/********error*********/
										// parse SimSpace tree
										parseSimSpaceTree(simGeometryData, _nodeIndexPairList, _nodeIndexList, _simThermalZoneIt);

										// parse internal loads
										if(_simThermalZoneIt->TemplatesForMembers().present() && _callback)
										{
											for(::xml_schema::idrefs::iterator _simThermalZoneSubIt=_simThermalZoneIt->TemplatesForMembers().get().begin(); _simThermalZoneSubIt!=_simThermalZoneIt->TemplatesForMembers().get().end(); ++_simThermalZoneSubIt)
											{
												SimRoot* _simInternalLoadsObj = _callback->getSimClassObj(*_simThermalZoneSubIt);
												if(_simInternalLoadsObj)
												{
													// check node index list: avoid recreating the same node
													if(_nodeIndexList.find(_simInternalLoadsObj->RefId())==_nodeIndexList.end())
													{
														SimHierarchyNode SimInternalLoads_Node;
														setCurrentObject(SimInternalLoads_Node, *_simInternalLoadsObj);
														addHierarchyNode(SimInternalLoads_Node);
														int _id_SimInternalLoads = SimHierarchyNodeList.size() - 1;
														// save current object index position: <ref_id, index_pos>
														_nodeIndexList.insert(std::pair<std::string, int>(_simInternalLoadsObj->RefId(), _id_SimInternalLoads));
														// save index pair for parent-child relationships
														_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simThermalZoneIt->RefId())->second, _id_SimInternalLoads));

														// parse SimTemplateZoneLoads_ZoneLoads_Default
														if(ClassType(_simInternalLoadsObj)=="SimTemplateZoneLoads_ZoneLoads_Default")
														{
															SimTemplateZoneLoads_ZoneLoads_Default* _simTemplateZoneLoadsObj_tmp = static_cast<SimTemplateZoneLoads_ZoneLoads_Default*>(_simInternalLoadsObj);

															// interal TemplateElectricalEquipment
															if(_simTemplateZoneLoadsObj_tmp->TemplateElectricalEquipment().present())
															{
																for(::xml_schema::idrefs::iterator _simTmpIt=_simTemplateZoneLoadsObj_tmp->TemplateElectricalEquipment().get().begin(); _simTmpIt!=_simTemplateZoneLoadsObj_tmp->TemplateElectricalEquipment().get().end(); ++_simTmpIt)
																{
																	SimRoot* _tmpObj = _callback->getSimClassObj(*_simTmpIt);
																	if(_tmpObj)
																	{
																		// check node index list: avoid recreating the same node
																		if(_nodeIndexList.find(_tmpObj->RefId())==_nodeIndexList.end())
																		{
																			SimHierarchyNode SimTmp_Node;
																			setCurrentObject(SimTmp_Node, *_tmpObj);
																			addHierarchyNode(SimTmp_Node);
																			int _id_SimTmp = SimHierarchyNodeList.size() - 1;
																			
																			// save current object index position: <ref_id, index_pos>
																			_nodeIndexList.insert(std::pair<std::string, int>(_tmpObj->RefId(), _id_SimTmp));
																			// save index pair for parent-child relationships
																			_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simTemplateZoneLoadsObj_tmp->RefId())->second, _id_SimTmp));

																			// nested SimInternalLoad_SchedName
																			if(ClassType(_tmpObj)=="SimInternalLoad_Equipment_Electric")
																			{
																				std::string _internalLoadSchedId = "";
																				_internalLoadSchedId = _callback->getReferenceId(_tmpObj->RefId(), "SimInternalLoad_SchedName");
																				if(_internalLoadSchedId!="")
																				{
																					parseTimeSeries(simGeometryData, _nodeIndexList.find(_tmpObj->RefId())->second, _internalLoadSchedId, _nodeIndexPairList, _nodeIndexList);
																				}
																			}
																		}
																		else
																		{
																			// save index pair for parent-child relationships
																			_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simTemplateZoneLoadsObj_tmp->RefId())->second, _nodeIndexList.find(_tmpObj->RefId())->second));
																		}

																	}
																}
															}

															// TemplatePeopleLoads
															if(_simTemplateZoneLoadsObj_tmp->TemplatePeopleLoads().present())
															{
																for(::xml_schema::idrefs::iterator _simTmpIt=_simTemplateZoneLoadsObj_tmp->TemplatePeopleLoads().get().begin(); _simTmpIt!=_simTemplateZoneLoadsObj_tmp->TemplatePeopleLoads().get().end(); ++_simTmpIt)
																{
																	SimRoot* _tmpObj = _callback->getSimClassObj(*_simTmpIt);
																	if(_tmpObj)
																	{
																		// check node index list: avoid recreating the same node
																		if(_nodeIndexList.find(_tmpObj->RefId())==_nodeIndexList.end())
																		{
																			SimHierarchyNode SimTmp_Node;
																			setCurrentObject(SimTmp_Node, *_tmpObj);
																			addHierarchyNode(SimTmp_Node);
																			int _id_SimTmp = SimHierarchyNodeList.size() - 1;
																			
																			// save current object index position: <ref_id, index_pos>
																			_nodeIndexList.insert(std::pair<std::string, int>(_tmpObj->RefId(), _id_SimTmp));
																			// save index pair for parent-child relationships
																			_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simTemplateZoneLoadsObj_tmp->RefId())->second, _id_SimTmp));

																			// nested SimInternalLoad_NumbPeopleSchedName
																			if(ClassType(_tmpObj)=="SimInternalLoad_People_Default")
																			{
																				std::string _internalLoadSchedId = "";
																				_internalLoadSchedId = _callback->getReferenceId(_tmpObj->RefId(), "SimInternalLoad_NumbPeopleSchedName");
																				if(_internalLoadSchedId!="")
																				{
																					parseTimeSeries(simGeometryData, _nodeIndexList.find(_tmpObj->RefId())->second, _internalLoadSchedId, _nodeIndexPairList, _nodeIndexList);
																				}
																			}
																		}
																		else
																		{
																			// save index pair for parent-child relationships
																			_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simTemplateZoneLoadsObj_tmp->RefId())->second, _nodeIndexList.find(_tmpObj->RefId())->second));
																		}
																	}
																}
															}

															// TemplateLightingLoads
															if(_simTemplateZoneLoadsObj_tmp->TemplateLightingLoads().present())
															{
																for(::xml_schema::idrefs::iterator _simTmpIt=_simTemplateZoneLoadsObj_tmp->TemplateLightingLoads().get().begin(); _simTmpIt!=_simTemplateZoneLoadsObj_tmp->TemplateLightingLoads().get().end(); ++_simTmpIt)
																{
																	SimRoot* _tmpObj = _callback->getSimClassObj(*_simTmpIt);
																	if(_tmpObj)
																	{
																		// check node index list: avoid recreating the same node
																		if(_nodeIndexList.find(_tmpObj->RefId())==_nodeIndexList.end())
																		{
																			SimHierarchyNode SimTmp_Node;
																			setCurrentObject(SimTmp_Node, *_tmpObj);
																			addHierarchyNode(SimTmp_Node);
																			int _id_SimTmp = SimHierarchyNodeList.size() - 1;
																			
																			// save current object index position: <ref_id, index_pos>
																			_nodeIndexList.insert(std::pair<std::string, int>(_tmpObj->RefId(), _id_SimTmp));
																			// save index pair for parent-child relationships
																			_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simTemplateZoneLoadsObj_tmp->RefId())->second, _id_SimTmp));

																			// nested SimInternalLoad_SchedName
																			if(ClassType(_tmpObj)=="SimInternalLoad_Lights_Default")
																			{
																				std::string _internalLoadSchedId = "";
																				_internalLoadSchedId = _callback->getReferenceId(_tmpObj->RefId(), "SimInternalLoad_SchedName");
																				if(_internalLoadSchedId!="")
																				{
																					parseTimeSeries(simGeometryData, _nodeIndexList.find(_tmpObj->RefId())->second, _internalLoadSchedId, _nodeIndexPairList, _nodeIndexList);
																				}
																			}
																		}
																		else
																		{
																			// save index pair for parent-child relationships
																			_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simTemplateZoneLoadsObj_tmp->RefId())->second, _nodeIndexList.find(_tmpObj->RefId())->second));
																		}

																	}
																}
															}
														}

														// parse SimTemplateZoneConditions_ZoneConditions_Default
														if(ClassType(_simInternalLoadsObj)=="SimTemplateZoneConditions_ZoneConditions_Default")
														{
															SimTemplateZoneConditions_ZoneConditions_Default* _simTemplateZoneConditionsObj_tmp = static_cast<SimTemplateZoneConditions_ZoneConditions_Default*>(_simInternalLoadsObj);

															// TemplateZoneTempController
															if(_simTemplateZoneConditionsObj_tmp->TemplateZoneTempController().present())
															{
																SimRoot* _tmpObj = _callback->getSimClassObj(_simTemplateZoneConditionsObj_tmp->TemplateZoneTempController().get());
																if(_tmpObj)
																{
																	// check node index list: avoid recreating the same node
																	if(_nodeIndexList.find(_tmpObj->RefId())==_nodeIndexList.end())
																	{
																		SimHierarchyNode SimTmp_Node;
																		setCurrentObject(SimTmp_Node, *_tmpObj);
																		addHierarchyNode(SimTmp_Node);
																		int _id_SimTmp = SimHierarchyNodeList.size() - 1;
																			
																		// save current object index position: <ref_id, index_pos>
																		_nodeIndexList.insert(std::pair<std::string, int>(_tmpObj->RefId(), _id_SimTmp));
																		// save index pair for parent-child relationships
																		_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simTemplateZoneConditionsObj_tmp->RefId())->second, _id_SimTmp));

																		if(ClassType(_tmpObj)=="SimController_ZoneControlTemperature_Thermostat")
																		{
																			// nested SimCntrl_ControlTypeScheduleName
																			std::string _internalLoadSchedId = "";
																			_internalLoadSchedId = _callback->getReferenceId(_tmpObj->RefId(), "SimCntrl_ControlTypeScheduleName");
																			if(_internalLoadSchedId!="")
																			{
																				parseTimeSeries(simGeometryData, _nodeIndexList.find(_tmpObj->RefId())->second, _internalLoadSchedId, _nodeIndexPairList, _nodeIndexList);
																			}

																			// SimCntrl_Control_1_4_Name
																			SimController_ZoneControlTemperature_Thermostat* _simZoneControlTemperatureObj_tmp = static_cast<SimController_ZoneControlTemperature_Thermostat*>(_tmpObj);
																			for(::xml_schema::idrefs::iterator _simCntrlIt=_simZoneControlTemperatureObj_tmp->SimCntrl_Control_1_4_Name().get().begin(); _simCntrlIt!=_simZoneControlTemperatureObj_tmp->SimCntrl_Control_1_4_Name().get().end(); ++_simCntrlIt)
																			{
																				SimRoot* _simControl_1_4Obj = _callback->getSimClassObj(*_simCntrlIt);
																				if(_simControl_1_4Obj)
																				{
																					// check node index list: avoid recreating the same node
																					if(_nodeIndexList.find(_simControl_1_4Obj->RefId())==_nodeIndexList.end())
																					{
																						SimHierarchyNode SimControl_1_4_Node;
																						setCurrentObject(SimControl_1_4_Node, *_simControl_1_4Obj);
																						addHierarchyNode(SimControl_1_4_Node);
																						int _id_SimControl_1_4 = SimHierarchyNodeList.size() - 1;
																			
																						// save current object index position: <ref_id, index_pos>
																						_nodeIndexList.insert(std::pair<std::string, int>(_simControl_1_4Obj->RefId(), _id_SimControl_1_4));
																						// save index pair for parent-child relationships
																						_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_tmpObj->RefId())->second, _id_SimControl_1_4));

																						// parse SimControlScheme_SetpointScheme_SingleHeating
																						if(ClassType(_simControl_1_4Obj)=="SimControlScheme_SetpointScheme_SingleHeating")
																						{
																							std::string _simCntrlSchmId = "";
																							_simCntrlSchmId = _callback->getReferenceId(_simControl_1_4Obj->RefId(), "SimCntrlSchm_SetpointTempSchedName");
																							if(_simCntrlSchmId!="")
																							{
																								parseTimeSeries(simGeometryData, _nodeIndexList.find(_simControl_1_4Obj->RefId())->second, _simCntrlSchmId, _nodeIndexPairList, _nodeIndexList);
																							}

																						}

																					}
																					else
																					{
																						// save index pair for parent-child relationships
																						_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_tmpObj->RefId())->second, _nodeIndexList.find(*_simCntrlIt)->second));
																					}
																				}
																			}
																		}
																	}
																	else
																	{
																		// save index pair for parent-child relationships
																		_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simTemplateZoneConditionsObj_tmp->RefId())->second, _nodeIndexList.find(_tmpObj->RefId())->second));
																	}
																}
															}
														}
													}
													else
													{
														// save index pair for parent-child relationships
														_nodeIndexPairList.push_back(std::pair<int, int>(_nodeIndexList.find(_simThermalZoneIt->RefId())->second, _nodeIndexList.find(_simInternalLoadsObj->RefId())->second));
													}
												}
											}
										}
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

													/********error*********/
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
								parseSimSystemTmp(simSysData, simGeometryData, _id_SimBuilding, _nodeIndexPairList, _nodeIndexList);
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

// add SimModel Hiearachial Node
void SimHierarchy::addHierarchyNode(SimHierarchyNode& _simNode)
{
	SimHierarchyNodeList.push_back(_simNode);
}