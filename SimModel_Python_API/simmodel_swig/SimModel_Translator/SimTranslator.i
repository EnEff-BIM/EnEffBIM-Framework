/* File : SimTranslator.i */
%module(directors="1") SimModel_Translator
%include "std_string.i"
%include "stl.i"

%{
#define SWIG_FILE_WITH_INIT
#include "SimTranslator.h"
%}

%import  "..\SimModel_Hierachy\SimHierarchy.i"

/* Let's just grab the original header file here */
%include ".\framework\SimTranslator.h"