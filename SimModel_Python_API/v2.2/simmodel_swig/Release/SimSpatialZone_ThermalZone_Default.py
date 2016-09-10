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
            fp, pathname, description = imp.find_module('_SimSpatialZone_ThermalZone_Default', [dirname(__file__)])
        except ImportError:
            import _SimSpatialZone_ThermalZone_Default
            return _SimSpatialZone_ThermalZone_Default
        if fp is not None:
            try:
                _mod = imp.load_module('_SimSpatialZone_ThermalZone_Default', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _SimSpatialZone_ThermalZone_Default = swig_import_helper()
    del swig_import_helper
else:
    import _SimSpatialZone_ThermalZone_Default
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


import base
class SimSpatialZone(base.SimGroup):
    __swig_setmethods__ = {}
    for _s in [base.SimGroup]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimSpatialZone, name, value)
    __swig_getmethods__ = {}
    for _s in [base.SimGroup]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimSpatialZone, name)
    __repr__ = _swig_repr

    def ZoneColorIndex(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ZoneColorIndex(self, *args)

    def SHWFixtureSets(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_SHWFixtureSets(self, *args)

    def ContainingBuilding(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ContainingBuilding(self, *args)

    def ZoneTemplates(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ZoneTemplates(self, *args)

    def OverrideTemplates(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_OverrideTemplates(self, *args)

    def __init__(self, *args):
        this = _SimSpatialZone_ThermalZone_Default.new_SimSpatialZone(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone__clone(self, f, c)
    __swig_destroy__ = _SimSpatialZone_ThermalZone_Default.delete_SimSpatialZone
    __del__ = lambda self: None
SimSpatialZone_swigregister = _SimSpatialZone_ThermalZone_Default.SimSpatialZone_swigregister
SimSpatialZone_swigregister(SimSpatialZone)

class SimSpatialZone_ThermalZone(SimSpatialZone):
    __swig_setmethods__ = {}
    for _s in [SimSpatialZone]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimSpatialZone_ThermalZone, name, value)
    __swig_getmethods__ = {}
    for _s in [SimSpatialZone]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimSpatialZone_ThermalZone, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimSpatialZone_ThermalZone_Default.new_SimSpatialZone_ThermalZone(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone__clone(self, f, c)
    __swig_destroy__ = _SimSpatialZone_ThermalZone_Default.delete_SimSpatialZone_ThermalZone
    __del__ = lambda self: None
SimSpatialZone_ThermalZone_swigregister = _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_swigregister
SimSpatialZone_ThermalZone_swigregister(SimSpatialZone_ThermalZone)

class SimSpatialZone_ThermalZone_Default(SimSpatialZone_ThermalZone):
    __swig_setmethods__ = {}
    for _s in [SimSpatialZone_ThermalZone]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimSpatialZone_ThermalZone_Default, name, value)
    __swig_getmethods__ = {}
    for _s in [SimSpatialZone_ThermalZone]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimSpatialZone_ThermalZone_Default, name)
    __repr__ = _swig_repr

    def ZoneConditioningRequirement(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_ZoneConditioningRequirement(self, *args)

    def HVACSystemType(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_HVACSystemType(self, *args)

    def UserDefinedHVACSystemType(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_UserDefinedHVACSystemType(self, *args)

    def InfiltrationRate(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_InfiltrationRate(self, *args)

    def IsDaylitZone(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_IsDaylitZone(self, *args)

    def NumberOfDaylightingSensors(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_NumberOfDaylightingSensors(self, *args)

    def DesignIlluminance(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_DesignIlluminance(self, *args)

    def LightingControlsType(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_LightingControlsType(self, *args)

    def ClassRef_ZoneTypeEnergy(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_ClassRef_ZoneTypeEnergy(self, *args)

    def AssignedSchedule(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_AssignedSchedule(self, *args)

    def SimSpatialZone_DirRelNorth(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_SimSpatialZone_DirRelNorth(self, *args)

    def SimSpatialZone_XOrigin(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_SimSpatialZone_XOrigin(self, *args)

    def SimSpatialZone_YOrigin(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_SimSpatialZone_YOrigin(self, *args)

    def SimSpatialZone_ZOrigin(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_SimSpatialZone_ZOrigin(self, *args)

    def SimSpatialZone_Type(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_SimSpatialZone_Type(self, *args)

    def SimSpatialZone_Mult(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_SimSpatialZone_Mult(self, *args)

    def SimSpatialZone_CeilingHt(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_SimSpatialZone_CeilingHt(self, *args)

    def SimSpatialZone_Volume(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_SimSpatialZone_Volume(self, *args)

    def SimSpatialZone_FloorArea(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_SimSpatialZone_FloorArea(self, *args)

    def SimSpatialZone_ZoneInsideConvAlgo(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_SimSpatialZone_ZoneInsideConvAlgo(self, *args)

    def SimSpatialZone_ZoneOutsdConvAlgo(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_SimSpatialZone_ZoneOutsdConvAlgo(self, *args)

    def SimSpatialZone_PartTotalFlrArea(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_SimSpatialZone_PartTotalFlrArea(self, *args)

    def ZoneProp_UserViewFactors_bySurfName_ZoneName(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_ZoneProp_UserViewFactors_bySurfName_ZoneName(self, *args)

    def ZoneProp_UserViewFactors_bySurfName_FromSurface_1_121(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_ZoneProp_UserViewFactors_bySurfName_FromSurface_1_121(self, *args)

    def ZoneProp_UserViewFactors_bySurfName_ToSurface_1_121(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_ZoneProp_UserViewFactors_bySurfName_ToSurface_1_121(self, *args)

    def ZoneProp_UserViewFactors_bySurfName_ViewFactor_1_121(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_ZoneProp_UserViewFactors_bySurfName_ViewFactor_1_121(self, *args)

    def RmAirModelType_ZoneName(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_RmAirModelType_ZoneName(self, *args)

    def RmAirModelType_RoomAirModType(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_RmAirModelType_RoomAirModType(self, *args)

    def RmAirModelType_AirTempCplngStrat(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_RmAirModelType_AirTempCplngStrat(self, *args)

    def ZoneAirBalance_OutdoorAir_ZoneName(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_ZoneAirBalance_OutdoorAir_ZoneName(self, *args)

    def ZoneAirBalance_OutdoorAir_AirBalanceMethod(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_ZoneAirBalance_OutdoorAir_AirBalanceMethod(self, *args)

    def ZoneAirBalance_OutdoorAir_InducedOutdrAirDueToUnbalDuctLeak(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_ZoneAirBalance_OutdoorAir_InducedOutdrAirDueToUnbalDuctLeak(self, *args)

    def ZoneAirBalance_OutdoorAir_InducedOutdrAirScheduleName(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_ZoneAirBalance_OutdoorAir_InducedOutdrAirScheduleName(self, *args)

    def ZoneHVAC_EquipConnections_ZoneName(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_ZoneHVAC_EquipConnections_ZoneName(self, *args)

    def ZoneHVAC_EquipConnections_ZoneCondEqmtListName(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_ZoneHVAC_EquipConnections_ZoneCondEqmtListName(self, *args)

    def ZoneHVAC_EquipConnections_ZoneAirInletNodeOrNodeListName(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_ZoneHVAC_EquipConnections_ZoneAirInletNodeOrNodeListName(self, *args)

    def ZoneHVAC_EquipConnections_ZoneAirExhaustNodeOrNodeListName(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_ZoneHVAC_EquipConnections_ZoneAirExhaustNodeOrNodeListName(self, *args)

    def ZoneHVAC_EquipConnections_ZoneAirNodeName(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_ZoneHVAC_EquipConnections_ZoneAirNodeName(self, *args)

    def ZoneHVAC_EquipConnections_ZoneReturnAirNodeName(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_ZoneHVAC_EquipConnections_ZoneReturnAirNodeName(self, *args)

    def __init__(self, *args):
        this = _SimSpatialZone_ThermalZone_Default.new_SimSpatialZone_ThermalZone_Default(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default__clone(self, f, c)
    __swig_destroy__ = _SimSpatialZone_ThermalZone_Default.delete_SimSpatialZone_ThermalZone_Default
    __del__ = lambda self: None
SimSpatialZone_ThermalZone_Default_swigregister = _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_swigregister
SimSpatialZone_ThermalZone_Default_swigregister(SimSpatialZone_ThermalZone_Default)

class SimSpatialZone_ThermalZone_Default_sequence(base.sequence_common):
    __swig_setmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimSpatialZone_ThermalZone_Default_sequence, name, value)
    __swig_getmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimSpatialZone_ThermalZone_Default_sequence, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimSpatialZone_ThermalZone_Default.new_SimSpatialZone_ThermalZone_Default_sequence(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def assign(self, n, x):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_sequence_assign(self, n, x)

    def begin(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_sequence_begin(self, *args)

    def end(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_sequence_end(self, *args)

    def rbegin(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_sequence_rbegin(self, *args)

    def rend(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_sequence_rend(self, *args)

    def at(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_sequence_at(self, *args)

    def front(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_sequence_front(self, *args)

    def back(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_sequence_back(self, *args)

    def push_back(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_sequence_push_back(self, *args)

    def pop_back(self):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_sequence_pop_back(self)

    def detach_back(self, pop=True):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_sequence_detach_back(self, pop)

    def insert(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_sequence_insert(self, *args)

    def erase(self, *args):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_sequence_erase(self, *args)

    def detach(self, position, r, erase=True):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_sequence_detach(self, position, r, erase)

    def swap(self, x):
        return _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_sequence_swap(self, x)
    __swig_destroy__ = _SimSpatialZone_ThermalZone_Default.delete_SimSpatialZone_ThermalZone_Default_sequence
    __del__ = lambda self: None
SimSpatialZone_ThermalZone_Default_sequence_swigregister = _SimSpatialZone_ThermalZone_Default.SimSpatialZone_ThermalZone_Default_sequence_swigregister
SimSpatialZone_ThermalZone_Default_sequence_swigregister(SimSpatialZone_ThermalZone_Default_sequence)

# This file is compatible with both classic and new-style classes.


