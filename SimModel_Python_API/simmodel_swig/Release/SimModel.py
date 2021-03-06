# This file was automatically generated by SWIG (http://www.swig.org).
# Version 3.0.7
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_SimModel', [dirname(__file__)])
        except ImportError:
            import _SimModel
            return _SimModel
        if fp is not None:
            try:
                _mod = imp.load_module('_SimModel', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _SimModel = swig_import_helper()
    del swig_import_helper
else:
    import _SimModel
del version_info
try:
    _swig_property = property
except NameError:
    pass  # Python < 2.2 doesn't have 'property'.


def _swig_setattr_nondynamic(self, class_type, name, value, static=1):
    if (name == "thisown"):
        return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name, None)
    if method:
        return method(self, value)
    if (not static):
        if _newclass:
            object.__setattr__(self, name, value)
        else:
            self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)


def _swig_setattr(self, class_type, name, value):
    return _swig_setattr_nondynamic(self, class_type, name, value, 0)


def _swig_getattr_nondynamic(self, class_type, name, static=1):
    if (name == "thisown"):
        return self.this.own()
    method = class_type.__swig_getmethods__.get(name, None)
    if method:
        return method(self)
    if (not static):
        return object.__getattr__(self, name)
    else:
        raise AttributeError(name)

def _swig_getattr(self, class_type, name):
    return _swig_getattr_nondynamic(self, class_type, name, 0)


def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except AttributeError:
    class _object:
        pass
    _newclass = 0


try:
    import weakref
    weakref_proxy = weakref.proxy
except:
    weakref_proxy = lambda x: x


class SwigPyIterator(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SwigPyIterator, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SwigPyIterator, name)

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _SimModel.delete_SwigPyIterator
    __del__ = lambda self: None

    def value(self):
        return _SimModel.SwigPyIterator_value(self)

    def incr(self, n=1):
        return _SimModel.SwigPyIterator_incr(self, n)

    def decr(self, n=1):
        return _SimModel.SwigPyIterator_decr(self, n)

    def distance(self, x):
        return _SimModel.SwigPyIterator_distance(self, x)

    def equal(self, x):
        return _SimModel.SwigPyIterator_equal(self, x)

    def copy(self):
        return _SimModel.SwigPyIterator_copy(self)

    def next(self):
        return _SimModel.SwigPyIterator_next(self)

    def __next__(self):
        return _SimModel.SwigPyIterator___next__(self)

    def previous(self):
        return _SimModel.SwigPyIterator_previous(self)

    def advance(self, n):
        return _SimModel.SwigPyIterator_advance(self, n)

    def __eq__(self, x):
        return _SimModel.SwigPyIterator___eq__(self, x)

    def __ne__(self, x):
        return _SimModel.SwigPyIterator___ne__(self, x)

    def __iadd__(self, n):
        return _SimModel.SwigPyIterator___iadd__(self, n)

    def __isub__(self, n):
        return _SimModel.SwigPyIterator___isub__(self, n)

    def __add__(self, n):
        return _SimModel.SwigPyIterator___add__(self, n)

    def __sub__(self, *args):
        return _SimModel.SwigPyIterator___sub__(self, *args)
    def __iter__(self):
        return self
SwigPyIterator_swigregister = _SimModel.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

import base
class SimModel(base._type):
    __swig_setmethods__ = {}
    for _s in [base._type]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimModel, name, value)
    __swig_getmethods__ = {}
    for _s in [base._type]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimModel, name)
    __repr__ = _swig_repr

    def SimAddress_Postal_Default(self, *args):
        return _SimModel.SimModel_SimAddress_Postal_Default(self, *args)

    def SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary(self, *args):
        return _SimModel.SimModel_SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary(self, *args)

    def SimAppObjNameDefault_BldgComponentGroup_HvacComponent(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_BldgComponentGroup_HvacComponent(self, *args)

    def SimAppObjNameDefault_BldgComponentGroup_HvacComponentGroup(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_BldgComponentGroup_HvacComponentGroup(self, *args)

    def SimAppObjNameDefault_DistributionSystem_HvacAirLoop(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_DistributionSystem_HvacAirLoop(self, *args)

    def SimAppObjNameDefault_DistributionSystem_HvacChilledWaterLoop(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_DistributionSystem_HvacChilledWaterLoop(self, *args)

    def SimAppObjNameDefault_DistributionSystem_HvacCondenserLoop(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_DistributionSystem_HvacCondenserLoop(self, *args)

    def SimAppObjNameDefault_DistributionSystem_HvacHotWaterLoop(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_DistributionSystem_HvacHotWaterLoop(self, *args)

    def SimAppObjNameDefault_DistributionSystem_HvacSteamLoop(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_DistributionSystem_HvacSteamLoop(self, *args)

    def SimAppObjNameDefault_DistributionSystem_MixedWaterLoop(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_DistributionSystem_MixedWaterLoop(self, *args)

    def SimAppObjNameDefault_DistributionSystem_RefrigerationLoop(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_DistributionSystem_RefrigerationLoop(self, *args)

    def SimAppObjNameDefault_DistributionSystem_SitePowerDemand(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_DistributionSystem_SitePowerDemand(self, *args)

    def SimAppObjNameDefault_DistributionSystem_SitePowerGeneration(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_DistributionSystem_SitePowerGeneration(self, *args)

    def SimAppObjNameDefault_DistributionSystem_VarRefrigerantFlow(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_DistributionSystem_VarRefrigerantFlow(self, *args)

    def SimAppObjNameDefault_SiteContext_AdjacentSite(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_SiteContext_AdjacentSite(self, *args)

    def SimAppObjNameDefault_SiteContext_SolarObstruction(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_SiteContext_SolarObstruction(self, *args)

    def SimAppObjNameDefault_Space_Space(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_Space_Space(self, *args)

    def SimAppObjNameDefault_SpatialContainer_Building(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_SpatialContainer_Building(self, *args)

    def SimAppObjNameDefault_SpatialContainer_BuildingStory(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_SpatialContainer_BuildingStory(self, *args)

    def SimAppObjNameDefault_SpatialContainer_Project(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_SpatialContainer_Project(self, *args)

    def SimAppObjNameDefault_SpatialContainer_Site(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_SpatialContainer_Site(self, *args)

    def SimAppObjNameDefault_SpatialZone_CeilingPlenumZone(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_SpatialZone_CeilingPlenumZone(self, *args)

    def SimAppObjNameDefault_SpatialZone_FloorPlenumZone(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_SpatialZone_FloorPlenumZone(self, *args)

    def SimAppObjNameDefault_SpatialZone_ThermalZone(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_SpatialZone_ThermalZone(self, *args)

    def SimAppObjNameDefault_ZoneGroup_CeilingPlenumZoneGroup(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_ZoneGroup_CeilingPlenumZoneGroup(self, *args)

    def SimAppObjNameDefault_ZoneGroup_DaylightingZoneGroup(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_ZoneGroup_DaylightingZoneGroup(self, *args)

    def SimAppObjNameDefault_ZoneGroup_FloorPlenumZoneGroup(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_ZoneGroup_FloorPlenumZoneGroup(self, *args)

    def SimAppObjNameDefault_ZoneGroup_HvacEquipmentGroup(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_ZoneGroup_HvacEquipmentGroup(self, *args)

    def SimAppObjNameDefault_ZoneGroup_NatVentZoneGroup(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_ZoneGroup_NatVentZoneGroup(self, *args)

    def SimAppObjNameDefault_ZoneGroup_ThermalZoneGroup(self, *args):
        return _SimModel.SimModel_SimAppObjNameDefault_ZoneGroup_ThermalZoneGroup(self, *args)

    def SimAppPreferences_AppPreferences_AutoSave(self, *args):
        return _SimModel.SimModel_SimAppPreferences_AppPreferences_AutoSave(self, *args)

    def SimAppPreferences_AppPreferences_AutoSaveInterval(self, *args):
        return _SimModel.SimModel_SimAppPreferences_AppPreferences_AutoSaveInterval(self, *args)

    def SimAppPreferences_AppPreferences_EPlusInstalPath(self, *args):
        return _SimModel.SimModel_SimAppPreferences_AppPreferences_EPlusInstalPath(self, *args)

    def SimAppPreferences_AppPreferences_EPlusInstalVersion(self, *args):
        return _SimModel.SimModel_SimAppPreferences_AppPreferences_EPlusInstalVersion(self, *args)

    def SimAppPreferences_AppPreferences_MinMonthlyChargeType(self, *args):
        return _SimModel.SimModel_SimAppPreferences_AppPreferences_MinMonthlyChargeType(self, *args)

    def SimAppUnitDefault_AppUnitDefault_DatabaseDefault(self, *args):
        return _SimModel.SimModel_SimAppUnitDefault_AppUnitDefault_DatabaseDefault(self, *args)

    def SimArbitraryProfileDef_ArbitraryProfile_Closed(self, *args):
        return _SimModel.SimModel_SimArbitraryProfileDef_ArbitraryProfile_Closed(self, *args)

    def SimBldgSiteParams_BuildingSite_Default(self, *args):
        return _SimModel.SimModel_SimBldgSiteParams_BuildingSite_Default(self, *args)

    def SimBldgStoryParams_BuildingStory_Default(self, *args):
        return _SimModel.SimModel_SimBldgStoryParams_BuildingStory_Default(self, *args)

    def SimBuilding_Building_Default(self, *args):
        return _SimModel.SimModel_SimBuilding_Building_Default(self, *args)

    def SimBuildingStory_BuildingStory_Default(self, *args):
        return _SimModel.SimModel_SimBuildingStory_BuildingStory_Default(self, *args)

    def SimCartesianTransformOperator_3D_Uniform(self, *args):
        return _SimModel.SimModel_SimCartesianTransformOperator_3D_Uniform(self, *args)

    def SimClassification_ClassificationReference_SpaceCategoryBoma(self, *args):
        return _SimModel.SimModel_SimClassification_ClassificationReference_SpaceCategoryBoma(self, *args)

    def SimClassification_ClassificationReference_SpaceCategoryOwner(self, *args):
        return _SimModel.SimModel_SimClassification_ClassificationReference_SpaceCategoryOwner(self, *args)

    def SimClassification_ClassificationReference_SpaceTypeOwner(self, *args):
        return _SimModel.SimModel_SimClassification_ClassificationReference_SpaceTypeOwner(self, *args)

    def SimClassification_ClassificationSystem_Default(self, *args):
        return _SimModel.SimModel_SimClassification_ClassificationSystem_Default(self, *args)

    def SimClassification_ClassificationSystem_OmniClass(self, *args):
        return _SimModel.SimModel_SimClassification_ClassificationSystem_OmniClass(self, *args)

    def SimConnectedFaceSet_ConnectedFaceSet_ClosedShell(self, *args):
        return _SimModel.SimModel_SimConnectedFaceSet_ConnectedFaceSet_ClosedShell(self, *args)

    def SimConnectedFaceSet_ConnectedFaceSet_Default(self, *args):
        return _SimModel.SimModel_SimConnectedFaceSet_ConnectedFaceSet_Default(self, *args)

    def SimConnection_HotWaterFlow_Default(self, *args):
        return _SimModel.SimModel_SimConnection_HotWaterFlow_Default(self, *args)

    def SimConnection_ZoneAirFlow_Default(self, *args):
        return _SimModel.SimModel_SimConnection_ZoneAirFlow_Default(self, *args)

    def SimController_SupplyWater_Temperature(self, *args):
        return _SimModel.SimModel_SimController_SupplyWater_Temperature(self, *args)

    def SimController_ZoneControlTemperature_Thermostat(self, *args):
        return _SimModel.SimModel_SimController_ZoneControlTemperature_Thermostat(self, *args)

    def SimControlScheme_AvailabilityManagerScheme_Scheduled(self, *args):
        return _SimModel.SimModel_SimControlScheme_AvailabilityManagerScheme_Scheduled(self, *args)

    def SimControlScheme_ControlAndSequencingScheme_HeatingLoad(self, *args):
        return _SimModel.SimModel_SimControlScheme_ControlAndSequencingScheme_HeatingLoad(self, *args)

    def SimControlScheme_SetpointManagerScheme_ScheduledSetpoint(self, *args):
        return _SimModel.SimModel_SimControlScheme_SetpointManagerScheme_ScheduledSetpoint(self, *args)

    def SimControlScheme_SetpointScheme_SingleHeating(self, *args):
        return _SimModel.SimModel_SimControlScheme_SetpointScheme_SingleHeating(self, *args)

    def SimDerivedUnitType_DerivedUnit_Default(self, *args):
        return _SimModel.SimModel_SimDerivedUnitType_DerivedUnit_Default(self, *args)

    def SimDistributionPort_AirFlowPort_Air_In(self, *args):
        return _SimModel.SimModel_SimDistributionPort_AirFlowPort_Air_In(self, *args)

    def SimDistributionPort_AirFlowPort_Air_Out(self, *args):
        return _SimModel.SimModel_SimDistributionPort_AirFlowPort_Air_Out(self, *args)

    def SimDistributionPort_HotWaterFlowPort_Water_In(self, *args):
        return _SimModel.SimModel_SimDistributionPort_HotWaterFlowPort_Water_In(self, *args)

    def SimDistributionPort_HotWaterFlowPort_Water_Out(self, *args):
        return _SimModel.SimModel_SimDistributionPort_HotWaterFlowPort_Water_Out(self, *args)

    def SimFace_Face_Default(self, *args):
        return _SimModel.SimModel_SimFace_Face_Default(self, *args)

    def SimFaceBound_FaceBound_Default(self, *args):
        return _SimModel.SimModel_SimFaceBound_FaceBound_Default(self, *args)

    def SimFaceBound_FaceBound_FaceOuterBound(self, *args):
        return _SimModel.SimModel_SimFaceBound_FaceBound_FaceOuterBound(self, *args)

    def SimFeatureElementSubtraction_Void_Opening(self, *args):
        return _SimModel.SimModel_SimFeatureElementSubtraction_Void_Opening(self, *args)

    def SimFlowController_Valve_Default(self, *args):
        return _SimModel.SimModel_SimFlowController_Valve_Default(self, *args)

    def SimFlowController_Valve_TemperingValve(self, *args):
        return _SimModel.SimModel_SimFlowController_Valve_TemperingValve(self, *args)

    def SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Water(self, *args):
        return _SimModel.SimModel_SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Water(self, *args)

    def SimFlowEnergyTransfer_ConvectiveHeater_Water(self, *args):
        return _SimModel.SimModel_SimFlowEnergyTransfer_ConvectiveHeater_Water(self, *args)

    def SimFlowEnergyTransferStorage_HotWaterTank_Mixed(self, *args):
        return _SimModel.SimModel_SimFlowEnergyTransferStorage_HotWaterTank_Mixed(self, *args)

    def SimFlowEnergyTransferStorage_HotWaterTank_Expansion(self, *args):
        return _SimModel.SimModel_SimFlowEnergyTransferStorage_HotWaterTank_Expansion(self, *args)

    def SimFlowEnergyTransferStorage_HotWaterTank_MixedDual(self, *args):
        return _SimModel.SimModel_SimFlowEnergyTransferStorage_HotWaterTank_MixedDual(self, *args)

    def SimFlowFitting_Default_Default(self, *args):
        return _SimModel.SimModel_SimFlowFitting_Default_Default(self, *args)

    def SimFlowFitting_Mixer_DemandProxyMixerWater(self, *args):
        return _SimModel.SimModel_SimFlowFitting_Mixer_DemandProxyMixerWater(self, *args)

    def SimFlowFitting_Splitter_DemandProxySplitterWater(self, *args):
        return _SimModel.SimModel_SimFlowFitting_Splitter_DemandProxySplitterWater(self, *args)

    def SimFlowMover_Pump_VariableSpeedReturn(self, *args):
        return _SimModel.SimModel_SimFlowMover_Pump_VariableSpeedReturn(self, *args)

    def SimFlowPlant_Boiler_BoilerHotWater(self, *args):
        return _SimModel.SimModel_SimFlowPlant_Boiler_BoilerHotWater(self, *args)

    def SimFlowSegment_Pipe_Indoor(self, *args):
        return _SimModel.SimModel_SimFlowSegment_Pipe_Indoor(self, *args)

    def SimGeomBooleanResult_BooleanClippingResult_Default(self, *args):
        return _SimModel.SimModel_SimGeomBooleanResult_BooleanClippingResult_Default(self, *args)

    def SimGeomCurve_Polyline_Default(self, *args):
        return _SimModel.SimModel_SimGeomCurve_Polyline_Default(self, *args)

    def SimGeomHalfSpaceSolid_HalfSpaceSolid_PolygonalBoundedHalfSpace(self, *args):
        return _SimModel.SimModel_SimGeomHalfSpaceSolid_HalfSpaceSolid_PolygonalBoundedHalfSpace(self, *args)

    def SimGeomPoint_Point_CartesianPoint(self, *args):
        return _SimModel.SimModel_SimGeomPoint_Point_CartesianPoint(self, *args)

    def SimGeomSolidModel_FacetedBrep_Default(self, *args):
        return _SimModel.SimModel_SimGeomSolidModel_FacetedBrep_Default(self, *args)

    def SimGeomSolidModel_SweptAreaSolid_ExtrudedAreaSolid(self, *args):
        return _SimModel.SimModel_SimGeomSolidModel_SweptAreaSolid_ExtrudedAreaSolid(self, *args)

    def SimGeomSurface_BoundedSurface_CurveBoundedPlane(self, *args):
        return _SimModel.SimModel_SimGeomSurface_BoundedSurface_CurveBoundedPlane(self, *args)

    def SimGeomSurface_ElementarySurface_Plane(self, *args):
        return _SimModel.SimModel_SimGeomSurface_ElementarySurface_Plane(self, *args)

    def SimGeomSurfaceModel_FaceBasedSurfaceModel_Default(self, *args):
        return _SimModel.SimModel_SimGeomSurfaceModel_FaceBasedSurfaceModel_Default(self, *args)

    def SimGeomVector_Vector_Default(self, *args):
        return _SimModel.SimModel_SimGeomVector_Vector_Default(self, *args)

    def SimGeomVector_Vector_Direction(self, *args):
        return _SimModel.SimModel_SimGeomVector_Vector_Direction(self, *args)

    def SimGroup_BldgCompGroup_ZoneEquipment(self, *args):
        return _SimModel.SimModel_SimGroup_BldgCompGroup_ZoneEquipment(self, *args)

    def SimGroup_HvacDemandGroup_WaterSystem(self, *args):
        return _SimModel.SimModel_SimGroup_HvacDemandGroup_WaterSystem(self, *args)

    def SimGroup_SpatialZoneGroup_ZoneGroup(self, *args):
        return _SimModel.SimModel_SimGroup_SpatialZoneGroup_ZoneGroup(self, *args)

    def SimGroup_SpatialZoneGroup_ZoneHvacGroup(self, *args):
        return _SimModel.SimModel_SimGroup_SpatialZoneGroup_ZoneHvacGroup(self, *args)

    def SimInternalLoad_Equipment_Electric(self, *args):
        return _SimModel.SimModel_SimInternalLoad_Equipment_Electric(self, *args)

    def SimInternalLoad_Lights_Default(self, *args):
        return _SimModel.SimModel_SimInternalLoad_Lights_Default(self, *args)

    def SimInternalLoad_People_Default(self, *args):
        return _SimModel.SimModel_SimInternalLoad_People_Default(self, *args)

    def SimList_ConnectorList_SimConnections(self, *args):
        return _SimModel.SimModel_SimList_ConnectorList_SimConnections(self, *args)

    def SimList_EquipmentList_ZoneHvac(self, *args):
        return _SimModel.SimModel_SimList_EquipmentList_ZoneHvac(self, *args)

    def SimList_MaterialList_Default(self, *args):
        return _SimModel.SimModel_SimList_MaterialList_Default(self, *args)

    def SimList_SchemeList_AirLoopAvailabilityMgrScheme(self, *args):
        return _SimModel.SimModel_SimList_SchemeList_AirLoopAvailabilityMgrScheme(self, *args)

    def SimList_SchemeList_DemandManagerScheme(self, *args):
        return _SimModel.SimModel_SimList_SchemeList_DemandManagerScheme(self, *args)

    def SimList_SchemeList_PlantOperatingScheme(self, *args):
        return _SimModel.SimModel_SimList_SchemeList_PlantOperatingScheme(self, *args)

    def SimList_SchemeList_WaterTempControlScheme(self, *args):
        return _SimModel.SimModel_SimList_SchemeList_WaterTempControlScheme(self, *args)

    def SimLocalPlacement_LocalPlacement_AbsolutePlacement(self, *args):
        return _SimModel.SimModel_SimLocalPlacement_LocalPlacement_AbsolutePlacement(self, *args)

    def SimLocalPlacement_LocalPlacement_RelativePlacement(self, *args):
        return _SimModel.SimModel_SimLocalPlacement_LocalPlacement_RelativePlacement(self, *args)

    def SimLocationAndWeather_DesignDay_Default(self, *args):
        return _SimModel.SimModel_SimLocationAndWeather_DesignDay_Default(self, *args)

    def SimLocationAndWeather_Location_Default(self, *args):
        return _SimModel.SimModel_SimLocationAndWeather_Location_Default(self, *args)

    def SimLoop_Loop_PolyLoop(self, *args):
        return _SimModel.SimModel_SimLoop_Loop_PolyLoop(self, *args)

    def SimMappedRepresentationItem_Default_Default(self, *args):
        return _SimModel.SimModel_SimMappedRepresentationItem_Default_Default(self, *args)

    def SimMaterial_Default_Default(self, *args):
        return _SimModel.SimModel_SimMaterial_Default_Default(self, *args)

    def SimMaterial_GlazingMaterial_Gas(self, *args):
        return _SimModel.SimModel_SimMaterial_GlazingMaterial_Gas(self, *args)

    def SimMaterial_GlazingMaterial_Glazing(self, *args):
        return _SimModel.SimModel_SimMaterial_GlazingMaterial_Glazing(self, *args)

    def SimMaterial_GlazingMaterial_SimpleGlazingSystem(self, *args):
        return _SimModel.SimModel_SimMaterial_GlazingMaterial_SimpleGlazingSystem(self, *args)

    def SimMaterial_OpaqueMaterial_AirGap(self, *args):
        return _SimModel.SimModel_SimMaterial_OpaqueMaterial_AirGap(self, *args)

    def SimMaterial_OpaqueMaterial_Default(self, *args):
        return _SimModel.SimModel_SimMaterial_OpaqueMaterial_Default(self, *args)

    def SimMaterialLayer_GlazingMaterialLayer_Default(self, *args):
        return _SimModel.SimModel_SimMaterialLayer_GlazingMaterialLayer_Default(self, *args)

    def SimMaterialLayer_GlazingMaterialLayer_Thermochromic(self, *args):
        return _SimModel.SimModel_SimMaterialLayer_GlazingMaterialLayer_Thermochromic(self, *args)

    def SimMaterialLayer_OpaqueMaterialLayer_Default(self, *args):
        return _SimModel.SimModel_SimMaterialLayer_OpaqueMaterialLayer_Default(self, *args)

    def SimMaterialLayerSet_Default_Default(self, *args):
        return _SimModel.SimModel_SimMaterialLayerSet_Default_Default(self, *args)

    def SimMaterialLayerSet_GlazingLayerSet_Window(self, *args):
        return _SimModel.SimModel_SimMaterialLayerSet_GlazingLayerSet_Window(self, *args)

    def SimMaterialLayerSet_OpaqueLayerSet_Ceiling(self, *args):
        return _SimModel.SimModel_SimMaterialLayerSet_OpaqueLayerSet_Ceiling(self, *args)

    def SimMaterialLayerSet_OpaqueLayerSet_Door(self, *args):
        return _SimModel.SimModel_SimMaterialLayerSet_OpaqueLayerSet_Door(self, *args)

    def SimMaterialLayerSet_OpaqueLayerSet_Floor(self, *args):
        return _SimModel.SimModel_SimMaterialLayerSet_OpaqueLayerSet_Floor(self, *args)

    def SimMaterialLayerSet_OpaqueLayerSet_InternalSource(self, *args):
        return _SimModel.SimModel_SimMaterialLayerSet_OpaqueLayerSet_InternalSource(self, *args)

    def SimMaterialLayerSet_OpaqueLayerSet_Roof(self, *args):
        return _SimModel.SimModel_SimMaterialLayerSet_OpaqueLayerSet_Roof(self, *args)

    def SimMaterialLayerSet_OpaqueLayerSet_Wall(self, *args):
        return _SimModel.SimModel_SimMaterialLayerSet_OpaqueLayerSet_Wall(self, *args)

    def SimModelRepresentationContext_GeometricRepresentationContext_Default(self, *args):
        return _SimModel.SimModel_SimModelRepresentationContext_GeometricRepresentationContext_Default(self, *args)

    def SimModelRepresentationContext_GeometricRepresentationSubContext_Default(self, *args):
        return _SimModel.SimModel_SimModelRepresentationContext_GeometricRepresentationSubContext_Default(self, *args)

    def SimNode_AirFlowPort_Air_In(self, *args):
        return _SimModel.SimModel_SimNode_AirFlowPort_Air_In(self, *args)

    def SimNode_AirFlowPort_Air_Out(self, *args):
        return _SimModel.SimModel_SimNode_AirFlowPort_Air_Out(self, *args)

    def SimNode_DigitalControl_AirLoop_DigitalSignal_In(self, *args):
        return _SimModel.SimModel_SimNode_DigitalControl_AirLoop_DigitalSignal_In(self, *args)

    def SimNode_DigitalControl_HWLoop_DigitalSignal_In(self, *args):
        return _SimModel.SimModel_SimNode_DigitalControl_HWLoop_DigitalSignal_In(self, *args)

    def SimNode_Docking_Default(self, *args):
        return _SimModel.SimModel_SimNode_Docking_Default(self, *args)

    def SimNode_HotWaterFlowPort_Water_In(self, *args):
        return _SimModel.SimModel_SimNode_HotWaterFlowPort_Water_In(self, *args)

    def SimNode_HotWaterFlowPort_Water_Out(self, *args):
        return _SimModel.SimModel_SimNode_HotWaterFlowPort_Water_Out(self, *args)

    def SimOrganization_Organization_Default(self, *args):
        return _SimModel.SimModel_SimOrganization_Organization_Default(self, *args)

    def SimOwnerHistory_Default_Default(self, *args):
        return _SimModel.SimModel_SimOwnerHistory_Default_Default(self, *args)

    def SimParameterizedProfileDef_ParameterizedProfile_Rectangle(self, *args):
        return _SimModel.SimModel_SimParameterizedProfileDef_ParameterizedProfile_Rectangle(self, *args)

    def SimPerformanceCurve_Mathematical_Cubic(self, *args):
        return _SimModel.SimModel_SimPerformanceCurve_Mathematical_Cubic(self, *args)

    def SimPerson_Person_Default(self, *args):
        return _SimModel.SimModel_SimPerson_Person_Default(self, *args)

    def SimPersonAndOrganization_PersonAndOrganization_Default(self, *args):
        return _SimModel.SimModel_SimPersonAndOrganization_PersonAndOrganization_Default(self, *args)

    def SimPlacement_Axis2Placement2D_Default(self, *args):
        return _SimModel.SimModel_SimPlacement_Axis2Placement2D_Default(self, *args)

    def SimPlacement_Axis2Placement3D_Default(self, *args):
        return _SimModel.SimModel_SimPlacement_Axis2Placement3D_Default(self, *args)

    def SimPresentationLayerAssignment_Default_Default(self, *args):
        return _SimModel.SimModel_SimPresentationLayerAssignment_Default_Default(self, *args)

    def SimProject_Project_DesignAlternative(self, *args):
        return _SimModel.SimModel_SimProject_Project_DesignAlternative(self, *args)

    def SimRepresentationMap_RepresentationMap_Default(self, *args):
        return _SimModel.SimModel_SimRepresentationMap_RepresentationMap_Default(self, *args)

    def SimSensor_TemperatureSensor_DryBulb(self, *args):
        return _SimModel.SimModel_SimSensor_TemperatureSensor_DryBulb(self, *args)

    def SimShapeRepresentation_ShapeRepresentation_Default(self, *args):
        return _SimModel.SimModel_SimShapeRepresentation_ShapeRepresentation_Default(self, *args)

    def SimSimulationConfiguration_SimulationConfiguration_Default(self, *args):
        return _SimModel.SimModel_SimSimulationConfiguration_SimulationConfiguration_Default(self, *args)

    def SimSimulationParameters_HvacDesign_WaterLoopSizing(self, *args):
        return _SimModel.SimModel_SimSimulationParameters_HvacDesign_WaterLoopSizing(self, *args)

    def SimSite_BuildingSite_Default(self, *args):
        return _SimModel.SimModel_SimSite_BuildingSite_Default(self, *args)

    def SimSIUnitType_SiUnit_Default(self, *args):
        return _SimModel.SimModel_SimSIUnitType_SiUnit_Default(self, *args)

    def SimSlab_Default_Default(self, *args):
        return _SimModel.SimModel_SimSlab_Default_Default(self, *args)

    def SimSlab_Floor_FloorOverEarth(self, *args):
        return _SimModel.SimModel_SimSlab_Floor_FloorOverEarth(self, *args)

    def SimSlab_Floor_InterzoneFloor(self, *args):
        return _SimModel.SimModel_SimSlab_Floor_InterzoneFloor(self, *args)

    def SimSlab_RoofSlab_RoofUnderAir(self, *args):
        return _SimModel.SimModel_SimSlab_RoofSlab_RoofUnderAir(self, *args)

    def SimSlabParams_Slab_Floor(self, *args):
        return _SimModel.SimModel_SimSlabParams_Slab_Floor(self, *args)

    def SimSoftwareApplication_Default_Default(self, *args):
        return _SimModel.SimModel_SimSoftwareApplication_Default_Default(self, *args)

    def SimSolarShade_Fin_Default(self, *args):
        return _SimModel.SimModel_SimSolarShade_Fin_Default(self, *args)

    def SimSolarShade_Overhang_Default(self, *args):
        return _SimModel.SimModel_SimSolarShade_Overhang_Default(self, *args)

    def SimSpace_Occupied_Default(self, *args):
        return _SimModel.SimModel_SimSpace_Occupied_Default(self, *args)

    def SimSpaceBoundary_SecondLevel_SubTypeA(self, *args):
        return _SimModel.SimModel_SimSpaceBoundary_SecondLevel_SubTypeA(self, *args)

    def SimSpaceParams_Space_Default(self, *args):
        return _SimModel.SimModel_SimSpaceParams_Space_Default(self, *args)

    def SimSpatialZone_ThermalZone_Default(self, *args):
        return _SimModel.SimModel_SimSpatialZone_ThermalZone_Default(self, *args)

    def SimSpatialZone_ThermalZone_TemplateForZoneGroup(self, *args):
        return _SimModel.SimModel_SimSpatialZone_ThermalZone_TemplateForZoneGroup(self, *args)

    def SimSystem_HvacHotWater_Control(self, *args):
        return _SimModel.SimModel_SimSystem_HvacHotWater_Control(self, *args)

    def SimSystem_HvacHotWater_Demand(self, *args):
        return _SimModel.SimModel_SimSystem_HvacHotWater_Demand(self, *args)

    def SimSystem_HvacHotWater_FullSystem(self, *args):
        return _SimModel.SimModel_SimSystem_HvacHotWater_FullSystem(self, *args)

    def SimSystem_HvacHotWater_Supply(self, *args):
        return _SimModel.SimModel_SimSystem_HvacHotWater_Supply(self, *args)

    def SimSystem_ZoneHvacGroup_Control(self, *args):
        return _SimModel.SimModel_SimSystem_ZoneHvacGroup_Control(self, *args)

    def SimSystem_ZoneHvacGroup_Demand(self, *args):
        return _SimModel.SimModel_SimSystem_ZoneHvacGroup_Demand(self, *args)

    def SimSystem_ZoneHvacGroup_FullSystem(self, *args):
        return _SimModel.SimModel_SimSystem_ZoneHvacGroup_FullSystem(self, *args)

    def SimSystem_ZoneHvacGroup_Supply(self, *args):
        return _SimModel.SimModel_SimSystem_ZoneHvacGroup_Supply(self, *args)

    def SimTemplateConstructions_Constructions_Default(self, *args):
        return _SimModel.SimModel_SimTemplateConstructions_Constructions_Default(self, *args)

    def SimTemplateLocation_Location_Default(self, *args):
        return _SimModel.SimModel_SimTemplateLocation_Location_Default(self, *args)

    def SimTemplateZoneConditions_ZoneConditions_Default(self, *args):
        return _SimModel.SimModel_SimTemplateZoneConditions_ZoneConditions_Default(self, *args)

    def SimTemplateZoneLoads_ZoneLoads_Default(self, *args):
        return _SimModel.SimModel_SimTemplateZoneLoads_ZoneLoads_Default(self, *args)

    def SimThermalZoneType_ThermalZone_Default(self, *args):
        return _SimModel.SimModel_SimThermalZoneType_ThermalZone_Default(self, *args)

    def SimTimeSeriesSchedule_Calendar_Configuration(self, *args):
        return _SimModel.SimModel_SimTimeSeriesSchedule_Calendar_Configuration(self, *args)

    def SimTimeSeriesSchedule_Day_Interval(self, *args):
        return _SimModel.SimModel_SimTimeSeriesSchedule_Day_Interval(self, *args)

    def SimTimeSeriesSchedule_Limits_Default(self, *args):
        return _SimModel.SimModel_SimTimeSeriesSchedule_Limits_Default(self, *args)

    def SimTimeSeriesSchedule_Week_Daily(self, *args):
        return _SimModel.SimModel_SimTimeSeriesSchedule_Week_Daily(self, *args)

    def SimTimeSeriesSchedule_Year_Default(self, *args):
        return _SimModel.SimModel_SimTimeSeriesSchedule_Year_Default(self, *args)

    def SimWall_Wall_Default(self, *args):
        return _SimModel.SimModel_SimWall_Wall_Default(self, *args)

    def SimWall_Wall_ExteriorAboveGrade(self, *args):
        return _SimModel.SimModel_SimWall_Wall_ExteriorAboveGrade(self, *args)

    def SimWall_Wall_Interior(self, *args):
        return _SimModel.SimModel_SimWall_Wall_Interior(self, *args)

    def SimWallParams_Wall_Default(self, *args):
        return _SimModel.SimModel_SimWallParams_Wall_Default(self, *args)

    def SimWallType_Wall_Default(self, *args):
        return _SimModel.SimModel_SimWallType_Wall_Default(self, *args)

    def SimWindow_Window_Default(self, *args):
        return _SimModel.SimModel_SimWindow_Window_Default(self, *args)

    def SimWindow_Window_Exterior(self, *args):
        return _SimModel.SimModel_SimWindow_Window_Exterior(self, *args)

    def SimWindow_Window_ExteriorDetailed(self, *args):
        return _SimModel.SimModel_SimWindow_Window_ExteriorDetailed(self, *args)

    def SimWindowArrayParams_WindowArray_Default(self, *args):
        return _SimModel.SimModel_SimWindowArrayParams_WindowArray_Default(self, *args)

    def SimWindowLiningProps_WindowLiningProps_Default(self, *args):
        return _SimModel.SimModel_SimWindowLiningProps_WindowLiningProps_Default(self, *args)

    def SimWindowParams_Window_Default(self, *args):
        return _SimModel.SimModel_SimWindowParams_Window_Default(self, *args)

    def SimWindowType_Window_Default(self, *args):
        return _SimModel.SimModel_SimWindowType_Window_Default(self, *args)

    def SimWindowType_Window_Exterior(self, *args):
        return _SimModel.SimModel_SimWindowType_Window_Exterior(self, *args)

    def SimWindowType_Window_Interior(self, *args):
        return _SimModel.SimModel_SimWindowType_Window_Interior(self, *args)

    def SimModelVersion(self, *args):
        return _SimModel.SimModel_SimModelVersion(self, *args)

    def SimModelSchemaVersion(self, *args):
        return _SimModel.SimModel_SimModelSchemaVersion(self, *args)

    def SimModelUnitsVersion(self, *args):
        return _SimModel.SimModel_SimModelUnitsVersion(self, *args)

    def SimModelUnitDefaultsVersion(self, *args):
        return _SimModel.SimModel_SimModelUnitDefaultsVersion(self, *args)

    def SimModelSchemaIDKey(self, *args):
        return _SimModel.SimModel_SimModelSchemaIDKey(self, *args)

    def __init__(self, *args):
        this = _SimModel.new_SimModel(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimModel.SimModel__clone(self, f, c)
    __swig_destroy__ = _SimModel.delete_SimModel
    __del__ = lambda self: None
SimModel_swigregister = _SimModel.SimModel_swigregister
SimModel_swigregister(SimModel)


def SimModel_(*args):
    return _SimModel.SimModel_(*args)
SimModel_ = _SimModel.SimModel_
# This file is compatible with both classic and new-style classes.


