/* File : SimHierarchy.i */
%module(directors="1") SimModel_Hierachy
%include "std_string.i"
%include "stl.i"

%{
#define SWIG_FILE_WITH_INIT
#include "SimHierarchy.h"
%}

%import  "..\SimModel\SimModel.i"

%feature("nodirector") SimHierarchy;

%ignore SimHierarchyNode::addMappedComponent(MappedComponent& _mapObj);
%ignore SimHierarchy::parser(::std::auto_ptr< ::schema::simxml::Model::SimModel >& SimModel_Data);
%ignore SimHierarchy::parser(::std::auto_ptr< ::schema::simxml::Model::SimModel >& simGeometryData, ::std::auto_ptr< ::schema::simxml::Model::SimModel >& simSysData, std::string _geoName, std::string _sysName);

%pythoncode %{
import SimModel_PyCallBack
__cb_init__ = SimModel_PyCallBack.CallBack()
%}

/* Let's just grab the original header file here */
%include ".\framework\SimHierarchy.h"

%pythoncode %{
def getSimModelObject(self):
        return getattr(self, "dataType_"+self.ClassType())()

SimHierarchyNode.getSimModelObject = getSimModelObject
%}

%pythoncode %{
def __re_init__(self):
        self.__orig_init__()
        self.setCallBack(__cb_init__)

SimHierarchy.__orig_init__ = SimHierarchy.__init__
SimHierarchy.__init__ = __re_init__
del __re_init__
%}

%template(SimHierarchyNodeList) std::vector<SimHierarchyNode>;
%template(SimHierarchyNodeRefList) std::vector<SimHierarchyNode*>;

// SimModel hierarchy classes
%template(dataType_SimProject_Project_DesignAlternative) SimHierarchyNodeBase::dataType<SimProject_Project_DesignAlternative>;

%template(dataType_SimModelRepresentationContext_GeometricRepresentationContext_Default) SimHierarchyNodeBase::dataType<SimModelRepresentationContext_GeometricRepresentationContext_Default>;

%template(dataType_SimPlacement_Axis2Placement3D_Default) SimHierarchyNodeBase::dataType<SimPlacement_Axis2Placement3D_Default>;

%template(dataType_SimGeomVector_Vector_Direction) SimHierarchyNodeBase::dataType<SimGeomVector_Vector_Direction>;

%template(dataType_SimSite_BuildingSite_Default) SimHierarchyNodeBase::dataType<SimSite_BuildingSite_Default>;
%template(dataType_SimBuilding_Building_Default) SimHierarchyNodeBase::dataType<SimBuilding_Building_Default>;
%template(dataType_SimGroup_SpatialZoneGroup_ZoneGroup) SimHierarchyNodeBase::dataType<SimGroup_SpatialZoneGroup_ZoneGroup>;
%template(dataType_SimGroup_SpatialZoneGroup_ZoneHvacGroup) SimHierarchyNodeBase::dataType<SimGroup_SpatialZoneGroup_ZoneHvacGroup>;
%template(dataType_SimSpatialZone_ThermalZone_Default) SimHierarchyNodeBase::dataType<SimSpatialZone_ThermalZone_Default>;
%template(dataType_SimSpace_Occupied_Default) SimHierarchyNodeBase::dataType<SimSpace_Occupied_Default>;
%template(dataType_SimList_EquipmentList_ZoneHvac) SimHierarchyNodeBase::dataType<SimList_EquipmentList_ZoneHvac>;
%template(dataType_SimSpaceBoundary_SecondLevel_SubTypeA) SimHierarchyNodeBase::dataType<SimSpaceBoundary_SecondLevel_SubTypeA>;

%template(dataType_SimSlab_RoofSlab_RoofUnderAir) SimHierarchyNodeBase::dataType<SimSlab_RoofSlab_RoofUnderAir>;
%template(dataType_SimSlab_Floor_FloorOverEarth) SimHierarchyNodeBase::dataType<SimSlab_Floor_FloorOverEarth>;
%template(dataType_SimWall_Wall_ExteriorAboveGrade) SimHierarchyNodeBase::dataType<SimWall_Wall_ExteriorAboveGrade>;

%template(dataType_SimWall_Wall_Interior) SimHierarchyNodeBase::dataType<SimWall_Wall_Interior>;

%template(dataType_SimWindow_Window_Exterior) SimHierarchyNodeBase::dataType<SimWindow_Window_Exterior>;

%template(dataType_SimMaterialLayerSet_OpaqueLayerSet_Roof) SimHierarchyNodeBase::dataType<SimMaterialLayerSet_OpaqueLayerSet_Roof>;
%template(dataType_SimMaterialLayerSet_OpaqueLayerSet_Floor) SimHierarchyNodeBase::dataType<SimMaterialLayerSet_OpaqueLayerSet_Floor>;
%template(dataType_SimMaterialLayerSet_OpaqueLayerSet_Wall) SimHierarchyNodeBase::dataType<SimMaterialLayerSet_OpaqueLayerSet_Wall>;
%template(dataType_SimMaterialLayerSet_GlazingLayerSet_Window) SimHierarchyNodeBase::dataType<SimMaterialLayerSet_GlazingLayerSet_Window>;
%template(dataType_SimMaterialLayer2_10) SimHierarchyNodeBase::dataType<SimMaterialLayer2_10>;

%template(dataType_SimFeatureElementSubtraction_Void_Opening) SimHierarchyNodeBase::dataType<SimFeatureElementSubtraction_Void_Opening>;

%template(dataType_SimMaterialLayer_OpaqueMaterialLayer_Default) SimHierarchyNodeBase::dataType<SimMaterialLayer_OpaqueMaterialLayer_Default>;
%template(dataType_SimMaterialLayer_GlazingMaterialLayer_Default) SimHierarchyNodeBase::dataType<SimMaterialLayer_GlazingMaterialLayer_Default>;

%template(dataType_SimMaterial_OpaqueMaterial_Default) SimHierarchyNodeBase::dataType<SimMaterial_OpaqueMaterial_Default>;
%template(dataType_SimMaterial_OpaqueMaterial_AirGap) SimHierarchyNodeBase::dataType<SimMaterial_OpaqueMaterial_AirGap>;
%template(dataType_SimMaterial_GlazingMaterial_Gas) SimHierarchyNodeBase::dataType<SimMaterial_GlazingMaterial_Gas>;
%template(dataType_SimMaterial_GlazingMaterial_SimpleGlazingSystem) SimHierarchyNodeBase::dataType<SimMaterial_GlazingMaterial_SimpleGlazingSystem>;
%template(dataType_SimMaterial_GlazingMaterial_Glazing) SimHierarchyNodeBase::dataType<SimMaterial_GlazingMaterial_Glazing>;

%template(dataType_SimMaterial_Default_Default) SimHierarchyNodeBase::dataType<SimMaterial_Default_Default>;

%template(dataType_SimSlab_Default_Default) SimHierarchyNodeBase::dataType<SimSlab_Default_Default>;

%template(dataType_SimSlab_Floor_InterzoneFloor) SimHierarchyNodeBase::dataType<SimSlab_Floor_InterzoneFloor>;

%template(dataType_SimWall_Wall_Default) SimHierarchyNodeBase::dataType<SimWall_Wall_Default>;
%template(dataType_SimMaterialLayerSet_Default_Default) SimHierarchyNodeBase::dataType<SimMaterialLayerSet_Default_Default>;
%template(dataType_SimSystem_HvacHotWater_FullSystem) SimHierarchyNodeBase::dataType<SimSystem_HvacHotWater_FullSystem>;
%template(dataType_SimSystem_HvacHotWater_Control) SimHierarchyNodeBase::dataType<SimSystem_HvacHotWater_Control>;
%template(dataType_SimController_SupplyWater_Temperature) SimHierarchyNodeBase::dataType<SimController_SupplyWater_Temperature>;
%template(dataType_SimSensor_TemperatureSensor_DryBulb) SimHierarchyNodeBase::dataType<SimSensor_TemperatureSensor_DryBulb>;
%template(dataType_SimSystem_HvacHotWater_Demand) SimHierarchyNodeBase::dataType<SimSystem_HvacHotWater_Demand>;
%template(dataType_SimFlowEnergyTransfer_ConvectiveHeater_Water) SimHierarchyNodeBase::dataType<SimFlowEnergyTransfer_ConvectiveHeater_Water>;
%template(dataType_SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Water) SimHierarchyNodeBase::dataType<SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Water>;

%template(dataType_SimFlowEnergyTransferStorage_HotWaterTank_Mixed) SimHierarchyNodeBase::dataType<SimFlowEnergyTransferStorage_HotWaterTank_Mixed>;
%template(dataType_SimFlowEnergyTransferStorage_HotWaterTank_Expansion) SimHierarchyNodeBase::dataType<SimFlowEnergyTransferStorage_HotWaterTank_Expansion>;

%template(dataType_SimFlowFitting_Mixer_DemandProxyMixerWater) SimHierarchyNodeBase::dataType<SimFlowFitting_Mixer_DemandProxyMixerWater>;
%template(dataType_SimFlowFitting_Default_Default) SimHierarchyNodeBase::dataType<SimFlowFitting_Default_Default>;
%template(dataType_SimFlowFitting_Splitter_DemandProxySplitterWater) SimHierarchyNodeBase::dataType<SimFlowFitting_Splitter_DemandProxySplitterWater>;
%template(dataType_SimSystem_HvacHotWater_Supply) SimHierarchyNodeBase::dataType<SimSystem_HvacHotWater_Supply>;

%template(dataType_SimFlowController_Valve_Default) SimHierarchyNodeBase::dataType<SimFlowController_Valve_Default>;
%template(dataType_SimFlowController_Valve_TemperingValve) SimHierarchyNodeBase::dataType<SimFlowController_Valve_TemperingValve>;

%template(dataType_SimFlowMover_Pump_VariableSpeedReturn) SimHierarchyNodeBase::dataType<SimFlowMover_Pump_VariableSpeedReturn>;
%template(dataType_SimFlowPlant_Boiler_BoilerHotWater) SimHierarchyNodeBase::dataType<SimFlowPlant_Boiler_BoilerHotWater>;
%template(dataType_SimFlowSegment_Pipe_Indoor) SimHierarchyNodeBase::dataType<SimFlowSegment_Pipe_Indoor>;
%template(dataType_SimBuildingStory_BuildingStory_Default) SimHierarchyNodeBase::dataType<SimBuildingStory_BuildingStory_Default>;

%template(dataType_SimConnection_HotWaterFlow_Default) SimHierarchyNodeBase::dataType<SimConnection_HotWaterFlow_Default>;
%template(dataType_SimNode_HotWaterFlowPort_Water_Out) SimHierarchyNodeBase::dataType<SimNode_HotWaterFlowPort_Water_Out>;
%template(dataType_SimNode_HotWaterFlowPort_Water_In) SimHierarchyNodeBase::dataType<SimNode_HotWaterFlowPort_Water_In>;
%template(dataType_SimDistributionPort_HotWaterFlowPort_Water_InOrOut) SimHierarchyNodeBase::dataType<SimDistributionPort_HotWaterFlowPort_Water_InOrOut>;
%template(dataType_SimNode_DigitalControl_HWLoop_DigitalSignal_In) SimHierarchyNodeBase::dataType<SimNode_DigitalControl_HWLoop_DigitalSignal_In>;
%template(dataType_SimDistributionPort_HotWaterFlowPort_Water_Out) SimHierarchyNodeBase::dataType<SimDistributionPort_HotWaterFlowPort_Water_Out>;
%template(dataType_SimDistributionPort_HotWaterFlowPort_Water_In) SimHierarchyNodeBase::dataType<SimDistributionPort_HotWaterFlowPort_Water_In>;

%template(dataType_SimTimeSeriesSchedule_Year_Default) SimHierarchyNodeBase::dataType<SimTimeSeriesSchedule_Year_Default>;
%template(dataType_SimTimeSeriesSchedule_Week_Daily) SimHierarchyNodeBase::dataType<SimTimeSeriesSchedule_Week_Daily>;
%template(dataType_SimTimeSeriesSchedule_Day_Interval) SimHierarchyNodeBase::dataType<SimTimeSeriesSchedule_Day_Interval>;

%template(dataType_SimTemplateZoneLoads_ZoneLoads_Default) SimHierarchyNodeBase::dataType<SimTemplateZoneLoads_ZoneLoads_Default>;
%template(dataType_SimTemplateZoneConditions_ZoneConditions_Default) SimHierarchyNodeBase::dataType<SimTemplateZoneConditions_ZoneConditions_Default>;
%template(dataType_SimInternalLoad_Equipment_Electric) SimHierarchyNodeBase::dataType<SimInternalLoad_Equipment_Electric>;
%template(dataType_SimInternalLoad_People_Default) SimHierarchyNodeBase::dataType<SimInternalLoad_People_Default>;
%template(dataType_SimInternalLoad_Lights_Default) SimHierarchyNodeBase::dataType<SimInternalLoad_Lights_Default>;
%template(dataType_SimController_ZoneControlTemperature_Thermostat) SimHierarchyNodeBase::dataType<SimController_ZoneControlTemperature_Thermostat>;
%template(dataType_SimControlScheme_SetpointScheme_SingleHeating) SimHierarchyNodeBase::dataType<SimControlScheme_SetpointScheme_SingleHeating>;