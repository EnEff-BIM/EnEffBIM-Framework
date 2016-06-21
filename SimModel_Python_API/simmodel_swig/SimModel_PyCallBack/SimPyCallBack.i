/* File : SimPyCallBack.i */
%module(directors="1") SimModel_PyCallBack
%include "std_string.i"
%include "stl.i"

%{
#define SWIG_FILE_WITH_INIT
#include "SimPyCallBack.h"
%}

%import  "..\SimModel\SimModel.i"

%feature("director") SimPyCallBack;

/* Let's just grab the original header file here */
%include ".\framework\SimPyCallBack.h"

%pythoncode "filter.py"

%template(VectorString) std::vector<std::string>;