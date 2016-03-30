/* File : SimMapping.i */
%module(directors="1") SimModel_Mapping
%include "std_string.i"
%include "stl.i"

%{
#define SWIG_FILE_WITH_INIT
#include "SimMapping.h"
%}

/* Let's just grab the original header file here */
%include ".\framework\SimMapping.h"

%template(MappedComponentList) std::vector<MappedComponent>;
%template(MappedComponentRefList) std::vector<MappedComponent*>;
%template(MappedPropertyList) std::vector<MappedProperty>;