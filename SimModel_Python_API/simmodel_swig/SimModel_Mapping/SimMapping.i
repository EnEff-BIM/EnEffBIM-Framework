/* File : SimMapping.i */
%module(directors="1") SimModel_Mapping
%include "std_string.i"
%include "stl.i"

%{
#define SWIG_FILE_WITH_INIT
#include "SimMapping.h"
%}

%ignore MappedProperty::setPropertyName(std::string _name);
%ignore MappedProperty::setPropertyLocation(std::string _location);
%ignore MappedProperty::setValueType(std::string _type);
%ignore MappedProperty::setValueNumber(double _number);
%ignore MappedProperty::setValueString(std::string _string);
%ignore MappedProperty::setValueMatrix(std::vector<std::vector<double> >& _matrix);
%ignore MappedProperty::setRecordInstance(std::string _recordInstance);
%ignore MappedProperty::setRecordLocation(std::string _recordLocation);

%ignore setMappingRuleName(MappedComponent& _mapCom, std::string _mapName);
%ignore setTargetComponentName(MappedComponent& _mapCom, std::string _targetName);
%ignore setTargetLocation(MappedComponent& _mapCom, std::string _targetLocation);

%ignore MappedComponent::addUnmappedSimHierarchyNode(SimHierarchyNode& _simNode);
%ignore MappedComponent::addMappedProperty(MappedProperty& _mapPro);

%ignore SimMappedData::translator(SimHierarchy& _simHierarchy, std::string _name);

/* Let's just grab the original header file here */
%include ".\framework\SimMapping.h"

%pythoncode %{
def getValue(self):
        return getattr(self, "getValue"+self.getValueType())()

MappedProperty.getPropertyValue = getValue
%}


%template(MappedComponentList) std::vector<MappedComponent>;
%template(MappedComponentRefList) std::vector<MappedComponent*>;
%template(MappedPropertyList) std::vector<MappedProperty>;

%template(VectorDouble) std::vector<double>;
%template(VectorOfVectorDouble) std::vector<std::vector<double> >;