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
            fp, pathname, description = imp.find_module('_SimGeomVector_Vector_Default', [dirname(__file__)])
        except ImportError:
            import _SimGeomVector_Vector_Default
            return _SimGeomVector_Vector_Default
        if fp is not None:
            try:
                _mod = imp.load_module('_SimGeomVector_Vector_Default', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _SimGeomVector_Vector_Default = swig_import_helper()
    del swig_import_helper
else:
    import _SimGeomVector_Vector_Default
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
class SimGeomVector(base.SimGeometricRepresentationItem):
    __swig_setmethods__ = {}
    for _s in [base.SimGeometricRepresentationItem]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimGeomVector, name, value)
    __swig_getmethods__ = {}
    for _s in [base.SimGeometricRepresentationItem]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimGeomVector, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimGeomVector_Vector_Default.new_SimGeomVector(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimGeomVector_Vector_Default.SimGeomVector__clone(self, f, c)
    __swig_destroy__ = _SimGeomVector_Vector_Default.delete_SimGeomVector
    __del__ = lambda self: None
SimGeomVector_swigregister = _SimGeomVector_Vector_Default.SimGeomVector_swigregister
SimGeomVector_swigregister(SimGeomVector)

class SimGeomVector_Vector(SimGeomVector):
    __swig_setmethods__ = {}
    for _s in [SimGeomVector]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimGeomVector_Vector, name, value)
    __swig_getmethods__ = {}
    for _s in [SimGeomVector]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimGeomVector_Vector, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimGeomVector_Vector_Default.new_SimGeomVector_Vector(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector__clone(self, f, c)
    __swig_destroy__ = _SimGeomVector_Vector_Default.delete_SimGeomVector_Vector
    __del__ = lambda self: None
SimGeomVector_Vector_swigregister = _SimGeomVector_Vector_Default.SimGeomVector_Vector_swigregister
SimGeomVector_Vector_swigregister(SimGeomVector_Vector)

class SimGeomVector_Vector_Default(SimGeomVector_Vector):
    __swig_setmethods__ = {}
    for _s in [SimGeomVector_Vector]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimGeomVector_Vector_Default, name, value)
    __swig_getmethods__ = {}
    for _s in [SimGeomVector_Vector]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimGeomVector_Vector_Default, name)
    __repr__ = _swig_repr

    def Orientation_Reference(self, *args):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_Orientation_Reference(self, *args)

    def Magnitude(self, *args):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_Magnitude(self, *args)

    def __init__(self, *args):
        this = _SimGeomVector_Vector_Default.new_SimGeomVector_Vector_Default(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default__clone(self, f, c)
    __swig_destroy__ = _SimGeomVector_Vector_Default.delete_SimGeomVector_Vector_Default
    __del__ = lambda self: None
SimGeomVector_Vector_Default_swigregister = _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_swigregister
SimGeomVector_Vector_Default_swigregister(SimGeomVector_Vector_Default)

class SimGeomVector_Vector_Default_sequence(base.sequence_common):
    __swig_setmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimGeomVector_Vector_Default_sequence, name, value)
    __swig_getmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimGeomVector_Vector_Default_sequence, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimGeomVector_Vector_Default.new_SimGeomVector_Vector_Default_sequence(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def assign(self, n, x):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_sequence_assign(self, n, x)

    def begin(self, *args):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_sequence_begin(self, *args)

    def end(self, *args):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_sequence_end(self, *args)

    def rbegin(self, *args):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_sequence_rbegin(self, *args)

    def rend(self, *args):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_sequence_rend(self, *args)

    def at(self, *args):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_sequence_at(self, *args)

    def front(self, *args):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_sequence_front(self, *args)

    def back(self, *args):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_sequence_back(self, *args)

    def push_back(self, *args):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_sequence_push_back(self, *args)

    def pop_back(self):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_sequence_pop_back(self)

    def detach_back(self, pop=True):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_sequence_detach_back(self, pop)

    def insert(self, *args):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_sequence_insert(self, *args)

    def erase(self, *args):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_sequence_erase(self, *args)

    def detach(self, position, r, erase=True):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_sequence_detach(self, position, r, erase)

    def swap(self, x):
        return _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_sequence_swap(self, x)
    __swig_destroy__ = _SimGeomVector_Vector_Default.delete_SimGeomVector_Vector_Default_sequence
    __del__ = lambda self: None
SimGeomVector_Vector_Default_sequence_swigregister = _SimGeomVector_Vector_Default.SimGeomVector_Vector_Default_sequence_swigregister
SimGeomVector_Vector_Default_sequence_swigregister(SimGeomVector_Vector_Default_sequence)

# This file is compatible with both classic and new-style classes.

