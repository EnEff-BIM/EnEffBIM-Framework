/* File : SimLocationAndWeather_DesignDay_Default.i */
%module(directors="1") SimLocationAndWeather_DesignDay_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimLocationAndWeather_DesignDay_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimLocationAndWeather.hxx"
%include "..\SimModel\framework\SimLocationAndWeather_DesignDay.hxx"
%include "..\SimModel\framework\SimLocationAndWeather_DesignDay_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimLocationAndWeather_DesignDay_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimLocationAndWeather_DesignDay_Default, false>;
		
		// property method
	}
  }
}