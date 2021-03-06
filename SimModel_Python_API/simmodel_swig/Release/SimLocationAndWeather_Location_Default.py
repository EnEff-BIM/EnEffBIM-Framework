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
            fp, pathname, description = imp.find_module('_SimLocationAndWeather_Location_Default', [dirname(__file__)])
        except ImportError:
            import _SimLocationAndWeather_Location_Default
            return _SimLocationAndWeather_Location_Default
        if fp is not None:
            try:
                _mod = imp.load_module('_SimLocationAndWeather_Location_Default', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _SimLocationAndWeather_Location_Default = swig_import_helper()
    del swig_import_helper
else:
    import _SimLocationAndWeather_Location_Default
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
import SimLocationAndWeather_DesignDay_Default
class SimLocationAndWeather_Location(SimLocationAndWeather_DesignDay_Default.SimLocationAndWeather):
    __swig_setmethods__ = {}
    for _s in [SimLocationAndWeather_DesignDay_Default.SimLocationAndWeather]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimLocationAndWeather_Location, name, value)
    __swig_getmethods__ = {}
    for _s in [SimLocationAndWeather_DesignDay_Default.SimLocationAndWeather]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimLocationAndWeather_Location, name)
    __repr__ = _swig_repr

    def SimLocationAndWeather_Name(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_SimLocationAndWeather_Name(self, *args)

    def SimLocationAndWeather_Latitude(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_SimLocationAndWeather_Latitude(self, *args)

    def SimLocationAndWeather_Longitude(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_SimLocationAndWeather_Longitude(self, *args)

    def SimLocationAndWeather_TimeZone(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_SimLocationAndWeather_TimeZone(self, *args)

    def SimLocationAndWeather_Elevation(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_SimLocationAndWeather_Elevation(self, *args)

    def Site_HeightVariation_WindSpdProfExp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_HeightVariation_WindSpdProfExp(self, *args)

    def Site_HeightVariation_WindSpdProfBndLayerThick(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_HeightVariation_WindSpdProfBndLayerThick(self, *args)

    def Site_HeightVariation_AirTempGradCoeff(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_HeightVariation_AirTempGradCoeff(self, *args)

    def Site_GndTemp_BldgSurface_JanGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_BldgSurface_JanGndTemp(self, *args)

    def Site_GndTemp_BldgSurface_FebGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_BldgSurface_FebGndTemp(self, *args)

    def Site_GndTemp_BldgSurface_MarchGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_BldgSurface_MarchGndTemp(self, *args)

    def Site_GndTemp_BldgSurface_AprilGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_BldgSurface_AprilGndTemp(self, *args)

    def Site_GndTemp_BldgSurface_MayGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_BldgSurface_MayGndTemp(self, *args)

    def Site_GndTemp_BldgSurface_JuneGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_BldgSurface_JuneGndTemp(self, *args)

    def Site_GndTemp_BldgSurface_JulyGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_BldgSurface_JulyGndTemp(self, *args)

    def Site_GndTemp_BldgSurface_AugGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_BldgSurface_AugGndTemp(self, *args)

    def Site_GndTemp_BldgSurface_SepGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_BldgSurface_SepGndTemp(self, *args)

    def Site_GndTemp_BldgSurface_OctGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_BldgSurface_OctGndTemp(self, *args)

    def Site_GndTemp_BldgSurface_NovGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_BldgSurface_NovGndTemp(self, *args)

    def Site_GndTemp_BldgSurface_DecGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_BldgSurface_DecGndTemp(self, *args)

    def Site_GndTemp_FCfactorMthd_JanGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_FCfactorMthd_JanGndTemp(self, *args)

    def Site_GndTemp_FCfactorMthd_FebGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_FCfactorMthd_FebGndTemp(self, *args)

    def Site_GndTemp_FCfactorMthd_MarchGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_FCfactorMthd_MarchGndTemp(self, *args)

    def Site_GndTemp_FCfactorMthd_AprilGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_FCfactorMthd_AprilGndTemp(self, *args)

    def Site_GndTemp_FCfactorMthd_MayGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_FCfactorMthd_MayGndTemp(self, *args)

    def Site_GndTemp_FCfactorMthd_JuneGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_FCfactorMthd_JuneGndTemp(self, *args)

    def Site_GndTemp_FCfactorMthd_JulyGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_FCfactorMthd_JulyGndTemp(self, *args)

    def Site_GndTemp_FCfactorMthd_AugGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_FCfactorMthd_AugGndTemp(self, *args)

    def Site_GndTemp_FCfactorMthd_SepGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_FCfactorMthd_SepGndTemp(self, *args)

    def Site_GndTemp_FCfactorMthd_OctGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_FCfactorMthd_OctGndTemp(self, *args)

    def Site_GndTemp_FCfactorMthd_NovGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_FCfactorMthd_NovGndTemp(self, *args)

    def Site_GndTemp_FCfactorMthd_DecGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_FCfactorMthd_DecGndTemp(self, *args)

    def Site_GndTemp_Shallow_JanSurfGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Shallow_JanSurfGndTemp(self, *args)

    def Site_GndTemp_Shallow_FebSurfGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Shallow_FebSurfGndTemp(self, *args)

    def Site_GndTemp_Shallow_MarchSurfGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Shallow_MarchSurfGndTemp(self, *args)

    def Site_GndTemp_Shallow_AprilSurfGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Shallow_AprilSurfGndTemp(self, *args)

    def Site_GndTemp_Shallow_MaySurfGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Shallow_MaySurfGndTemp(self, *args)

    def Site_GndTemp_Shallow_JuneSurfGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Shallow_JuneSurfGndTemp(self, *args)

    def Site_GndTemp_Shallow_JulySurfGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Shallow_JulySurfGndTemp(self, *args)

    def Site_GndTemp_Shallow_AugSurfGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Shallow_AugSurfGndTemp(self, *args)

    def Site_GndTemp_Shallow_SepSurfGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Shallow_SepSurfGndTemp(self, *args)

    def Site_GndTemp_Shallow_OctSurfGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Shallow_OctSurfGndTemp(self, *args)

    def Site_GndTemp_Shallow_NovSurfGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Shallow_NovSurfGndTemp(self, *args)

    def Site_GndTemp_Shallow_DecSurfGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Shallow_DecSurfGndTemp(self, *args)

    def Site_GndTemp_Deep_JanDeepGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Deep_JanDeepGndTemp(self, *args)

    def Site_GndTemp_Deep_FebDeepGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Deep_FebDeepGndTemp(self, *args)

    def Site_GndTemp_Deep_MarchDeepGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Deep_MarchDeepGndTemp(self, *args)

    def Site_GndTemp_Deep_AprilDeepGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Deep_AprilDeepGndTemp(self, *args)

    def Site_GndTemp_Deep_MayDeepGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Deep_MayDeepGndTemp(self, *args)

    def Site_GndTemp_Deep_JuneDeepGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Deep_JuneDeepGndTemp(self, *args)

    def Site_GndTemp_Deep_JulyDeepGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Deep_JulyDeepGndTemp(self, *args)

    def Site_GndTemp_Deep_AugDeepGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Deep_AugDeepGndTemp(self, *args)

    def Site_GndTemp_Deep_SepDeepGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Deep_SepDeepGndTemp(self, *args)

    def Site_GndTemp_Deep_OctDeepGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Deep_OctDeepGndTemp(self, *args)

    def Site_GndTemp_Deep_NovDeepGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Deep_NovDeepGndTemp(self, *args)

    def Site_GndTemp_Deep_DecDeepGndTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndTemp_Deep_DecDeepGndTemp(self, *args)

    def Site_GndReflect_JanGndReflect(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndReflect_JanGndReflect(self, *args)

    def Site_GndReflect_FebGndReflect(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndReflect_FebGndReflect(self, *args)

    def Site_GndReflect_MarchGndReflect(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndReflect_MarchGndReflect(self, *args)

    def Site_GndReflect_AprilGndReflect(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndReflect_AprilGndReflect(self, *args)

    def Site_GndReflect_MayGndReflect(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndReflect_MayGndReflect(self, *args)

    def Site_GndReflect_JuneGndReflect(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndReflect_JuneGndReflect(self, *args)

    def Site_GndReflect_JulyGndReflect(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndReflect_JulyGndReflect(self, *args)

    def Site_GndReflect_AugGndReflect(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndReflect_AugGndReflect(self, *args)

    def Site_GndReflect_SepGndReflect(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndReflect_SepGndReflect(self, *args)

    def Site_GndReflect_OctGndReflect(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndReflect_OctGndReflect(self, *args)

    def Site_GndReflect_NovGndReflect(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndReflect_NovGndReflect(self, *args)

    def Site_GndReflect_DecGndReflect(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndReflect_DecGndReflect(self, *args)

    def Site_GndReflect_SnowMod_GndReflectedSolaThermdifier(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndReflect_SnowMod_GndReflectedSolaThermdifier(self, *args)

    def Site_GndReflect_SnowMod_DylghtGndReflectSolarMod(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_GndReflect_SnowMod_DylghtGndReflectSolarMod(self, *args)

    def Site_WaterMainsTemp_CalcMeth(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_WaterMainsTemp_CalcMeth(self, *args)

    def Site_WaterMainsTemp_TempSchedName(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_WaterMainsTemp_TempSchedName(self, *args)

    def Site_WaterMainsTemp_AnnualAvgOutdrAirTemp(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_WaterMainsTemp_AnnualAvgOutdrAirTemp(self, *args)

    def Site_WaterMainsTemp_MaxDiffInMonthlyAvgOutdrAirTemps(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_WaterMainsTemp_MaxDiffInMonthlyAvgOutdrAirTemps(self, *args)

    def Site_Precipitation_PrecipModelType(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_Precipitation_PrecipModelType(self, *args)

    def Site_Precipitation_DesignLevelTotalAnnualPrecip(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_Precipitation_DesignLevelTotalAnnualPrecip(self, *args)

    def Site_Precipitation_PrecipRatesSchedName(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_Precipitation_PrecipRatesSchedName(self, *args)

    def Site_Precipitation_AvgTotalAnnualPrecip(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_Precipitation_AvgTotalAnnualPrecip(self, *args)

    def Site_SolarAndVisibleSpectrum_Name(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_SolarAndVisibleSpectrum_Name(self, *args)

    def Site_SolarAndVisibleSpectrum_SpectrumDataMethod(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_SolarAndVisibleSpectrum_SpectrumDataMethod(self, *args)

    def Site_SolarAndVisibleSpectrum_SolarSpectrumDataObjectName(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_SolarAndVisibleSpectrum_SolarSpectrumDataObjectName(self, *args)

    def Site_SolarAndVisibleSpectrum_VisibleSpectrumDataObjectName(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_SolarAndVisibleSpectrum_VisibleSpectrumDataObjectName(self, *args)

    def Site_SpectrumData_Name(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_SpectrumData_Name(self, *args)

    def Site_SpectrumData_SpectrumDataType(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_SpectrumData_SpectrumDataType(self, *args)

    def Site_SpectrumData_Value_1_107_Wavelength(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_SpectrumData_Value_1_107_Wavelength(self, *args)

    def Site_SpectrumData_Value_1_107_Spectrum(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Site_SpectrumData_Value_1_107_Spectrum(self, *args)

    def __init__(self, *args):
        this = _SimLocationAndWeather_Location_Default.new_SimLocationAndWeather_Location(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location__clone(self, f, c)
    __swig_destroy__ = _SimLocationAndWeather_Location_Default.delete_SimLocationAndWeather_Location
    __del__ = lambda self: None
SimLocationAndWeather_Location_swigregister = _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_swigregister
SimLocationAndWeather_Location_swigregister(SimLocationAndWeather_Location)

class SimLocationAndWeather_Location_Default(SimLocationAndWeather_Location):
    __swig_setmethods__ = {}
    for _s in [SimLocationAndWeather_Location]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimLocationAndWeather_Location_Default, name, value)
    __swig_getmethods__ = {}
    for _s in [SimLocationAndWeather_Location]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimLocationAndWeather_Location_Default, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimLocationAndWeather_Location_Default.new_SimLocationAndWeather_Location_Default(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def _clone(self, f=0, c=None):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default__clone(self, f, c)
    __swig_destroy__ = _SimLocationAndWeather_Location_Default.delete_SimLocationAndWeather_Location_Default
    __del__ = lambda self: None
SimLocationAndWeather_Location_Default_swigregister = _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default_swigregister
SimLocationAndWeather_Location_Default_swigregister(SimLocationAndWeather_Location_Default)

class SimLocationAndWeather_Location_Default_sequence(base.sequence_common):
    __swig_setmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimLocationAndWeather_Location_Default_sequence, name, value)
    __swig_getmethods__ = {}
    for _s in [base.sequence_common]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimLocationAndWeather_Location_Default_sequence, name)
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _SimLocationAndWeather_Location_Default.new_SimLocationAndWeather_Location_Default_sequence(*args)
        try:
            self.this.append(this)
        except:
            self.this = this

    def assign(self, n, x):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default_sequence_assign(self, n, x)

    def begin(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default_sequence_begin(self, *args)

    def end(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default_sequence_end(self, *args)

    def rbegin(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default_sequence_rbegin(self, *args)

    def rend(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default_sequence_rend(self, *args)

    def at(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default_sequence_at(self, *args)

    def front(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default_sequence_front(self, *args)

    def back(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default_sequence_back(self, *args)

    def push_back(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default_sequence_push_back(self, *args)

    def pop_back(self):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default_sequence_pop_back(self)

    def detach_back(self, pop=True):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default_sequence_detach_back(self, pop)

    def insert(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default_sequence_insert(self, *args)

    def erase(self, *args):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default_sequence_erase(self, *args)

    def detach(self, position, r, erase=True):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default_sequence_detach(self, position, r, erase)

    def swap(self, x):
        return _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default_sequence_swap(self, x)
    __swig_destroy__ = _SimLocationAndWeather_Location_Default.delete_SimLocationAndWeather_Location_Default_sequence
    __del__ = lambda self: None
SimLocationAndWeather_Location_Default_sequence_swigregister = _SimLocationAndWeather_Location_Default.SimLocationAndWeather_Location_Default_sequence_swigregister
SimLocationAndWeather_Location_Default_sequence_swigregister(SimLocationAndWeather_Location_Default_sequence)

# This file is compatible with both classic and new-style classes.


