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
            fp, pathname, description = imp.find_module('_SimWall_Wall_ExteriorAboveGrade', [dirname(__file__)])
        except ImportError:
            import _SimWall_Wall_ExteriorAboveGrade
            return _SimWall_Wall_ExteriorAboveGrade
        if fp is not None:
            try:
                _mod = imp.load_module('_SimWall_Wall_ExteriorAboveGrade', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _SimWall_Wall_ExteriorAboveGrade = swig_import_helper()
    del swig_import_helper
else:
    import _SimWall_Wall_ExteriorAboveGrade
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


import SimWall_Wall_Default
import base
class SimWall_Wall_ExteriorAboveGrade(SimWall_Wall_Default.SimWall_Wall):
    __swig_setmethods__ = {}
    for _s in [SimWall_Wall_Default.SimWall_Wall]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimWall_Wall_ExteriorAboveGrade, name, value)
    __swig_getmethods__ = {}
    for _s in [SimWall_Wall_Default.SimWall_Wall]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimWall_Wall_ExteriorAboveGrade, name)
    __repr__ = _swig_repr

    def ContainedBldgElementArrays(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_ContainedBldgElementArrays(self, *args)

    def Name(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_Name(self, *args)

    def Representation(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_Representation(self, *args)

    def ConstructionType(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_ConstructionType(self, *args)

    def WallIsExternal(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_WallIsExternal(self, *args)

    def CompositeThermalTrans(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_CompositeThermalTrans(self, *args)

    def PhotoVotaicArrayOnElement(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_PhotoVotaicArrayOnElement(self, *args)

    def WallHeight(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_WallHeight(self, *args)

    def WallLength(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_WallLength(self, *args)

    def WallThickness(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_WallThickness(self, *args)

    def WallGrossSideArea(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_WallGrossSideArea(self, *args)

    def WallNetSideArea(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_WallNetSideArea(self, *args)

    def WallGrossVolume(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_WallGrossVolume(self, *args)

    def WallNetVolume(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_WallNetVolume(self, *args)

    def ClassRef_UniFormat(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_ClassRef_UniFormat(self, *args)

    def MaterialLayerSet(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_MaterialLayerSet(self, *args)

    def ConnectedSlabs(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_ConnectedSlabs(self, *args)

    def ConnectedWalls(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_ConnectedWalls(self, *args)

    def SimWall_Name(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_SimWall_Name(self, *args)

    def SimWall_SurfType(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_SimWall_SurfType(self, *args)

    def SimWall_ConstructionName(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_SimWall_ConstructionName(self, *args)

    def SimWall_ZoneName(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_SimWall_ZoneName(self, *args)

    def SimWall_OutsdBndCond(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_SimWall_OutsdBndCond(self, *args)

    def SimWall_OutsdBndCondObject(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_SimWall_OutsdBndCondObject(self, *args)

    def SimWall_SunExposure(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_SimWall_SunExposure(self, *args)

    def SimWall_WindExposure(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_SimWall_WindExposure(self, *args)

    def SimWall_ViewFactToGnd(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_SimWall_ViewFactToGnd(self, *args)

    def SimWall_NumbVerts(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_SimWall_NumbVerts(self, *args)

    def SimWall_Vertex_1_120_X_Coord(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_SimWall_Vertex_1_120_X_Coord(self, *args)

    def SimWall_Vertex_1_120_Y_Coord(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_SimWall_Vertex_1_120_Y_Coord(self, *args)

    def SimWall_Vertex_1_120_Z_Coord(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_SimWall_Vertex_1_120_Z_Coord(self, *args)

    def SurfProp_HeatTransAlg_MultSurf_Name(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_SurfProp_HeatTransAlg_MultSurf_Name(self, *args)

    def SurfProp_HeatTransAlg_MultSurf_SurfType(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_SurfProp_HeatTransAlg_MultSurf_SurfType(self, *args)

    def SurfProp_HeatTransAlg_MultSurf_Algorithm(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_SurfProp_HeatTransAlg_MultSurf_Algorithm(self, *args)

    def T24ConstructStatus3(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_T24ConstructStatus3(self, *args)

    def __init__(self, *args):
        this = _SimWall_Wall_ExteriorAboveGrade.new_SimWall_Wall_ExteriorAboveGrade(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade__clone(self, f, c)
    __swig_destroy__ = _SimWall_Wall_ExteriorAboveGrade.delete_SimWall_Wall_ExteriorAboveGrade
    __del__ = lambda self: None
SimWall_Wall_ExteriorAboveGrade_swigregister = _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_swigregister
SimWall_Wall_ExteriorAboveGrade_swigregister(SimWall_Wall_ExteriorAboveGrade)

class SimWall_Wall_ExteriorAboveGrade_sequence(base.sequence_common):
    __swig_setmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimWall_Wall_ExteriorAboveGrade_sequence, name, value)
    __swig_getmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimWall_Wall_ExteriorAboveGrade_sequence, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimWall_Wall_ExteriorAboveGrade.new_SimWall_Wall_ExteriorAboveGrade_sequence(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def assign(self, n, x):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_sequence_assign(self, n, x)

    def begin(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_sequence_begin(self, *args)

    def end(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_sequence_end(self, *args)

    def rbegin(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_sequence_rbegin(self, *args)

    def rend(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_sequence_rend(self, *args)

    def at(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_sequence_at(self, *args)

    def front(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_sequence_front(self, *args)

    def back(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_sequence_back(self, *args)

    def push_back(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_sequence_push_back(self, *args)

    def pop_back(self):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_sequence_pop_back(self)

    def detach_back(self, pop=True):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_sequence_detach_back(self, pop)

    def insert(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_sequence_insert(self, *args)

    def erase(self, *args):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_sequence_erase(self, *args)

    def detach(self, position, r, erase=True):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_sequence_detach(self, position, r, erase)

    def swap(self, x):
        return _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_sequence_swap(self, x)
    __swig_destroy__ = _SimWall_Wall_ExteriorAboveGrade.delete_SimWall_Wall_ExteriorAboveGrade_sequence
    __del__ = lambda self: None
SimWall_Wall_ExteriorAboveGrade_sequence_swigregister = _SimWall_Wall_ExteriorAboveGrade.SimWall_Wall_ExteriorAboveGrade_sequence_swigregister
SimWall_Wall_ExteriorAboveGrade_sequence_swigregister(SimWall_Wall_ExteriorAboveGrade_sequence)

# This file is compatible with both classic and new-style classes.


