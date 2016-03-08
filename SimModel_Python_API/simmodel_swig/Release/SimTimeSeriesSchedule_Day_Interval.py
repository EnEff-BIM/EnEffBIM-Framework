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
            fp, pathname, description = imp.find_module('_SimTimeSeriesSchedule_Day_Interval', [dirname(__file__)])
        except ImportError:
            import _SimTimeSeriesSchedule_Day_Interval
            return _SimTimeSeriesSchedule_Day_Interval
        if fp is not None:
            try:
                _mod = imp.load_module('_SimTimeSeriesSchedule_Day_Interval', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _SimTimeSeriesSchedule_Day_Interval = swig_import_helper()
    del swig_import_helper
else:
    import _SimTimeSeriesSchedule_Day_Interval
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
import SimTimeSeriesSchedule_Calendar_Configuration
class SimTimeSeriesSchedule_Day(SimTimeSeriesSchedule_Calendar_Configuration.SimTimeSeriesSchedule):
    __swig_setmethods__ = {}
    for _s in [SimTimeSeriesSchedule_Calendar_Configuration.SimTimeSeriesSchedule]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimTimeSeriesSchedule_Day, name, value)
    __swig_getmethods__ = {}
    for _s in [SimTimeSeriesSchedule_Calendar_Configuration.SimTimeSeriesSchedule]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimTimeSeriesSchedule_Day, name)
    __repr__ = _swig_repr

    def SimTimeSeriesSched_Name(self, *args):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_SimTimeSeriesSched_Name(self, *args)

    def SimTimeSeriesSched_SchedTypeLimitsName(self, *args):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_SimTimeSeriesSched_SchedTypeLimitsName(self, *args)

    def SimTimeSeriesSched_TimeSeriesSchedType(self, *args):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_SimTimeSeriesSched_TimeSeriesSchedType(self, *args)

    def __init__(self, *args):
        this = _SimTimeSeriesSchedule_Day_Interval.new_SimTimeSeriesSchedule_Day(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day__clone(self, f, c)
    __swig_destroy__ = _SimTimeSeriesSchedule_Day_Interval.delete_SimTimeSeriesSchedule_Day
    __del__ = lambda self: None
SimTimeSeriesSchedule_Day_swigregister = _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_swigregister
SimTimeSeriesSchedule_Day_swigregister(SimTimeSeriesSchedule_Day)

class SimTimeSeriesSchedule_Day_Interval(SimTimeSeriesSchedule_Day):
    __swig_setmethods__ = {}
    for _s in [SimTimeSeriesSchedule_Day]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimTimeSeriesSchedule_Day_Interval, name, value)
    __swig_getmethods__ = {}
    for _s in [SimTimeSeriesSchedule_Day]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimTimeSeriesSchedule_Day_Interval, name)
    __repr__ = _swig_repr

    def SimTimeSeriesSched_terpolateToTimestep(self, *args):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_SimTimeSeriesSched_terpolateToTimestep(self, *args)

    def SimTimeSeriesSched_Time_1_144(self, *args):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_SimTimeSeriesSched_Time_1_144(self, *args)

    def SimTimeSeriesSched_ValUntilTime_1_144(self, *args):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_SimTimeSeriesSched_ValUntilTime_1_144(self, *args)

    def __init__(self, *args):
        this = _SimTimeSeriesSchedule_Day_Interval.new_SimTimeSeriesSchedule_Day_Interval(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval__clone(self, f, c)
    __swig_destroy__ = _SimTimeSeriesSchedule_Day_Interval.delete_SimTimeSeriesSchedule_Day_Interval
    __del__ = lambda self: None
SimTimeSeriesSchedule_Day_Interval_swigregister = _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_swigregister
SimTimeSeriesSchedule_Day_Interval_swigregister(SimTimeSeriesSchedule_Day_Interval)

class SimTimeSeriesSchedule_Day_Interval_sequence(base.sequence_common):
    __swig_setmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimTimeSeriesSchedule_Day_Interval_sequence, name, value)
    __swig_getmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimTimeSeriesSchedule_Day_Interval_sequence, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimTimeSeriesSchedule_Day_Interval.new_SimTimeSeriesSchedule_Day_Interval_sequence(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def assign(self, n, x):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_sequence_assign(self, n, x)

    def begin(self, *args):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_sequence_begin(self, *args)

    def end(self, *args):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_sequence_end(self, *args)

    def rbegin(self, *args):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_sequence_rbegin(self, *args)

    def rend(self, *args):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_sequence_rend(self, *args)

    def at(self, *args):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_sequence_at(self, *args)

    def front(self, *args):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_sequence_front(self, *args)

    def back(self, *args):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_sequence_back(self, *args)

    def push_back(self, *args):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_sequence_push_back(self, *args)

    def pop_back(self):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_sequence_pop_back(self)

    def detach_back(self, pop=True):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_sequence_detach_back(self, pop)

    def insert(self, *args):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_sequence_insert(self, *args)

    def erase(self, *args):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_sequence_erase(self, *args)

    def detach(self, position, r, erase=True):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_sequence_detach(self, position, r, erase)

    def swap(self, x):
        return _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_sequence_swap(self, x)
    __swig_destroy__ = _SimTimeSeriesSchedule_Day_Interval.delete_SimTimeSeriesSchedule_Day_Interval_sequence
    __del__ = lambda self: None
SimTimeSeriesSchedule_Day_Interval_sequence_swigregister = _SimTimeSeriesSchedule_Day_Interval.SimTimeSeriesSchedule_Day_Interval_sequence_swigregister
SimTimeSeriesSchedule_Day_Interval_sequence_swigregister(SimTimeSeriesSchedule_Day_Interval_sequence)

# This file is compatible with both classic and new-style classes.


