/* File : SimHierarchy.i */
%module(directors="1") SimModel_Hierachy
%include "std_string.i"
%include "stl.i"

%{
#define SWIG_FILE_WITH_INIT
#include "SimHierarchy.h"
%}


%import  "..\SimModel\SimModel.i"
/* Let's just grab the original header file here */
%include ".\framework\SimHierarchy.h"

%template(SimHierarchyNodeList) std::vector<SimHierarchyNode>;
%template(SimHierarchyNodeRefList) std::vector<SimHierarchyNode*>;