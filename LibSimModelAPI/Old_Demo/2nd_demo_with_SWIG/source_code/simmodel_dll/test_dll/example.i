/* File : example.i */
%module test_dll
%include "std_string.i"

%{
#include "./framework/SimRoot.hxx"
%}

/* Let's just grab the original header file here */
%include "./framework/SimRoot.hxx"

using namespace schema;
using namespace simxml;
using namespace SimModelCore;

