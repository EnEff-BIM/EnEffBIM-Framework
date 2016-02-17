/* File : SimHierarchy.i */
%module(directors="1") SimModel_Hierachy
%include "std_string.i"
%include "stl.i"

%{
#define SWIG_FILE_WITH_INIT
#include "SimHierarchy.h"
%}

%import  "..\SimModel\SimModel.i"
/* Let's just grab the original header file here */
%include ".\framework\SimHierarchy.h"

%pythoncode %{
def getSimModelObject(self):
        return getattr(self, "dataType_"+self.ClassType())()

SimHierarchyNode.getSimModelObject = getSimModelObject
%}

%template(SimHierarchyNodeList) std::vector<SimHierarchyNode>;
%template(SimHierarchyNodeRefList) std::vector<SimHierarchyNode*>;
// SimModel hierarchy classes
%template(dataType_SimProject_Project_DesignAlternative) SimHierarchyNodeBase::dataType<SimProject_Project_DesignAlternative>;
%template(dataType_SimSite_BuildingSite_Default) SimHierarchyNodeBase::dataType<SimSite_BuildingSite_Default>;
%template(dataType_SimBuilding_Building_Default) SimHierarchyNodeBase::dataType<SimBuilding_Building_Default>;
%template(dataType_SimGroup_SpatialZoneGroup_ZoneGroup) SimHierarchyNodeBase::dataType<SimGroup_SpatialZoneGroup_ZoneGroup>;
%template(dataType_SimGroup_SpatialZoneGroup_ZoneHvacGroup) SimHierarchyNodeBase::dataType<SimGroup_SpatialZoneGroup_ZoneHvacGroup>;
%template(dataType_SimSpatialZone_ThermalZone_Default) SimHierarchyNodeBase::dataType<SimSpatialZone_ThermalZone_Default>;
%template(dataType_SimSpace_Occupied_Default) SimHierarchyNodeBase::dataType<SimSpace_Occupied_Default>;
%template(dataType_SimSpaceBoundary_SecondLevel_SubTypeA) SimHierarchyNodeBase::dataType<SimSpaceBoundary_SecondLevel_SubTypeA>;
%template(dataType_SimSlab_Default_Default) SimHierarchyNodeBase::dataType<SimSlab_Default_Default>;
%template(dataType_SimWall_Wall_Default) SimHierarchyNodeBase::dataType<SimWall_Wall_Default>;
%template(dataType_SimMaterialLayerSet_Default_Default) SimHierarchyNodeBase::dataType<SimMaterialLayerSet_Default_Default>;
%template(dataType_SimSystem_HvacHotWater_FullSystem) SimHierarchyNodeBase::dataType<SimSystem_HvacHotWater_FullSystem>;
%template(dataType_SimSystem_HvacHotWater_Control) SimHierarchyNodeBase::dataType<SimSystem_HvacHotWater_Control>;
%template(dataType_SimController_SupplyWater_Temperature) SimHierarchyNodeBase::dataType<SimController_SupplyWater_Temperature>;
%template(dataType_SimSensor_TemperatureSensor_DryBulb) SimHierarchyNodeBase::dataType<SimSensor_TemperatureSensor_DryBulb>;
%template(dataType_SimSystem_HvacHotWater_Demand) SimHierarchyNodeBase::dataType<SimSystem_HvacHotWater_Demand>;
%template(dataType_SimFlowEnergyTransfer_ConvectiveHeater_Water) SimHierarchyNodeBase::dataType<SimFlowEnergyTransfer_ConvectiveHeater_Water>;
%template(dataType_SimFlowFitting_Mixer_DemandProxyMixerWater) SimHierarchyNodeBase::dataType<SimFlowFitting_Mixer_DemandProxyMixerWater>;
%template(dataType_SimFlowFitting_Splitter_DemandProxySplitterWater) SimHierarchyNodeBase::dataType<SimFlowFitting_Splitter_DemandProxySplitterWater>;
%template(dataType_SimSystem_HvacHotWater_Supply) SimHierarchyNodeBase::dataType<SimSystem_HvacHotWater_Supply>;
%template(dataType_SimFlowMover_Pump_VariableSpeedReturn) SimHierarchyNodeBase::dataType<SimFlowMover_Pump_VariableSpeedReturn>;
%template(dataType_SimFlowPlant_Boiler_BoilerHotWater) SimHierarchyNodeBase::dataType<SimFlowPlant_Boiler_BoilerHotWater>;
%template(dataType_SimBuildingStory_BuildingStory_Default) SimHierarchyNodeBase::dataType<SimBuildingStory_BuildingStory_Default>;
