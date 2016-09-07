/* File : SimTranslator.i */
%module(directors="1") SimModel_Translator
%include "std_string.i"
%include "stl.i"

%{
#define SWIG_FILE_WITH_INIT
#include "SimTranslator.h"
%}

%import  "..\SimModel_Hierachy\SimHierarchy.i"

%pythoncode %{
__sim__hierarchy__ = SimModel_Hierachy.SimHierarchy()
%}

/* Let's just grab the original header file here */
%include ".\framework\SimTranslator.h"

%pythoncode %{
def __re_init__(self):
        self.__orig_init__()
        self.setTranslator(__sim__hierarchy__)

SimTranslator.__orig_init__ = SimTranslator.__init__
SimTranslator.__init__ = __re_init__
del __re_init__
%}
