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
            fp, pathname, description = imp.find_module('_SimFlowMover_Pump_VariableSpeedReturn', [dirname(__file__)])
        except ImportError:
            import _SimFlowMover_Pump_VariableSpeedReturn
            return _SimFlowMover_Pump_VariableSpeedReturn
        if fp is not None:
            try:
                _mod = imp.load_module('_SimFlowMover_Pump_VariableSpeedReturn', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _SimFlowMover_Pump_VariableSpeedReturn = swig_import_helper()
    del swig_import_helper
else:
    import _SimFlowMover_Pump_VariableSpeedReturn
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
class SimFlowMover(base.SimDistributionFlowElement):
    __swig_setmethods__ = {}
    for _s in [base.SimDistributionFlowElement]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimFlowMover, name, value)
    __swig_getmethods__ = {}
    for _s in [base.SimDistributionFlowElement]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimFlowMover, name)
    __repr__ = _swig_repr

    def Representation(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Representation(self, *args)

    def __init__(self, *args):
        this = _SimFlowMover_Pump_VariableSpeedReturn.new_SimFlowMover(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover__clone(self, f, c)
    __swig_destroy__ = _SimFlowMover_Pump_VariableSpeedReturn.delete_SimFlowMover
    __del__ = lambda self: None
SimFlowMover_swigregister = _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_swigregister
SimFlowMover_swigregister(SimFlowMover)

class SimFlowMover_Pump(SimFlowMover):
    __swig_setmethods__ = {}
    for _s in [SimFlowMover]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimFlowMover_Pump, name, value)
    __swig_getmethods__ = {}
    for _s in [SimFlowMover]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimFlowMover_Pump, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimFlowMover_Pump_VariableSpeedReturn.new_SimFlowMover_Pump(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump__clone(self, f, c)
    __swig_destroy__ = _SimFlowMover_Pump_VariableSpeedReturn.delete_SimFlowMover_Pump
    __del__ = lambda self: None
SimFlowMover_Pump_swigregister = _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_swigregister
SimFlowMover_Pump_swigregister(SimFlowMover_Pump)

class SimFlowMover_Pump_VariableSpeedReturn(SimFlowMover_Pump):
    __swig_setmethods__ = {}
    for _s in [SimFlowMover_Pump]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimFlowMover_Pump_VariableSpeedReturn, name, value)
    __swig_getmethods__ = {}
    for _s in [SimFlowMover_Pump]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimFlowMover_Pump_VariableSpeedReturn, name)
    __repr__ = _swig_repr

    def SimFlowMover_Name(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_Name(self, *args)

    def SimFlowMover_MotorEff(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_MotorEff(self, *args)

    def SimFlowMover_MinFlowRate(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_MinFlowRate(self, *args)

    def SimFlowMover_InNodeName(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_InNodeName(self, *args)

    def SimFlowMover_OutNodeName(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_OutNodeName(self, *args)

    def SimFlowMover_RatedFlowRate(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_RatedFlowRate(self, *args)

    def SimFlowMover_RatedPumpHead(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_RatedPumpHead(self, *args)

    def SimFlowMover_RatedPowerConsump(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_RatedPowerConsump(self, *args)

    def SimFlowMover_FracMotorInEffToFluidStream(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_FracMotorInEffToFluidStream(self, *args)

    def SimFlowMover_Coef1OfThePartLoadPerfCurve(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_Coef1OfThePartLoadPerfCurve(self, *args)

    def SimFlowMover_Coef2OfThePartLoadPerfCurve(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_Coef2OfThePartLoadPerfCurve(self, *args)

    def SimFlowMover_Coef3OfThePartLoadPerfCurve(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_Coef3OfThePartLoadPerfCurve(self, *args)

    def SimFlowMover_Coef4OfThePartLoadPerfCurve(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_Coef4OfThePartLoadPerfCurve(self, *args)

    def SimFlowMover_PumpContType(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_PumpContType(self, *args)

    def SimFlowMover_PumpFlowRateSchedName(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_PumpFlowRateSchedName(self, *args)

    def SimFlowMover_PumpCurveName(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_PumpCurveName(self, *args)

    def SimFlowMover_ImpelDiam(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_ImpelDiam(self, *args)

    def SimFlowMover_VFDCtrlType(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_VFDCtrlType(self, *args)

    def SimFlowMover_PumprpmSchedName(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_PumprpmSchedName(self, *args)

    def SimFlowMover_MinPressureSched(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_MinPressureSched(self, *args)

    def SimFlowMover_MaxPressureSched(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_MaxPressureSched(self, *args)

    def SimFlowMover_MinRPMSched(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_MinRPMSched(self, *args)

    def SimFlowMover_MaxRPMSched(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_MaxRPMSched(self, *args)

    def SimFlowMover_ZoneName(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_ZoneName(self, *args)

    def SimFlowMover_SkinLossRadiativeFract(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_SimFlowMover_SkinLossRadiativeFract(self, *args)

    def __init__(self, *args):
        this = _SimFlowMover_Pump_VariableSpeedReturn.new_SimFlowMover_Pump_VariableSpeedReturn(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn__clone(self, f, c)
    __swig_destroy__ = _SimFlowMover_Pump_VariableSpeedReturn.delete_SimFlowMover_Pump_VariableSpeedReturn
    __del__ = lambda self: None
SimFlowMover_Pump_VariableSpeedReturn_swigregister = _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_swigregister
SimFlowMover_Pump_VariableSpeedReturn_swigregister(SimFlowMover_Pump_VariableSpeedReturn)

class SimFlowMover_Pump_VariableSpeedReturn_sequence(base.sequence_common):
    __swig_setmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimFlowMover_Pump_VariableSpeedReturn_sequence, name, value)
    __swig_getmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimFlowMover_Pump_VariableSpeedReturn_sequence, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimFlowMover_Pump_VariableSpeedReturn.new_SimFlowMover_Pump_VariableSpeedReturn_sequence(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def assign(self, n, x):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_sequence_assign(self, n, x)

    def begin(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_sequence_begin(self, *args)

    def end(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_sequence_end(self, *args)

    def rbegin(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_sequence_rbegin(self, *args)

    def rend(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_sequence_rend(self, *args)

    def at(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_sequence_at(self, *args)

    def front(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_sequence_front(self, *args)

    def back(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_sequence_back(self, *args)

    def push_back(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_sequence_push_back(self, *args)

    def pop_back(self):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_sequence_pop_back(self)

    def detach_back(self, pop=True):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_sequence_detach_back(self, pop)

    def insert(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_sequence_insert(self, *args)

    def erase(self, *args):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_sequence_erase(self, *args)

    def detach(self, position, r, erase=True):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_sequence_detach(self, position, r, erase)

    def swap(self, x):
        return _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_sequence_swap(self, x)
    __swig_destroy__ = _SimFlowMover_Pump_VariableSpeedReturn.delete_SimFlowMover_Pump_VariableSpeedReturn_sequence
    __del__ = lambda self: None
SimFlowMover_Pump_VariableSpeedReturn_sequence_swigregister = _SimFlowMover_Pump_VariableSpeedReturn.SimFlowMover_Pump_VariableSpeedReturn_sequence_swigregister
SimFlowMover_Pump_VariableSpeedReturn_sequence_swigregister(SimFlowMover_Pump_VariableSpeedReturn_sequence)

# This file is compatible with both classic and new-style classes.


