#ifndef SIM_PY_CALLBACK_H
#define SIM_PY_CALLBACK_H

#include <string>
#include <vector>
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace schema::simxml::SimModelCore;

class __declspec(dllexport) SimPyCallBack
{
   public:
      SimPyCallBack() {}

      virtual ~SimPyCallBack() {}
	  // load SimModel class
	  virtual void loadSimClassObj(std::string _dataName, std::vector<std::string>& _simClassList) = 0;
	  virtual void loadSimGeomClassObj(std::string _geomDataName, std::vector<std::string>& _simGeomClassList) = 0;
	  virtual void loadSimSysClassObj(std::string _sysDataName, std::vector<std::string>& _simSysClassList) = 0;
	  // get specified SimModel class object by given object id
	  virtual SimRoot* getSimClassObj(std::string _id) = 0;
	  // execute specified function of given class: get Id value
	  virtual std::string getReferenceId(std::string _classId, std::string _propertyName) = 0;
	  // I/O function
	  virtual void getIO(std::string _name) {}
};

#endif
