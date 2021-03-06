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
            fp, pathname, description = imp.find_module('_SimModel_Hierachy', [dirname(__file__)])
        except ImportError:
            import _SimModel_Hierachy
            return _SimModel_Hierachy
        if fp is not None:
            try:
                _mod = imp.load_module('_SimModel_Hierachy', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _SimModel_Hierachy = swig_import_helper()
    del swig_import_helper
else:
    import _SimModel_Hierachy
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
    __swig_destroy__ = _SimModel_Hierachy.delete_SwigPyIterator
    __del__ = lambda self: None

    def value(self):
        return _SimModel_Hierachy.SwigPyIterator_value(self)

    def incr(self, n=1):
        return _SimModel_Hierachy.SwigPyIterator_incr(self, n)

    def decr(self, n=1):
        return _SimModel_Hierachy.SwigPyIterator_decr(self, n)

    def distance(self, x):
        return _SimModel_Hierachy.SwigPyIterator_distance(self, x)

    def equal(self, x):
        return _SimModel_Hierachy.SwigPyIterator_equal(self, x)

    def copy(self):
        return _SimModel_Hierachy.SwigPyIterator_copy(self)

    def next(self):
        return _SimModel_Hierachy.SwigPyIterator_next(self)

    def __next__(self):
        return _SimModel_Hierachy.SwigPyIterator___next__(self)

    def previous(self):
        return _SimModel_Hierachy.SwigPyIterator_previous(self)

    def advance(self, n):
        return _SimModel_Hierachy.SwigPyIterator_advance(self, n)

    def __eq__(self, x):
        return _SimModel_Hierachy.SwigPyIterator___eq__(self, x)

    def __ne__(self, x):
        return _SimModel_Hierachy.SwigPyIterator___ne__(self, x)

    def __iadd__(self, n):
        return _SimModel_Hierachy.SwigPyIterator___iadd__(self, n)

    def __isub__(self, n):
        return _SimModel_Hierachy.SwigPyIterator___isub__(self, n)

    def __add__(self, n):
        return _SimModel_Hierachy.SwigPyIterator___add__(self, n)

    def __sub__(self, *args):
        return _SimModel_Hierachy.SwigPyIterator___sub__(self, *args)
    def __iter__(self):
        return self
SwigPyIterator_swigregister = _SimModel_Hierachy.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

import SimModel
import base

import SimModel_PyCallBack
__cb_init__ = SimModel_PyCallBack.CallBack()

class SimModelBase(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimModelBase, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SimModelBase, name)
    __repr__ = _swig_repr

    def present(self):
        return _SimModel_Hierachy.SimModelBase_present(self)

    def getValue(self):
        return _SimModel_Hierachy.SimModelBase_getValue(self)

    def __init__(self):
        this = _SimModel_Hierachy.new_SimModelBase()
        try:
            self.this.append(this)
        except:
            self.this = this
    __swig_destroy__ = _SimModel_Hierachy.delete_SimModelBase
    __del__ = lambda self: None
SimModelBase_swigregister = _SimModel_Hierachy.SimModelBase_swigregister
SimModelBase_swigregister(SimModelBase)

class SimMaterialLayer2_10(base.SimRoot):
    __swig_setmethods__ = {}
    for _s in [base.SimRoot]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimMaterialLayer2_10, name, value)
    __swig_getmethods__ = {}
    for _s in [base.SimRoot]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimMaterialLayer2_10, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimModel_Hierachy.new_SimMaterialLayer2_10(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def SimModelName(self):
        return _SimModel_Hierachy.SimMaterialLayer2_10_SimModelName(self)
    __swig_destroy__ = _SimModel_Hierachy.delete_SimMaterialLayer2_10
    __del__ = lambda self: None
SimMaterialLayer2_10_swigregister = _SimModel_Hierachy.SimMaterialLayer2_10_swigregister
SimMaterialLayer2_10_swigregister(SimMaterialLayer2_10)

class SimHierarchyNodeBase(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimHierarchyNodeBase, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SimHierarchyNodeBase, name)
    __repr__ = _swig_repr
    __swig_setmethods__["_SimRootObject"] = _SimModel_Hierachy.SimHierarchyNodeBase__SimRootObject_set
    __swig_getmethods__["_SimRootObject"] = _SimModel_Hierachy.SimHierarchyNodeBase__SimRootObject_get
    if _newclass:
        _SimRootObject = _swig_property(_SimModel_Hierachy.SimHierarchyNodeBase__SimRootObject_get, _SimModel_Hierachy.SimHierarchyNodeBase__SimRootObject_set)

    def dataType_SimProject_Project_DesignAlternative(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimProject_Project_DesignAlternative(self)

    def dataType_SimModelRepresentationContext_GeometricRepresentationContext_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimModelRepresentationContext_GeometricRepresentationContext_Default(self)

    def dataType_SimPlacement_Axis2Placement3D_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimPlacement_Axis2Placement3D_Default(self)

    def dataType_SimGeomVector_Vector_Direction(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimGeomVector_Vector_Direction(self)

    def dataType_SimSite_BuildingSite_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimSite_BuildingSite_Default(self)

    def dataType_SimBuilding_Building_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimBuilding_Building_Default(self)

    def dataType_SimGroup_SpatialZoneGroup_ZoneGroup(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimGroup_SpatialZoneGroup_ZoneGroup(self)

    def dataType_SimGroup_SpatialZoneGroup_ZoneHvacGroup(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimGroup_SpatialZoneGroup_ZoneHvacGroup(self)

    def dataType_SimSpatialZone_ThermalZone_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimSpatialZone_ThermalZone_Default(self)

    def dataType_SimSpace_Occupied_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimSpace_Occupied_Default(self)

    def dataType_SimList_EquipmentList_ZoneHvac(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimList_EquipmentList_ZoneHvac(self)

    def dataType_SimSpaceBoundary_SecondLevel_SubTypeA(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimSpaceBoundary_SecondLevel_SubTypeA(self)

    def dataType_SimSlab_RoofSlab_RoofUnderAir(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimSlab_RoofSlab_RoofUnderAir(self)

    def dataType_SimSlab_Floor_FloorOverEarth(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimSlab_Floor_FloorOverEarth(self)

    def dataType_SimWall_Wall_ExteriorAboveGrade(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimWall_Wall_ExteriorAboveGrade(self)

    def dataType_SimWall_Wall_Interior(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimWall_Wall_Interior(self)

    def dataType_SimWindow_Window_Exterior(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimWindow_Window_Exterior(self)

    def dataType_SimMaterialLayerSet_OpaqueLayerSet_Roof(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimMaterialLayerSet_OpaqueLayerSet_Roof(self)

    def dataType_SimMaterialLayerSet_OpaqueLayerSet_Floor(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimMaterialLayerSet_OpaqueLayerSet_Floor(self)

    def dataType_SimMaterialLayerSet_OpaqueLayerSet_Wall(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimMaterialLayerSet_OpaqueLayerSet_Wall(self)

    def dataType_SimMaterialLayerSet_GlazingLayerSet_Window(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimMaterialLayerSet_GlazingLayerSet_Window(self)

    def dataType_SimMaterialLayer2_10(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimMaterialLayer2_10(self)

    def dataType_SimFeatureElementSubtraction_Void_Opening(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimFeatureElementSubtraction_Void_Opening(self)

    def dataType_SimMaterialLayer_OpaqueMaterialLayer_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimMaterialLayer_OpaqueMaterialLayer_Default(self)

    def dataType_SimMaterialLayer_GlazingMaterialLayer_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimMaterialLayer_GlazingMaterialLayer_Default(self)

    def dataType_SimMaterial_OpaqueMaterial_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimMaterial_OpaqueMaterial_Default(self)

    def dataType_SimMaterial_OpaqueMaterial_AirGap(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimMaterial_OpaqueMaterial_AirGap(self)

    def dataType_SimMaterial_GlazingMaterial_Gas(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimMaterial_GlazingMaterial_Gas(self)

    def dataType_SimMaterial_GlazingMaterial_SimpleGlazingSystem(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimMaterial_GlazingMaterial_SimpleGlazingSystem(self)

    def dataType_SimMaterial_GlazingMaterial_Glazing(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimMaterial_GlazingMaterial_Glazing(self)

    def dataType_SimMaterial_Default_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimMaterial_Default_Default(self)

    def dataType_SimSlab_Default_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimSlab_Default_Default(self)

    def dataType_SimSlab_Floor_InterzoneFloor(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimSlab_Floor_InterzoneFloor(self)

    def dataType_SimWall_Wall_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimWall_Wall_Default(self)

    def dataType_SimMaterialLayerSet_Default_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimMaterialLayerSet_Default_Default(self)

    def dataType_SimSystem_HvacHotWater_FullSystem(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimSystem_HvacHotWater_FullSystem(self)

    def dataType_SimSystem_HvacHotWater_Control(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimSystem_HvacHotWater_Control(self)

    def dataType_SimController_SupplyWater_Temperature(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimController_SupplyWater_Temperature(self)

    def dataType_SimSensor_TemperatureSensor_DryBulb(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimSensor_TemperatureSensor_DryBulb(self)

    def dataType_SimSystem_HvacHotWater_Demand(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimSystem_HvacHotWater_Demand(self)

    def dataType_SimFlowEnergyTransfer_ConvectiveHeater_Water(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimFlowEnergyTransfer_ConvectiveHeater_Water(self)

    def dataType_SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Water(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Water(self)

    def dataType_SimFlowEnergyTransferStorage_HotWaterTank_Mixed(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimFlowEnergyTransferStorage_HotWaterTank_Mixed(self)

    def dataType_SimFlowEnergyTransferStorage_HotWaterTank_Expansion(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimFlowEnergyTransferStorage_HotWaterTank_Expansion(self)

    def dataType_SimFlowFitting_Mixer_DemandProxyMixerWater(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimFlowFitting_Mixer_DemandProxyMixerWater(self)

    def dataType_SimFlowFitting_Default_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimFlowFitting_Default_Default(self)

    def dataType_SimFlowFitting_Splitter_DemandProxySplitterWater(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimFlowFitting_Splitter_DemandProxySplitterWater(self)

    def dataType_SimSystem_HvacHotWater_Supply(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimSystem_HvacHotWater_Supply(self)

    def dataType_SimFlowController_Valve_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimFlowController_Valve_Default(self)

    def dataType_SimFlowController_Valve_TemperingValve(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimFlowController_Valve_TemperingValve(self)

    def dataType_SimFlowMover_Pump_VariableSpeedReturn(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimFlowMover_Pump_VariableSpeedReturn(self)

    def dataType_SimFlowPlant_Boiler_BoilerHotWater(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimFlowPlant_Boiler_BoilerHotWater(self)

    def dataType_SimFlowSegment_Pipe_Indoor(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimFlowSegment_Pipe_Indoor(self)

    def dataType_SimBuildingStory_BuildingStory_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimBuildingStory_BuildingStory_Default(self)

    def dataType_SimConnection_HotWaterFlow_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimConnection_HotWaterFlow_Default(self)

    def dataType_SimNode_HotWaterFlowPort_Water_Out(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimNode_HotWaterFlowPort_Water_Out(self)

    def dataType_SimNode_HotWaterFlowPort_Water_In(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimNode_HotWaterFlowPort_Water_In(self)

    def dataType_SimDistributionPort_HotWaterFlowPort_Water_InOrOut(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimDistributionPort_HotWaterFlowPort_Water_InOrOut(self)

    def dataType_SimNode_DigitalControl_HWLoop_DigitalSignal_In(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimNode_DigitalControl_HWLoop_DigitalSignal_In(self)

    def dataType_SimDistributionPort_HotWaterFlowPort_Water_Out(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimDistributionPort_HotWaterFlowPort_Water_Out(self)

    def dataType_SimDistributionPort_HotWaterFlowPort_Water_In(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimDistributionPort_HotWaterFlowPort_Water_In(self)

    def dataType_SimTimeSeriesSchedule_Year_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimTimeSeriesSchedule_Year_Default(self)

    def dataType_SimTimeSeriesSchedule_Week_Daily(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimTimeSeriesSchedule_Week_Daily(self)

    def dataType_SimTimeSeriesSchedule_Day_Interval(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimTimeSeriesSchedule_Day_Interval(self)

    def dataType_SimTemplateZoneLoads_ZoneLoads_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimTemplateZoneLoads_ZoneLoads_Default(self)

    def dataType_SimTemplateZoneConditions_ZoneConditions_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimTemplateZoneConditions_ZoneConditions_Default(self)

    def dataType_SimInternalLoad_Equipment_Electric(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimInternalLoad_Equipment_Electric(self)

    def dataType_SimInternalLoad_People_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimInternalLoad_People_Default(self)

    def dataType_SimInternalLoad_Lights_Default(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimInternalLoad_Lights_Default(self)

    def dataType_SimController_ZoneControlTemperature_Thermostat(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimController_ZoneControlTemperature_Thermostat(self)

    def dataType_SimControlScheme_SetpointScheme_SingleHeating(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimControlScheme_SetpointScheme_SingleHeating(self)

    def dataType_SimPerformanceCurve_Mathematical_Cubic(self):
        return _SimModel_Hierachy.SimHierarchyNodeBase_dataType_SimPerformanceCurve_Mathematical_Cubic(self)

    def __init__(self):
        this = _SimModel_Hierachy.new_SimHierarchyNodeBase()
        try:
            self.this.append(this)
        except:
            self.this = this
    __swig_destroy__ = _SimModel_Hierachy.delete_SimHierarchyNodeBase
    __del__ = lambda self: None
SimHierarchyNodeBase_swigregister = _SimModel_Hierachy.SimHierarchyNodeBase_swigregister
SimHierarchyNodeBase_swigregister(SimHierarchyNodeBase)

class SimHierarchyNode(SimHierarchyNodeBase):
    __swig_setmethods__ = {}
    for _s in [SimHierarchyNodeBase]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimHierarchyNode, name, value)
    __swig_getmethods__ = {}
    for _s in [SimHierarchyNodeBase]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimHierarchyNode, name)
    __repr__ = _swig_repr

    def __init__(self):
        this = _SimModel_Hierachy.new_SimHierarchyNode()
        try:
            self.this.append(this)
        except:
            self.this = this

    def getParentList(self):
        return _SimModel_Hierachy.SimHierarchyNode_getParentList(self)

    def getChildList(self):
        return _SimModel_Hierachy.SimHierarchyNode_getChildList(self)

    def getMappedComponents(self):
        return _SimModel_Hierachy.SimHierarchyNode_getMappedComponents(self)

    def isClassType(self, _type):
        return _SimModel_Hierachy.SimHierarchyNode_isClassType(self, _type)

    def ClassType(self):
        return _SimModel_Hierachy.SimHierarchyNode_ClassType(self)

    def isParent(self, *args):
        return _SimModel_Hierachy.SimHierarchyNode_isParent(self, *args)

    def isChild(self, *args):
        return _SimModel_Hierachy.SimHierarchyNode_isChild(self, *args)
    __swig_destroy__ = _SimModel_Hierachy.delete_SimHierarchyNode
    __del__ = lambda self: None
SimHierarchyNode_swigregister = _SimModel_Hierachy.SimHierarchyNode_swigregister
SimHierarchyNode_swigregister(SimHierarchyNode)

def setCurrentObject(_simNode, _simObj):
    return _SimModel_Hierachy.setCurrentObject(_simNode, _simObj)
setCurrentObject = _SimModel_Hierachy.setCurrentObject

def addParent(_simNode, _simParentNode):
    return _SimModel_Hierachy.addParent(_simNode, _simParentNode)
addParent = _SimModel_Hierachy.addParent

def addChild(_simNode, _simChildNode):
    return _SimModel_Hierachy.addChild(_simNode, _simChildNode)
addChild = _SimModel_Hierachy.addChild

def addNodesRelationship(_simParentNode, _simChildNode):
    return _SimModel_Hierachy.addNodesRelationship(_simParentNode, _simChildNode)
addNodesRelationship = _SimModel_Hierachy.addNodesRelationship

class SimHierarchy(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimHierarchy, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SimHierarchy, name)
    __repr__ = _swig_repr

    def __init__(self):
        this = _SimModel_Hierachy.new_SimHierarchy()
        try:
            self.this.append(this)
        except:
            self.this = this

    def getHierarchyRootNode(self):
        return _SimModel_Hierachy.SimHierarchy_getHierarchyRootNode(self)

    def getHierarchyNodeList(self):
        return _SimModel_Hierachy.SimHierarchy_getHierarchyNodeList(self)

    def getHierarchyNode(self, _Id):
        return _SimModel_Hierachy.SimHierarchy_getHierarchyNode(self, _Id)

    def isClassType(self, *args):
        return _SimModel_Hierachy.SimHierarchy_isClassType(self, *args)

    def ClassType(self, *args):
        return _SimModel_Hierachy.SimHierarchy_ClassType(self, *args)

    def parser2_2(self, simGeometryData, simSysData, _geoName, _sysName):
        return _SimModel_Hierachy.SimHierarchy_parser2_2(self, simGeometryData, simSysData, _geoName, _sysName)

    def setCallBack(self, callback):
        return _SimModel_Hierachy.SimHierarchy_setCallBack(self, callback)

    def getCallBack(self):
        return _SimModel_Hierachy.SimHierarchy_getCallBack(self)
    __swig_destroy__ = _SimModel_Hierachy.delete_SimHierarchy
    __del__ = lambda self: None
SimHierarchy_swigregister = _SimModel_Hierachy.SimHierarchy_swigregister
SimHierarchy_swigregister(SimHierarchy)


def getSimModelObject(self):
        return getattr(self, "dataType_"+self.ClassType())()

SimHierarchyNode.getSimModelObject = getSimModelObject


def __re_init__(self):
        self.__orig_init__()
        self.setCallBack(__cb_init__)

SimHierarchy.__orig_init__ = SimHierarchy.__init__
SimHierarchy.__init__ = __re_init__
del __re_init__

class SimHierarchyNodeList(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimHierarchyNodeList, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SimHierarchyNodeList, name)
    __repr__ = _swig_repr

    def iterator(self):
        return _SimModel_Hierachy.SimHierarchyNodeList_iterator(self)
    def __iter__(self):
        return self.iterator()

    def __nonzero__(self):
        return _SimModel_Hierachy.SimHierarchyNodeList___nonzero__(self)

    def __bool__(self):
        return _SimModel_Hierachy.SimHierarchyNodeList___bool__(self)

    def __len__(self):
        return _SimModel_Hierachy.SimHierarchyNodeList___len__(self)

    def pop(self):
        return _SimModel_Hierachy.SimHierarchyNodeList_pop(self)

    def __getslice__(self, i, j):
        return _SimModel_Hierachy.SimHierarchyNodeList___getslice__(self, i, j)

    def __setslice__(self, *args):
        return _SimModel_Hierachy.SimHierarchyNodeList___setslice__(self, *args)

    def __delslice__(self, i, j):
        return _SimModel_Hierachy.SimHierarchyNodeList___delslice__(self, i, j)

    def __delitem__(self, *args):
        return _SimModel_Hierachy.SimHierarchyNodeList___delitem__(self, *args)

    def __getitem__(self, *args):
        return _SimModel_Hierachy.SimHierarchyNodeList___getitem__(self, *args)

    def __setitem__(self, *args):
        return _SimModel_Hierachy.SimHierarchyNodeList___setitem__(self, *args)

    def append(self, x):
        return _SimModel_Hierachy.SimHierarchyNodeList_append(self, x)

    def empty(self):
        return _SimModel_Hierachy.SimHierarchyNodeList_empty(self)

    def size(self):
        return _SimModel_Hierachy.SimHierarchyNodeList_size(self)

    def clear(self):
        return _SimModel_Hierachy.SimHierarchyNodeList_clear(self)

    def swap(self, v):
        return _SimModel_Hierachy.SimHierarchyNodeList_swap(self, v)

    def get_allocator(self):
        return _SimModel_Hierachy.SimHierarchyNodeList_get_allocator(self)

    def begin(self):
        return _SimModel_Hierachy.SimHierarchyNodeList_begin(self)

    def end(self):
        return _SimModel_Hierachy.SimHierarchyNodeList_end(self)

    def rbegin(self):
        return _SimModel_Hierachy.SimHierarchyNodeList_rbegin(self)

    def rend(self):
        return _SimModel_Hierachy.SimHierarchyNodeList_rend(self)

    def pop_back(self):
        return _SimModel_Hierachy.SimHierarchyNodeList_pop_back(self)

    def erase(self, *args):
        return _SimModel_Hierachy.SimHierarchyNodeList_erase(self, *args)

    def __init__(self, *args):
        this = _SimModel_Hierachy.new_SimHierarchyNodeList(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def push_back(self, x):
        return _SimModel_Hierachy.SimHierarchyNodeList_push_back(self, x)

    def front(self):
        return _SimModel_Hierachy.SimHierarchyNodeList_front(self)

    def back(self):
        return _SimModel_Hierachy.SimHierarchyNodeList_back(self)

    def assign(self, n, x):
        return _SimModel_Hierachy.SimHierarchyNodeList_assign(self, n, x)

    def resize(self, *args):
        return _SimModel_Hierachy.SimHierarchyNodeList_resize(self, *args)

    def insert(self, *args):
        return _SimModel_Hierachy.SimHierarchyNodeList_insert(self, *args)

    def reserve(self, n):
        return _SimModel_Hierachy.SimHierarchyNodeList_reserve(self, n)

    def capacity(self):
        return _SimModel_Hierachy.SimHierarchyNodeList_capacity(self)
    __swig_destroy__ = _SimModel_Hierachy.delete_SimHierarchyNodeList
    __del__ = lambda self: None
SimHierarchyNodeList_swigregister = _SimModel_Hierachy.SimHierarchyNodeList_swigregister
SimHierarchyNodeList_swigregister(SimHierarchyNodeList)

class SimHierarchyNodeRefList(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimHierarchyNodeRefList, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SimHierarchyNodeRefList, name)
    __repr__ = _swig_repr

    def iterator(self):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_iterator(self)
    def __iter__(self):
        return self.iterator()

    def __nonzero__(self):
        return _SimModel_Hierachy.SimHierarchyNodeRefList___nonzero__(self)

    def __bool__(self):
        return _SimModel_Hierachy.SimHierarchyNodeRefList___bool__(self)

    def __len__(self):
        return _SimModel_Hierachy.SimHierarchyNodeRefList___len__(self)

    def pop(self):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_pop(self)

    def __getslice__(self, i, j):
        return _SimModel_Hierachy.SimHierarchyNodeRefList___getslice__(self, i, j)

    def __setslice__(self, *args):
        return _SimModel_Hierachy.SimHierarchyNodeRefList___setslice__(self, *args)

    def __delslice__(self, i, j):
        return _SimModel_Hierachy.SimHierarchyNodeRefList___delslice__(self, i, j)

    def __delitem__(self, *args):
        return _SimModel_Hierachy.SimHierarchyNodeRefList___delitem__(self, *args)

    def __getitem__(self, *args):
        return _SimModel_Hierachy.SimHierarchyNodeRefList___getitem__(self, *args)

    def __setitem__(self, *args):
        return _SimModel_Hierachy.SimHierarchyNodeRefList___setitem__(self, *args)

    def append(self, x):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_append(self, x)

    def empty(self):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_empty(self)

    def size(self):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_size(self)

    def clear(self):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_clear(self)

    def swap(self, v):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_swap(self, v)

    def get_allocator(self):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_get_allocator(self)

    def begin(self):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_begin(self)

    def end(self):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_end(self)

    def rbegin(self):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_rbegin(self)

    def rend(self):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_rend(self)

    def pop_back(self):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_pop_back(self)

    def erase(self, *args):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_erase(self, *args)

    def __init__(self, *args):
        this = _SimModel_Hierachy.new_SimHierarchyNodeRefList(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def push_back(self, x):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_push_back(self, x)

    def front(self):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_front(self)

    def back(self):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_back(self)

    def assign(self, n, x):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_assign(self, n, x)

    def resize(self, *args):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_resize(self, *args)

    def insert(self, *args):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_insert(self, *args)

    def reserve(self, n):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_reserve(self, n)

    def capacity(self):
        return _SimModel_Hierachy.SimHierarchyNodeRefList_capacity(self)
    __swig_destroy__ = _SimModel_Hierachy.delete_SimHierarchyNodeRefList
    __del__ = lambda self: None
SimHierarchyNodeRefList_swigregister = _SimModel_Hierachy.SimHierarchyNodeRefList_swigregister
SimHierarchyNodeRefList_swigregister(SimHierarchyNodeRefList)

# This file is compatible with both classic and new-style classes.


