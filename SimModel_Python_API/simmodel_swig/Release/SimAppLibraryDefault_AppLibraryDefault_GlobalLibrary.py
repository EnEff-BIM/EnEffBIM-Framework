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
            fp, pathname, description = imp.find_module('_SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary', [dirname(__file__)])
        except ImportError:
            import _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary
            return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary
        if fp is not None:
            try:
                _mod = imp.load_module('_SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary = swig_import_helper()
    del swig_import_helper
else:
    import _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary
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
class SimAppLibraryDefault(base.SimAppDefault):
    __swig_setmethods__ = {}
    for _s in [base.SimAppDefault]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimAppLibraryDefault, name, value)
    __swig_getmethods__ = {}
    for _s in [base.SimAppDefault]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimAppLibraryDefault, name)
    __repr__ = _swig_repr

    def DefaultforLibraryType(self, *args):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_DefaultforLibraryType(self, *args)

    def DefaultPreferenceIndex(self, *args):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_DefaultPreferenceIndex(self, *args)

    def LibraryLocation(self, *args):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_LibraryLocation(self, *args)

    def LibraryName(self, *args):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_LibraryName(self, *args)

    def __init__(self, *args):
        this = _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.new_SimAppLibraryDefault(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault__clone(self, f, c)
    __swig_destroy__ = _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.delete_SimAppLibraryDefault
    __del__ = lambda self: None
SimAppLibraryDefault_swigregister = _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_swigregister
SimAppLibraryDefault_swigregister(SimAppLibraryDefault)

class SimAppLibraryDefault_AppLibraryDefault(SimAppLibraryDefault):
    __swig_setmethods__ = {}
    for _s in [SimAppLibraryDefault]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimAppLibraryDefault_AppLibraryDefault, name, value)
    __swig_getmethods__ = {}
    for _s in [SimAppLibraryDefault]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimAppLibraryDefault_AppLibraryDefault, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.new_SimAppLibraryDefault_AppLibraryDefault(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault__clone(self, f, c)
    __swig_destroy__ = _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.delete_SimAppLibraryDefault_AppLibraryDefault
    __del__ = lambda self: None
SimAppLibraryDefault_AppLibraryDefault_swigregister = _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_swigregister
SimAppLibraryDefault_AppLibraryDefault_swigregister(SimAppLibraryDefault_AppLibraryDefault)

class SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary(SimAppLibraryDefault_AppLibraryDefault):
    __swig_setmethods__ = {}
    for _s in [SimAppLibraryDefault_AppLibraryDefault]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary, name, value)
    __swig_getmethods__ = {}
    for _s in [SimAppLibraryDefault_AppLibraryDefault]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.new_SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary__clone(self, f, c)
    __swig_destroy__ = _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.delete_SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary
    __del__ = lambda self: None
SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_swigregister = _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_swigregister
SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_swigregister(SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary)

class SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence(base.sequence_common):
    __swig_setmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence, name, value)
    __swig_getmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.new_SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def assign(self, n, x):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_assign(self, n, x)

    def begin(self, *args):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_begin(self, *args)

    def end(self, *args):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_end(self, *args)

    def rbegin(self, *args):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_rbegin(self, *args)

    def rend(self, *args):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_rend(self, *args)

    def at(self, *args):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_at(self, *args)

    def front(self, *args):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_front(self, *args)

    def back(self, *args):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_back(self, *args)

    def push_back(self, *args):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_push_back(self, *args)

    def pop_back(self):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_pop_back(self)

    def detach_back(self, pop=True):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_detach_back(self, pop)

    def insert(self, *args):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_insert(self, *args)

    def erase(self, *args):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_erase(self, *args)

    def detach(self, position, r, erase=True):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_detach(self, position, r, erase)

    def swap(self, x):
        return _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_swap(self, x)
    __swig_destroy__ = _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.delete_SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence
    __del__ = lambda self: None
SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_swigregister = _SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_swigregister
SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence_swigregister(SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence)

# This file is compatible with both classic and new-style classes.

