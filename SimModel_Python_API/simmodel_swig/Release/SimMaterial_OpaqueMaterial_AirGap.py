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
            fp, pathname, description = imp.find_module('_SimMaterial_OpaqueMaterial_AirGap', [dirname(__file__)])
        except ImportError:
            import _SimMaterial_OpaqueMaterial_AirGap
            return _SimMaterial_OpaqueMaterial_AirGap
        if fp is not None:
            try:
                _mod = imp.load_module('_SimMaterial_OpaqueMaterial_AirGap', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _SimMaterial_OpaqueMaterial_AirGap = swig_import_helper()
    del swig_import_helper
else:
    import _SimMaterial_OpaqueMaterial_AirGap
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
import SimMaterial_Default_Default
class SimMaterial_OpaqueMaterial(SimMaterial_Default_Default.SimMaterial):
    __swig_setmethods__ = {}
    for _s in [SimMaterial_Default_Default.SimMaterial]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimMaterial_OpaqueMaterial, name, value)
    __swig_getmethods__ = {}
    for _s in [SimMaterial_Default_Default.SimMaterial]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimMaterial_OpaqueMaterial, name)
    __repr__ = _swig_repr

    def MatProp_MoistPeneDepth_Settings_Name(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_MoistPeneDepth_Settings_Name(self, *args)

    def MatProp_MoistPeneDepth_Settings_MoistPenetrationDepth(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_MoistPeneDepth_Settings_MoistPenetrationDepth(self, *args)

    def MatProp_MoistPeneDepth_Settings_MoistEquaCoefA(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_MoistPeneDepth_Settings_MoistEquaCoefA(self, *args)

    def MatProp_MoistPeneDepth_Settings_MoistEquaCoefB(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_MoistPeneDepth_Settings_MoistEquaCoefB(self, *args)

    def MatProp_MoistPeneDepth_Settings_MoistEquaCoefC(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_MoistPeneDepth_Settings_MoistEquaCoefC(self, *args)

    def MatProp_MoistPeneDepth_Settings_MoistEquaCoefD(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_MoistPeneDepth_Settings_MoistEquaCoefD(self, *args)

    def MatProp_PhaseChange_Name(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_PhaseChange_Name(self, *args)

    def MatProp_PhaseChange_TempCoefForThermalCond(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_PhaseChange_TempCoefForThermalCond(self, *args)

    def MatProp_PhaseChange_Temp_1_16(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_PhaseChange_Temp_1_16(self, *args)

    def MatProp_PhaseChange_Enthalpy_1_16(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_PhaseChange_Enthalpy_1_16(self, *args)

    def MatProp_VarThermCond_Name(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_VarThermCond_Name(self, *args)

    def MatProp_VarThermCond_Temp_1_10(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_VarThermCond_Temp_1_10(self, *args)

    def MatProp_VarThermCond_ThermalCond_1_10(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_VarThermCond_ThermalCond_1_10(self, *args)

    def MatProp_Heat_MoistTrans_Settings_MaterialName(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_Settings_MaterialName(self, *args)

    def MatProp_Heat_MoistTrans_Settings_Porosity(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_Settings_Porosity(self, *args)

    def MatProp_Heat_MoistTrans_Settings_InitWaterContRatio(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_Settings_InitWaterContRatio(self, *args)

    def MatProp_Heat_MoistTrans_SorpIsothm_MaterialName(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_SorpIsothm_MaterialName(self, *args)

    def MatProp_Heat_MoistTrans_SorpIsothm_NumothermCoords(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_SorpIsothm_NumothermCoords(self, *args)

    def MatProp_Heat_MoistTrans_SorpIsothm_RelHumidFract_1_25(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_SorpIsothm_RelHumidFract_1_25(self, *args)

    def MatProp_Heat_MoistTrans_SorpIsothm_MoistCont_1_25(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_SorpIsothm_MoistCont_1_25(self, *args)

    def MatProp_Heat_MoistTrans_Suction_MaterialName(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_Suction_MaterialName(self, *args)

    def MatProp_Heat_MoistTrans_Suction_NumSuctionPoints(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_Suction_NumSuctionPoints(self, *args)

    def MatProp_Heat_MoistTrans_Suction_MoistCont_1_25(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_Suction_MoistCont_1_25(self, *args)

    def MatProp_Heat_MoistTrans_Suction_LiqTransportCoef_1_25(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_Suction_LiqTransportCoef_1_25(self, *args)

    def MatProp_Heat_MoistTrans_ReDistrib_MaterialName(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_ReDistrib_MaterialName(self, *args)

    def MatProp_Heat_MoistTrans_ReDistrib_NumReDistPoints(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_ReDistrib_NumReDistPoints(self, *args)

    def MatProp_Heat_MoistTrans_ReDistrib_MoistCont_1_25(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_ReDistrib_MoistCont_1_25(self, *args)

    def MatProp_Heat_MoistTrans_ReDistrib_LiqTransportCoef_1_25(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_ReDistrib_LiqTransportCoef_1_25(self, *args)

    def MatProp_Heat_MoistTrans_Diffusion_MaterialName(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_Diffusion_MaterialName(self, *args)

    def MatProp_Heat_MoistTrans_Diffusion_NumDataPairs(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_Diffusion_NumDataPairs(self, *args)

    def MatProp_Heat_MoistTrans_Diffusion_RelHumidFract_1_25(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_Diffusion_RelHumidFract_1_25(self, *args)

    def MatProp_Heat_MoistTrans_Diffusion_WaterVaporDiffusResistFactor_1_25(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_Diffusion_WaterVaporDiffusResistFactor_1_25(self, *args)

    def MatProp_Heat_MoistTrans_ThermCond_MaterialName(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_ThermCond_MaterialName(self, *args)

    def MatProp_Heat_MoistTrans_ThermCond_NumThermalCoords(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_ThermCond_NumThermalCoords(self, *args)

    def MatProp_Heat_MoistTrans_ThermCond_MoistCont_1_25(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_ThermCond_MoistCont_1_25(self, *args)

    def MatProp_Heat_MoistTrans_ThermCond_ThermalCond_1_25(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_MatProp_Heat_MoistTrans_ThermCond_ThermalCond_1_25(self, *args)

    def __init__(self, *args):
        this = _SimMaterial_OpaqueMaterial_AirGap.new_SimMaterial_OpaqueMaterial(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial__clone(self, f, c)
    __swig_destroy__ = _SimMaterial_OpaqueMaterial_AirGap.delete_SimMaterial_OpaqueMaterial
    __del__ = lambda self: None
SimMaterial_OpaqueMaterial_swigregister = _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_swigregister
SimMaterial_OpaqueMaterial_swigregister(SimMaterial_OpaqueMaterial)

class SimMaterial_OpaqueMaterial_AirGap(SimMaterial_OpaqueMaterial):
    __swig_setmethods__ = {}
    for _s in [SimMaterial_OpaqueMaterial]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimMaterial_OpaqueMaterial_AirGap, name, value)
    __swig_getmethods__ = {}
    for _s in [SimMaterial_OpaqueMaterial]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimMaterial_OpaqueMaterial_AirGap, name)
    __repr__ = _swig_repr

    def SimMaterial_Name(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_SimMaterial_Name(self, *args)

    def SimMaterial_ThermalResist(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_SimMaterial_ThermalResist(self, *args)

    def __init__(self, *args):
        this = _SimMaterial_OpaqueMaterial_AirGap.new_SimMaterial_OpaqueMaterial_AirGap(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap__clone(self, f, c)
    __swig_destroy__ = _SimMaterial_OpaqueMaterial_AirGap.delete_SimMaterial_OpaqueMaterial_AirGap
    __del__ = lambda self: None
SimMaterial_OpaqueMaterial_AirGap_swigregister = _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_swigregister
SimMaterial_OpaqueMaterial_AirGap_swigregister(SimMaterial_OpaqueMaterial_AirGap)

class SimMaterial_OpaqueMaterial_AirGap_sequence(base.sequence_common):
    __swig_setmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimMaterial_OpaqueMaterial_AirGap_sequence, name, value)
    __swig_getmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimMaterial_OpaqueMaterial_AirGap_sequence, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimMaterial_OpaqueMaterial_AirGap.new_SimMaterial_OpaqueMaterial_AirGap_sequence(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def assign(self, n, x):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_sequence_assign(self, n, x)

    def begin(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_sequence_begin(self, *args)

    def end(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_sequence_end(self, *args)

    def rbegin(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_sequence_rbegin(self, *args)

    def rend(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_sequence_rend(self, *args)

    def at(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_sequence_at(self, *args)

    def front(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_sequence_front(self, *args)

    def back(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_sequence_back(self, *args)

    def push_back(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_sequence_push_back(self, *args)

    def pop_back(self):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_sequence_pop_back(self)

    def detach_back(self, pop=True):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_sequence_detach_back(self, pop)

    def insert(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_sequence_insert(self, *args)

    def erase(self, *args):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_sequence_erase(self, *args)

    def detach(self, position, r, erase=True):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_sequence_detach(self, position, r, erase)

    def swap(self, x):
        return _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_sequence_swap(self, x)
    __swig_destroy__ = _SimMaterial_OpaqueMaterial_AirGap.delete_SimMaterial_OpaqueMaterial_AirGap_sequence
    __del__ = lambda self: None
SimMaterial_OpaqueMaterial_AirGap_sequence_swigregister = _SimMaterial_OpaqueMaterial_AirGap.SimMaterial_OpaqueMaterial_AirGap_sequence_swigregister
SimMaterial_OpaqueMaterial_AirGap_sequence_swigregister(SimMaterial_OpaqueMaterial_AirGap_sequence)

# This file is compatible with both classic and new-style classes.


