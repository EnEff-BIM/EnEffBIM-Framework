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
            fp, pathname, description = imp.find_module('_SimModel_Translator', [dirname(__file__)])
        except ImportError:
            import _SimModel_Translator
            return _SimModel_Translator
        if fp is not None:
            try:
                _mod = imp.load_module('_SimModel_Translator', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _SimModel_Translator = swig_import_helper()
    del swig_import_helper
else:
    import _SimModel_Translator
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
    __swig_destroy__ = _SimModel_Translator.delete_SwigPyIterator
    __del__ = lambda self: None

    def value(self):
        return _SimModel_Translator.SwigPyIterator_value(self)

    def incr(self, n=1):
        return _SimModel_Translator.SwigPyIterator_incr(self, n)

    def decr(self, n=1):
        return _SimModel_Translator.SwigPyIterator_decr(self, n)

    def distance(self, x):
        return _SimModel_Translator.SwigPyIterator_distance(self, x)

    def equal(self, x):
        return _SimModel_Translator.SwigPyIterator_equal(self, x)

    def copy(self):
        return _SimModel_Translator.SwigPyIterator_copy(self)

    def next(self):
        return _SimModel_Translator.SwigPyIterator_next(self)

    def __next__(self):
        return _SimModel_Translator.SwigPyIterator___next__(self)

    def previous(self):
        return _SimModel_Translator.SwigPyIterator_previous(self)

    def advance(self, n):
        return _SimModel_Translator.SwigPyIterator_advance(self, n)

    def __eq__(self, x):
        return _SimModel_Translator.SwigPyIterator___eq__(self, x)

    def __ne__(self, x):
        return _SimModel_Translator.SwigPyIterator___ne__(self, x)

    def __iadd__(self, n):
        return _SimModel_Translator.SwigPyIterator___iadd__(self, n)

    def __isub__(self, n):
        return _SimModel_Translator.SwigPyIterator___isub__(self, n)

    def __add__(self, n):
        return _SimModel_Translator.SwigPyIterator___add__(self, n)

    def __sub__(self, *args):
        return _SimModel_Translator.SwigPyIterator___sub__(self, *args)
    def __iter__(self):
        return self
SwigPyIterator_swigregister = _SimModel_Translator.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

import SimModel_Hierachy
import SimModel
import base

__sim__hierarchy__ = SimModel_Hierachy.SimHierarchy()

class SimTranslator(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimTranslator, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SimTranslator, name)
    __repr__ = _swig_repr

    def __init__(self):
        this = _SimModel_Translator.new_SimTranslator()
        try:
            self.this.append(this)
        except:
            self.this = this

    def setTranslator(self, _simHierarchyObj):
        return _SimModel_Translator.SimTranslator_setTranslator(self, _simHierarchyObj)

    def loadSimModel(self, _geoName, _sysName):
        return _SimModel_Translator.SimTranslator_loadSimModel(self, _geoName, _sysName)

    def getSimHierarchy(self):
        return _SimModel_Translator.SimTranslator_getSimHierarchy(self)

    def getSimMappedData(self, _name):
        return _SimModel_Translator.SimTranslator_getSimMappedData(self, _name)
    __swig_destroy__ = _SimModel_Translator.delete_SimTranslator
    __del__ = lambda self: None
SimTranslator_swigregister = _SimModel_Translator.SimTranslator_swigregister
SimTranslator_swigregister(SimTranslator)


def __re_init__(self):
        self.__orig_init__()
        self.setTranslator(__sim__hierarchy__)

SimTranslator.__orig_init__ = SimTranslator.__init__
SimTranslator.__init__ = __re_init__
del __re_init__

# This file is compatible with both classic and new-style classes.


