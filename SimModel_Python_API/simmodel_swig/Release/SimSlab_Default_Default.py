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
            fp, pathname, description = imp.find_module('_SimSlab_Default_Default', [dirname(__file__)])
        except ImportError:
            import _SimSlab_Default_Default
            return _SimSlab_Default_Default
        if fp is not None:
            try:
                _mod = imp.load_module('_SimSlab_Default_Default', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _SimSlab_Default_Default = swig_import_helper()
    del swig_import_helper
else:
    import _SimSlab_Default_Default
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
class SimSlab(base.SimBuildingElement):
    __swig_setmethods__ = {}
    for _s in [base.SimBuildingElement]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimSlab, name, value)
    __swig_getmethods__ = {}
    for _s in [base.SimBuildingElement]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimSlab, name)
    __repr__ = _swig_repr

    def SurfProp_HeatTransAlg_SurfName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfProp_HeatTransAlg_SurfName(self, *args)

    def SurfProp_HeatTransAlg_Algorithm(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfProp_HeatTransAlg_Algorithm(self, *args)

    def SurfProp_HeatTransAlg_SurfList_Name(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfProp_HeatTransAlg_SurfList_Name(self, *args)

    def SurfProp_HeatTransAlg_SurfList_Algorithm(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfProp_HeatTransAlg_SurfList_Algorithm(self, *args)

    def SurfProp_HeatTransAlg_SurfList_SurfaceName_1_6(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfProp_HeatTransAlg_SurfList_SurfaceName_1_6(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_Name(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_Name(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyVertWallEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyVertWallEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyVertWallUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyVertWallUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyStableHorzEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyStableHorzEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyStableHorzEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyStableHorzEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyUnstableHorzEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyUnstableHorzEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyUnstableHorzEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyUnstableHorzEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyStableTiltedEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyStableTiltedEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyStableTiltedEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyStableTiltedEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyUnstableTiltedEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyUnstableTiltedEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyUnstableTiltedEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyUnstableTiltedEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyWindowsEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyWindowsEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyWindowsEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_SimpleBouyancyWindowsEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolVertWallEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolVertWallEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolVertWallEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolVertWallEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolStableHorzEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolStableHorzEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolStableHorzEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolStableHorzEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolUnstableHorzEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolUnstableHorzEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolUnstableHorzEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolUnstableHorzEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolHeatedFloorEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolHeatedFloorEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolHeatedFloorEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolHeatedFloorEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolChilledClngEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolChilledClngEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolChilledClngEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolChilledClngEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolStableTiltedEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolStableTiltedEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolStableTiltedEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolStableTiltedEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolUnstableTiltedEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolUnstableTiltedEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolUnstableTiltedEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolUnstableTiltedEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolWindowEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolWindowEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolWindowEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_FloorHeatClngCoolWindowEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingVertWallEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingVertWallEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingVertWallEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingVertWallEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingHeatedWallEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingHeatedWallEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingHeatedWallEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingHeatedWallEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingStableHorzEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingStableHorzEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingStableHorzEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingStableHorzEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingUnstableHorzEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingUnstableHorzEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingUnstableHorzEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingUnstableHorzEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingStableTiltedEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingStableTiltedEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingStableTiltedEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingStableTiltedEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingUnstableTiltedEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingUnstableTiltedEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingUnstableTiltedEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingUnstableTiltedEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingWindowEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingWindowEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingWindowEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_WallPanelHeatingWindowEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterVertWallEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterVertWallEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterVertWallEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterVertWallEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterVertWallsNearHeaterEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterVertWallsNearHeaterEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterVertWallsNearHeaterEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterVertWallsNearHeaterEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterStableHorzEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterStableHorzEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterStableHorzEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterStableHorzEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterUnstableHorzEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterUnstableHorzEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterUnstableHorzEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterUnstableHorzEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterStableTiltedEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterStableTiltedEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterStableTiltedEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterStableTiltedEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterUnstableTiltedEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterUnstableTiltedEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterUnstableTiltedEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterUnstableTiltedEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterWindowsEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterWindowsEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterWindowsEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_ConvectZoneHeaterWindowsEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_CentralAirDiffuserWallEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_CentralAirDiffuserWallEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_CentralAirDiffuserWallEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_CentralAirDiffuserWallEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_CentralAirDiffuserClngEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_CentralAirDiffuserClngEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_CentralAirDiffuserClngEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_CentralAirDiffuserClngEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_CentralAirDiffuserFloorEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_CentralAirDiffuserFloorEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_CentralAirDiffuserFloorEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_CentralAirDiffuserFloorEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_CentralAirDiffuserWindowEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_CentralAirDiffuserWindowEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_CentralAirDiffuserWindowEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_CentralAirDiffuserWindowEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircVertWallEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircVertWallEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircVertWallEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircVertWallEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircStableHorzEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircStableHorzEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircStableHorzEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircStableHorzEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircUnstableHorzEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircUnstableHorzEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircUnstableHorzEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircUnstableHorzEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircStableTiltedEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircStableTiltedEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircStableTiltedEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircStableTiltedEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircUnstableTiltedEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircUnstableTiltedEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircUnstableTiltedEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircUnstableTiltedEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircWindowEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircWindowEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircWindowEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MechZoneFanCircWindowEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeBouyancyAssistingFlowonWallsEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeBouyancyAssistingFlowonWallsEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeBouyancyAssistingFlowonWallsEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeBouyancyAssistingFlowonWallsEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeBouyancyOppossingFlowonWallsEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeBouyancyOppossingFlowonWallsEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeBouyancyOppossingFlowonWallsEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeBouyancyOppossingFlowonWallsEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeStableFloorEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeStableFloorEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeStableFloorEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeStableFloorEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeUnstableFloorEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeUnstableFloorEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeUnstableFloorEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeUnstableFloorEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeStableClngEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeStableClngEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeStableClngEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeStableClngEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeUnstableClngEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeUnstableClngEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeUnstableClngEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeUnstableClngEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeWindowEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeWindowEqtnSrc(self, *args)

    def SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeWindowEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_AdaptModelSelects_MixedRegimeWindowEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Outside_AdaptModelSelects_Name(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_AdaptModelSelects_Name(self, *args)

    def SurfConvectAlg_Outside_AdaptModelSelects_WindConvectWindwardVertWallEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_AdaptModelSelects_WindConvectWindwardVertWallEqtnSrc(self, *args)

    def SurfConvectAlg_Outside_AdaptModelSelects_WindConvectWindwardEqtnVertWallUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_AdaptModelSelects_WindConvectWindwardEqtnVertWallUserCurveName(self, *args)

    def SurfConvectAlg_Outside_AdaptModelSelects_WindConvectLeewardVertWallEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_AdaptModelSelects_WindConvectLeewardVertWallEqtnSrc(self, *args)

    def SurfConvectAlg_Outside_AdaptModelSelects_WindConvectLeewardVertWallEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_AdaptModelSelects_WindConvectLeewardVertWallEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Outside_AdaptModelSelects_WindConvectHorzRoOfEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_AdaptModelSelects_WindConvectHorzRoOfEqtnSrc(self, *args)

    def SurfConvectAlg_Outside_AdaptModelSelects_WindConvectHorzRoOfUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_AdaptModelSelects_WindConvectHorzRoOfUserCurveName(self, *args)

    def SurfConvectAlg_Outside_AdaptModelSelects_NaturalConvectVertWallEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_AdaptModelSelects_NaturalConvectVertWallEqtnSrc(self, *args)

    def SurfConvectAlg_Outside_AdaptModelSelects_NaturalConvectVertWallEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_AdaptModelSelects_NaturalConvectVertWallEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Outside_AdaptModelSelects_NaturalConvectStableHorzEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_AdaptModelSelects_NaturalConvectStableHorzEqtnSrc(self, *args)

    def SurfConvectAlg_Outside_AdaptModelSelects_NaturalConvectStableHorzEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_AdaptModelSelects_NaturalConvectStableHorzEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Outside_AdaptModelSelects_NaturalConvectUnstableHorzEqtnSrc(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_AdaptModelSelects_NaturalConvectUnstableHorzEqtnSrc(self, *args)

    def SurfConvectAlg_Outside_AdaptModelSelects_NaturalConvectUnstableHorzEqtnUserCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_AdaptModelSelects_NaturalConvectUnstableHorzEqtnUserCurveName(self, *args)

    def SurfConvectAlg_Inside_UserCurve_Name(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_UserCurve_Name(self, *args)

    def SurfConvectAlg_Inside_UserCurve_ReferenceTempforConvectHeatTransfer(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_UserCurve_ReferenceTempforConvectHeatTransfer(self, *args)

    def SurfConvectAlg_Inside_UserCurve_HcFuncOfTempDiffCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_UserCurve_HcFuncOfTempDiffCurveName(self, *args)

    def SurfConvectAlg_Inside_UserCurve_HcFuncOfTempDiffDivbyHeightCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_UserCurve_HcFuncOfTempDiffDivbyHeightCurveName(self, *args)

    def SurfConvectAlg_Inside_UserCurve_HcFuncOfAirChangeRateCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_UserCurve_HcFuncOfAirChangeRateCurveName(self, *args)

    def SurfConvectAlg_Inside_UserCurve_HcFuncOfAirSystemVolFlowRateDivbyZonePerimLengthCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Inside_UserCurve_HcFuncOfAirSystemVolFlowRateDivbyZonePerimLengthCurveName(self, *args)

    def SurfConvectAlg_Outside_UserCurve_Name(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_UserCurve_Name(self, *args)

    def SurfConvectAlg_Outside_UserCurve_WindSpeedTypeforCurve(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_UserCurve_WindSpeedTypeforCurve(self, *args)

    def SurfConvectAlg_Outside_UserCurve_HfFuncOfWindSpeedCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_UserCurve_HfFuncOfWindSpeedCurveName(self, *args)

    def SurfConvectAlg_Outside_UserCurve_HnFuncOfTempDiffCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_UserCurve_HnFuncOfTempDiffCurveName(self, *args)

    def SurfConvectAlg_Outside_UserCurve_HnFuncOfTempDiffDivbyHeightCurveName(self, *args):
        return _SimSlab_Default_Default.SimSlab_SurfConvectAlg_Outside_UserCurve_HnFuncOfTempDiffDivbyHeightCurveName(self, *args)

    def __init__(self, *args):
        this = _SimSlab_Default_Default.new_SimSlab(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimSlab_Default_Default.SimSlab__clone(self, f, c)
    __swig_destroy__ = _SimSlab_Default_Default.delete_SimSlab
    __del__ = lambda self: None
SimSlab_swigregister = _SimSlab_Default_Default.SimSlab_swigregister
SimSlab_swigregister(SimSlab)

class SimSlab_Default(SimSlab):
    __swig_setmethods__ = {}
    for _s in [SimSlab]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimSlab_Default, name, value)
    __swig_getmethods__ = {}
    for _s in [SimSlab]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimSlab_Default, name)
    __repr__ = _swig_repr

    def Name(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_Name(self, *args)

    def Representation(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_Representation(self, *args)

    def PredefinedSlabType(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_PredefinedSlabType(self, *args)

    def ConstructionType(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_ConstructionType(self, *args)

    def SlabIsExternal(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_SlabIsExternal(self, *args)

    def CompositeThermalTrans(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_CompositeThermalTrans(self, *args)

    def PhotoVotaicArrayOnElement(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_PhotoVotaicArrayOnElement(self, *args)

    def SlabThickness(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_SlabThickness(self, *args)

    def SlabPerimeter(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_SlabPerimeter(self, *args)

    def SlabGrossArea(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_SlabGrossArea(self, *args)

    def SlabNetArea(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_SlabNetArea(self, *args)

    def SlabGrossVolume(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_SlabGrossVolume(self, *args)

    def SlabNetVolume(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_SlabNetVolume(self, *args)

    def ClassRef_UniFormat(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_ClassRef_UniFormat(self, *args)

    def MaterialLayerSet(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_MaterialLayerSet(self, *args)

    def ConnectedSlabs(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_ConnectedSlabs(self, *args)

    def ConnectedWalls(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_ConnectedWalls(self, *args)

    def ConnectedBeams(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_ConnectedBeams(self, *args)

    def ConnectedColumns(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_ConnectedColumns(self, *args)

    def ContainingRamp(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_ContainingRamp(self, *args)

    def ContainingStair(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_ContainingStair(self, *args)

    def __init__(self, *args):
        this = _SimSlab_Default_Default.new_SimSlab_Default(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimSlab_Default_Default.SimSlab_Default__clone(self, f, c)
    __swig_destroy__ = _SimSlab_Default_Default.delete_SimSlab_Default
    __del__ = lambda self: None
SimSlab_Default_swigregister = _SimSlab_Default_Default.SimSlab_Default_swigregister
SimSlab_Default_swigregister(SimSlab_Default)

class SimSlab_Default_Default(SimSlab_Default):
    __swig_setmethods__ = {}
    for _s in [SimSlab_Default]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimSlab_Default_Default, name, value)
    __swig_getmethods__ = {}
    for _s in [SimSlab_Default]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimSlab_Default_Default, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimSlab_Default_Default.new_SimSlab_Default_Default(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimSlab_Default_Default.SimSlab_Default_Default__clone(self, f, c)
    __swig_destroy__ = _SimSlab_Default_Default.delete_SimSlab_Default_Default
    __del__ = lambda self: None
SimSlab_Default_Default_swigregister = _SimSlab_Default_Default.SimSlab_Default_Default_swigregister
SimSlab_Default_Default_swigregister(SimSlab_Default_Default)

class SimSlab_Default_Default_sequence(base.sequence_common):
    __swig_setmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimSlab_Default_Default_sequence, name, value)
    __swig_getmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimSlab_Default_Default_sequence, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimSlab_Default_Default.new_SimSlab_Default_Default_sequence(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def assign(self, n, x):
        return _SimSlab_Default_Default.SimSlab_Default_Default_sequence_assign(self, n, x)

    def begin(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_Default_sequence_begin(self, *args)

    def end(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_Default_sequence_end(self, *args)

    def rbegin(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_Default_sequence_rbegin(self, *args)

    def rend(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_Default_sequence_rend(self, *args)

    def at(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_Default_sequence_at(self, *args)

    def front(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_Default_sequence_front(self, *args)

    def back(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_Default_sequence_back(self, *args)

    def push_back(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_Default_sequence_push_back(self, *args)

    def pop_back(self):
        return _SimSlab_Default_Default.SimSlab_Default_Default_sequence_pop_back(self)

    def detach_back(self, pop=True):
        return _SimSlab_Default_Default.SimSlab_Default_Default_sequence_detach_back(self, pop)

    def insert(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_Default_sequence_insert(self, *args)

    def erase(self, *args):
        return _SimSlab_Default_Default.SimSlab_Default_Default_sequence_erase(self, *args)

    def detach(self, position, r, erase=True):
        return _SimSlab_Default_Default.SimSlab_Default_Default_sequence_detach(self, position, r, erase)

    def swap(self, x):
        return _SimSlab_Default_Default.SimSlab_Default_Default_sequence_swap(self, x)
    __swig_destroy__ = _SimSlab_Default_Default.delete_SimSlab_Default_Default_sequence
    __del__ = lambda self: None
SimSlab_Default_Default_sequence_swigregister = _SimSlab_Default_Default.SimSlab_Default_Default_sequence_swigregister
SimSlab_Default_Default_sequence_swigregister(SimSlab_Default_Default_sequence)

# This file is compatible with both classic and new-style classes.


