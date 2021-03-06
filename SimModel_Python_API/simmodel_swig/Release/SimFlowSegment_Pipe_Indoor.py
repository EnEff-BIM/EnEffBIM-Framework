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
            fp, pathname, description = imp.find_module('_SimFlowSegment_Pipe_Indoor', [dirname(__file__)])
        except ImportError:
            import _SimFlowSegment_Pipe_Indoor
            return _SimFlowSegment_Pipe_Indoor
        if fp is not None:
            try:
                _mod = imp.load_module('_SimFlowSegment_Pipe_Indoor', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _SimFlowSegment_Pipe_Indoor = swig_import_helper()
    del swig_import_helper
else:
    import _SimFlowSegment_Pipe_Indoor
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
class SimFlowSegment(base.SimDistributionFlowElement):
    __swig_setmethods__ = {}
    for _s in [base.SimDistributionFlowElement]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimFlowSegment, name, value)
    __swig_getmethods__ = {}
    for _s in [base.SimDistributionFlowElement]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimFlowSegment, name)
    __repr__ = _swig_repr

    def Representation(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Representation(self, *args)

    def __init__(self, *args):
        this = _SimFlowSegment_Pipe_Indoor.new_SimFlowSegment(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment__clone(self, f, c)
    __swig_destroy__ = _SimFlowSegment_Pipe_Indoor.delete_SimFlowSegment
    __del__ = lambda self: None
SimFlowSegment_swigregister = _SimFlowSegment_Pipe_Indoor.SimFlowSegment_swigregister
SimFlowSegment_swigregister(SimFlowSegment)

class SimFlowSegment_Pipe(SimFlowSegment):
    __swig_setmethods__ = {}
    for _s in [SimFlowSegment]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimFlowSegment_Pipe, name, value)
    __swig_getmethods__ = {}
    for _s in [SimFlowSegment]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimFlowSegment_Pipe, name)
    __repr__ = _swig_repr

    def SimFlowSeg_Name(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_SimFlowSeg_Name(self, *args)

    def __init__(self, *args):
        this = _SimFlowSegment_Pipe_Indoor.new_SimFlowSegment_Pipe(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe__clone(self, f, c)
    __swig_destroy__ = _SimFlowSegment_Pipe_Indoor.delete_SimFlowSegment_Pipe
    __del__ = lambda self: None
SimFlowSegment_Pipe_swigregister = _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_swigregister
SimFlowSegment_Pipe_swigregister(SimFlowSegment_Pipe)

class SimFlowSegment_Pipe_Indoor(SimFlowSegment_Pipe):
    __swig_setmethods__ = {}
    for _s in [SimFlowSegment_Pipe]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimFlowSegment_Pipe_Indoor, name, value)
    __swig_getmethods__ = {}
    for _s in [SimFlowSegment_Pipe]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimFlowSegment_Pipe_Indoor, name)
    __repr__ = _swig_repr

    def SimFlowSeg_ConstructionName(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_SimFlowSeg_ConstructionName(self, *args)

    def SimFlowSeg_FluidInletNodeName(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_SimFlowSeg_FluidInletNodeName(self, *args)

    def SimFlowSeg_FluidOutletNodeName(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_SimFlowSeg_FluidOutletNodeName(self, *args)

    def SimFlowSeg_EnvironmentType(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_SimFlowSeg_EnvironmentType(self, *args)

    def SimFlowSeg_AmbTempZoneName(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_SimFlowSeg_AmbTempZoneName(self, *args)

    def SimFlowSeg_AmbTempSchedName(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_SimFlowSeg_AmbTempSchedName(self, *args)

    def SimFlowSeg_AmbAirVeloSchedName(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_SimFlowSeg_AmbAirVeloSchedName(self, *args)

    def SimFlowSeg_PipesideDiam(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_SimFlowSeg_PipesideDiam(self, *args)

    def SimFlowSeg_PipeLength(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_SimFlowSeg_PipeLength(self, *args)

    def __init__(self, *args):
        this = _SimFlowSegment_Pipe_Indoor.new_SimFlowSegment_Pipe_Indoor(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor__clone(self, f, c)
    __swig_destroy__ = _SimFlowSegment_Pipe_Indoor.delete_SimFlowSegment_Pipe_Indoor
    __del__ = lambda self: None
SimFlowSegment_Pipe_Indoor_swigregister = _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_swigregister
SimFlowSegment_Pipe_Indoor_swigregister(SimFlowSegment_Pipe_Indoor)

class SimFlowSegment_Pipe_Indoor_sequence(base.sequence_common):
    __swig_setmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimFlowSegment_Pipe_Indoor_sequence, name, value)
    __swig_getmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimFlowSegment_Pipe_Indoor_sequence, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimFlowSegment_Pipe_Indoor.new_SimFlowSegment_Pipe_Indoor_sequence(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def assign(self, n, x):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_sequence_assign(self, n, x)

    def begin(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_sequence_begin(self, *args)

    def end(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_sequence_end(self, *args)

    def rbegin(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_sequence_rbegin(self, *args)

    def rend(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_sequence_rend(self, *args)

    def at(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_sequence_at(self, *args)

    def front(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_sequence_front(self, *args)

    def back(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_sequence_back(self, *args)

    def push_back(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_sequence_push_back(self, *args)

    def pop_back(self):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_sequence_pop_back(self)

    def detach_back(self, pop=True):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_sequence_detach_back(self, pop)

    def insert(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_sequence_insert(self, *args)

    def erase(self, *args):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_sequence_erase(self, *args)

    def detach(self, position, r, erase=True):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_sequence_detach(self, position, r, erase)

    def swap(self, x):
        return _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_sequence_swap(self, x)
    __swig_destroy__ = _SimFlowSegment_Pipe_Indoor.delete_SimFlowSegment_Pipe_Indoor_sequence
    __del__ = lambda self: None
SimFlowSegment_Pipe_Indoor_sequence_swigregister = _SimFlowSegment_Pipe_Indoor.SimFlowSegment_Pipe_Indoor_sequence_swigregister
SimFlowSegment_Pipe_Indoor_sequence_swigregister(SimFlowSegment_Pipe_Indoor_sequence)

# This file is compatible with both classic and new-style classes.


