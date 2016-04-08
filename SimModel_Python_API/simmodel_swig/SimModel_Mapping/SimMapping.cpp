#include "SimMapping.h"
#include "../SimModel_Hierachy/SimHierarchy.h"

// set property name
void MappedProperty::setPropertyName(std::string _name)
{
	propertyName = _name;
}

// set property location
void MappedProperty::setPropertyLocation(std::string _location)
{
	propertyLocation = _location;
}

// set property value type
void MappedProperty::setValueType(std::string _type)
{
	propertyValueType = _type;
}

// set int, float double value
void MappedProperty::setValueNumber(double _number)
{
	propertyValueNumber = _number;
}

// set string value
void MappedProperty::setValueString(std::string _string)
{
	propertyValueString = _string;
}

// set matrix value
void MappedProperty::setValueMatrix(std::vector<std::vector<double> >& _matrix)
{
	propertyValueMatrix = _matrix;
}

// set record instance
void MappedProperty::setRecordInstance(std::string _recordInstance)
{
	recordInstance = _recordInstance;
}

// set record location
void MappedProperty::setRecordLocation(std::string _recordLocation)
{
	recordLocation = _recordLocation;
}

// get property name
std::string MappedProperty::getPropertyName()
{
	return propertyName;
}

// get property location
std::string MappedProperty::getPropertyLocation()
{
	return propertyLocation;
}

// get property value type
std::string MappedProperty::getValueType()
{
	return propertyValueType;
}

// get int, float double value
double MappedProperty::getValueNumber()
{
	return propertyValueNumber;
}

// get string value
std::string MappedProperty::getValueString()
{
	return propertyValueString;
}

// get matrix value
std::vector<std::vector<double> >& MappedProperty::getValueMatrix()
{
	return propertyValueMatrix;
}

// get record instance
std::string MappedProperty::getRecordInstance()
{
	return recordInstance;
}

// get record location
std::string MappedProperty::getRecordLocation()
{
	return recordLocation;
}


// save mapping rule name
void setMappingRuleName(MappedComponent& _mapCom, std::string _mapName)
{
	_mapCom.mappingRuleName = _mapName;
}

// save mapped component name
void setTargetComponentName(MappedComponent& _mapCom, std::string _targetName)
{
	_mapCom.targetComponentName = _targetName;
}

// save mapped component location
void setTargetLocation(MappedComponent& _mapCom, std::string _targetLocation)
{
	_mapCom.targetLocation = _targetLocation;
}

// get SimModel hierarchy nodes
std::vector<SimHierarchyNode*>& MappedComponent::getUnmappedSimHierarchyNodes()
{
	return UnmappedSimHierarchyNodeList;
}

// get mapped SimModel properties
std::vector<MappedProperty>& MappedComponent::getMappedPropertyList()
{
	return MappedPropertyList;
}

// get mapping rule name
std::string MappedComponent::getMappingRuleName()
{
	return mappingRuleName;
}

// get mapped component name
std::string MappedComponent::getTargetComponentName()
{
	return targetComponentName;
}

// get mapped component location
std::string MappedComponent::getTargetLocation()
{
	return targetLocation;
}

// add unmapped SimModel hierarchy node
void MappedComponent::addUnmappedSimHierarchyNode(SimHierarchyNode& _simNode)
{
	UnmappedSimHierarchyNodeList.push_back(&_simNode);
}

// add mapped property
void MappedComponent::addMappedProperty(MappedProperty& _mapPro)
{
	MappedPropertyList.push_back(_mapPro);
}

// add mapped component
void SimMappedData::addMappedComponent(MappedComponent& _mapCom)
{
	MappedComponentList.push_back(_mapCom);
}

// get mapped components
std::vector<MappedComponent>& SimMappedData::getMappedComponentList()
{
	return MappedComponentList;
}

// translate the SimModel data based on mapping rules
void SimMappedData::translator(SimHierarchy& _simHierarchy)
{
	std::multimap<int, int> _idList;
	for(unsigned int i=0; i<_simHierarchy.getHierarchyNodeList().size(); ++i)
	{
		// testing
		//_simHierarchy.getHierarchyNodeList()[i]._SimRootObject->RefId();
		if(_simHierarchy.getHierarchyNodeList()[i].ClassType() == "SimFlowPlant_Boiler_BoilerHotWater")
		{
			MappedComponent _mapCom;
			setMappingRuleName(_mapCom, "Component_Map_One2Many");
			setTargetComponentName(_mapCom, "boiler");
			setTargetLocation(_mapCom, "AixLib.HVAC.HeatGeneration.Boiler");
			
			// property
			MappedProperty _mapPro;
			_mapPro.setPropertyName("Q_flow_max");
			_mapPro.setValueType("Number");
			_mapPro.setValueNumber(1300);
			// add property
			_mapCom.addMappedProperty(_mapPro);

			MappedProperty _mapPro2;
			_mapPro2.setPropertyName("T");
			_mapPro2.setPropertyLocation("volume");
			_mapPro2.setValueType("Number");
			_mapPro2.setValueNumber(328.15);
			// add property
			_mapCom.addMappedProperty(_mapPro2);

			MappedProperty _mapPro3;
			_mapPro3.setPropertyName("Volume");
			_mapPro3.setValueType("Number");
			_mapPro3.setValueNumber(0.00999999977648);
			// add property
			_mapCom.addMappedProperty(_mapPro3);

			MappedProperty _mapPro4;
			_mapPro4.setPropertyName("boilerEfficiency");
			_mapPro4.setValueType("Matrix");
			// set matrix
			std::vector<std::vector<double> > _matrix;
			_matrix.resize(6);
			_matrix[0].push_back(0);
			_matrix[0].push_back(0.78);
			_matrix[1].push_back(0.2);
			_matrix[1].push_back(0.79);
			_matrix[2].push_back(0.4);
			_matrix[2].push_back(0.82);
			_matrix[3].push_back(0.6);
			_matrix[3].push_back(0.84);
			_matrix[4].push_back(0.8);
			_matrix[4].push_back(0.86);
			_matrix[5].push_back(1);
			_matrix[5].push_back(0.88);
			_mapPro4.setValueMatrix(_matrix);
			_mapPro4.setRecordInstance("boilerEfficiencyB");
			_mapPro4.setRecordLocation("AixLib.DataBase.Boiler.BoilerEfficiencyBaseDataDefinition");
			// add property
			_mapCom.addMappedProperty(_mapPro4);

			// add component
			addMappedComponent(_mapCom);
			// index
			int _id_map = MappedComponentList.size()-1;
			_idList.insert(std::pair<int, int>(i, _id_map));

			// 2nd component
			MappedComponent _mapCom2;
			setMappingRuleName(_mapCom2, "Component_Map_One2Many");
			setTargetComponentName(_mapCom2, "const");
			setTargetLocation(_mapCom2, "Modelica.Blocks.Sources.Constant");

			// property
			MappedProperty _mapPro2_1;
			_mapPro2_1.setPropertyName("k");
			_mapPro2_1.setValueType("Number");
			_mapPro2_1.setValueNumber(328.15);
			// add property
			_mapCom2.addMappedProperty(_mapPro2_1);

			// add component
			addMappedComponent(_mapCom2);
			// index
			int _id_map2 = MappedComponentList.size()-1;
			_idList.insert(std::pair<int, int>(i, _id_map2));

			// 3rd component: Gap
			MappedComponent _mapCom3;
			setMappingRuleName(_mapCom3, "Component_Map_One2Many");
			setTargetComponentName(_mapCom3, "pipe_HeatTransfer");
			setTargetLocation(_mapCom3, "AixLib.HVAC.Pipes.Pipe");

			// property
			MappedProperty _mapPro3_1;
			_mapPro3_1.setPropertyName("D");
			_mapPro3_1.setValueType("Number");
			_mapPro3_1.setValueNumber(0.006);
			// add property
			_mapCom3.addMappedProperty(_mapPro3_1);

			MappedProperty _mapPro3_2;
			_mapPro3_2.setPropertyName("l");
			_mapPro3_2.setValueType("Number");
			_mapPro3_2.setValueNumber(2);
			// add property
			_mapCom3.addMappedProperty(_mapPro3_2);

			MappedProperty _mapPro3_3;
			_mapPro3_3.setPropertyName("p");
			_mapPro3_3.setValueType("Number");
			_mapPro3_3.setValueNumber(100);
			// add property
			_mapCom3.addMappedProperty(_mapPro3_3);

			MappedProperty _mapPro3_4;
			_mapPro3_4.setPropertyName("e");
			_mapPro3_4.setValueType("Number");
			_mapPro3_4.setValueNumber(0.0000249999993684);
			// add property
			_mapCom3.addMappedProperty(_mapPro3_4);

			// add component
			addMappedComponent(_mapCom3);
			// index
			int _id_map3 = MappedComponentList.size()-1;
			_idList.insert(std::pair<int, int>(i, _id_map3));

		}

		if(_simHierarchy.getHierarchyNodeList()[i].ClassType() == "SimFlowMover_Pump_VariableSpeedReturn")
		{
			MappedComponent _mapCom;
			setMappingRuleName(_mapCom, "Component_Map_One2Many");
			setTargetComponentName(_mapCom, "pump");
			setTargetLocation(_mapCom, "AixLib.HVAC.Pumps.Pump");

			// property
			MappedProperty _mapPro;
			_mapPro.setPropertyName("V_flow_max");
			_mapPro.setValueType("Number");
			_mapPro.setValueNumber(2);
			// add property
			_mapCom.addMappedProperty(_mapPro);

			MappedProperty _mapPro2;
			_mapPro2.setPropertyName("V_flow");
			_mapPro2.setValueType("Number");
			_mapPro2.setValueNumber(0.0000112961579362);
			// add property
			_mapCom.addMappedProperty(_mapPro2);

			MappedProperty _mapPro3;
			_mapPro3.setPropertyName("Head");
			_mapPro3.setValueType("Number");
			_mapPro3.setValueNumber(1);
			// add property
			_mapCom.addMappedProperty(_mapPro3);

			MappedProperty _mapPro4;
			_mapPro4.setPropertyName("minMaxHead");
			_mapPro4.setValueType("Matrix");
			// set matrix
			std::vector<std::vector<double> > _matrix;
			_matrix.resize(10);
			_matrix[0].push_back(0);
			_matrix[0].push_back(0.6);
			_matrix[0].push_back(0.6);
			_matrix[1].push_back(0.5);
			_matrix[1].push_back(2.5);
			_matrix[1].push_back(2.5);
			_matrix[2].push_back(0.75);
			_matrix[2].push_back(2.1);
			_matrix[2].push_back(2.1);
			_matrix[3].push_back(1.3);
			_matrix[3].push_back(1.5);
			_matrix[3].push_back(1.5);
			_matrix[4].push_back(1.5);
			_matrix[4].push_back(2.25);
			_matrix[4].push_back(2.25);
			_matrix[5].push_back(2.5);
			_matrix[5].push_back(0.75);
			_matrix[5].push_back(0.75);
			_matrix[6].push_back(3);
			_matrix[6].push_back(0.5);
			_matrix[6].push_back(0.5);
			_matrix[7].push_back(3.5);
			_matrix[7].push_back(0.25);
			_matrix[7].push_back(0.25);
			_matrix[8].push_back(4);
			_matrix[8].push_back(0);
			_matrix[8].push_back(0);
			_matrix[9].push_back(4.5);
			_matrix[9].push_back(0);
			_matrix[9].push_back(0);
			_mapPro4.setValueMatrix(_matrix);
			_mapPro4.setRecordInstance("MinMaxCharacteristics");
			_mapPro4.setRecordLocation("AixLib.DataBase.Pumps.MinMaxCharacteristicsBaseDataDefinition");
			// add property
			_mapCom.addMappedProperty(_mapPro4);

			MappedProperty _mapPro5;
			_mapPro5.setPropertyName("Head_max");
			_mapPro5.setValueType("Number");
			_mapPro5.setValueNumber(1);
			// add property
			_mapCom.addMappedProperty(_mapPro5);

			MappedProperty _mapPro6;
			_mapPro6.setPropertyName("ControlStrategy");
			_mapPro6.setValueType("Number");
			_mapPro6.setValueNumber(1);
			// add property
			_mapCom.addMappedProperty(_mapPro6);

			//
			addMappedComponent(_mapCom);
			// index
			int _id_map = MappedComponentList.size()-1;

			_idList.insert(std::pair<int, int>(i, _id_map));

			// 2nd component
			MappedComponent _mapCom2;
			setMappingRuleName(_mapCom2, "Component_Map_One2Many");
			setTargetComponentName(_mapCom2, "NightSignal");
			setTargetLocation(_mapCom2, "Modelica.Blocks.Sources.BooleanPulse");

			// property
			MappedProperty _mapPro2_1;
			_mapPro2_1.setPropertyName("period");
			_mapPro2_1.setValueType("Number");
			_mapPro2_1.setValueNumber(86400);
			// add property
			_mapCom2.addMappedProperty(_mapPro2_1);

			MappedProperty _mapPro2_2;
			_mapPro2_2.setPropertyName("width");
			_mapPro2_2.setValueType("Number");
			_mapPro2_2.setValueNumber(45.8);
			// add property
			_mapCom2.addMappedProperty(_mapPro2_2);

			MappedProperty _mapPro2_3;
			_mapPro2_3.setPropertyName("startTime");
			_mapPro2_3.setValueType("Number");
			_mapPro2_3.setValueNumber(64800);
			// add property
			_mapCom2.addMappedProperty(_mapPro2_3);

			//
			addMappedComponent(_mapCom2);
			// index
			int _id_map2 = MappedComponentList.size()-1;

			_idList.insert(std::pair<int, int>(i, _id_map2));
		}

		if(_simHierarchy.getHierarchyNodeList()[i].ClassType() == "SimFlowEnergyTransfer_ConvectiveHeater_Water")
		{
			MappedComponent _mapCom;
			setMappingRuleName(_mapCom, "Component_Map_One2Many");
			setTargetComponentName(_mapCom, "radiator");
			setTargetLocation(_mapCom, "AixLib.HVAC.Radiators.Radiator");

			// property
			MappedProperty _mapPro;
			_mapPro.setPropertyName("V");
			_mapPro.setPropertyLocation("volume");
			_mapPro.setValueType("Number");
			_mapPro.setValueNumber(0.00467999977991);
			// add property
			_mapCom.addMappedProperty(_mapPro);

			MappedProperty _mapPro2;
			_mapPro2.setPropertyName("T");
			_mapPro2.setPropertyLocation("volume");
			_mapPro2.setValueType("Number");
			_mapPro2.setValueNumber(303.1499938965);
			// add property
			_mapCom.addMappedProperty(_mapPro2);


			MappedProperty _mapPro3;
			_mapPro3.setPropertyName("NominalPower");
			_mapPro3.setValueType("Number");
			_mapPro3.setValueNumber(644);
			_mapPro3.setRecordInstance("RadiatorType");
			_mapPro3.setRecordLocation("AixLib.DataBase.Radiators.RadiatiorBaseDataDefinition");
			// add property
			_mapCom.addMappedProperty(_mapPro3);


			MappedProperty _mapPro4;
			_mapPro4.setPropertyName("T_flow_nom");
			_mapPro4.setValueType("Number");
			_mapPro4.setValueNumber(55);
			_mapPro4.setRecordInstance("RadiatorType");
			_mapPro4.setRecordLocation("AixLib.DataBase.Radiators.RadiatiorBaseDataDefinition");
			// add property
			_mapCom.addMappedProperty(_mapPro4);

			MappedProperty _mapPro5;
			_mapPro5.setPropertyName("T_return_nom");
			_mapPro5.setValueType("Number");
			_mapPro5.setValueNumber(45);
			_mapPro5.setRecordInstance("RadiatorType");
			_mapPro5.setRecordLocation("AixLib.DataBase.Radiators.RadiatiorBaseDataDefinition");
			// add property
			_mapCom.addMappedProperty(_mapPro5);


			MappedProperty _mapPro6;
			_mapPro6.setPropertyName("T_room_nom");
			_mapPro6.setValueType("Number");
			_mapPro6.setValueNumber(20);
			_mapPro6.setRecordInstance("RadiatorType");
			_mapPro6.setRecordLocation("AixLib.DataBase.Radiators.RadiatiorBaseDataDefinition");
			// add property
			_mapCom.addMappedProperty(_mapPro6);

			MappedProperty _mapPro7;
			_mapPro7.setPropertyName("Exponent");
			_mapPro7.setValueType("Number");
			_mapPro7.setValueNumber(1.2776);
			_mapPro7.setRecordInstance("RadiatorType");
			_mapPro7.setRecordLocation("AixLib.DataBase.Radiators.RadiatiorBaseDataDefinition");
			// add property
			_mapCom.addMappedProperty(_mapPro7);

			MappedProperty _mapPro8;
			_mapPro8.setPropertyName("VolumeWater");
			_mapPro8.setValueType("Number");
			_mapPro8.setValueNumber(4.68);
			_mapPro8.setRecordInstance("RadiatorType");
			_mapPro8.setRecordLocation("AixLib.DataBase.Radiators.RadiatiorBaseDataDefinition");
			// add property
			_mapCom.addMappedProperty(_mapPro8);

			MappedProperty _mapPro9;
			_mapPro9.setPropertyName("MassSteel");
			_mapPro9.setValueType("Number");
			_mapPro9.setValueNumber(22.11);
			_mapPro9.setRecordInstance("RadiatorType");
			_mapPro9.setRecordLocation("AixLib.DataBase.Radiators.RadiatiorBaseDataDefinition");
			// add property
			_mapCom.addMappedProperty(_mapPro9);

			MappedProperty _mapPro10;
			_mapPro10.setPropertyName("RadPercent");
			_mapPro10.setValueType("Number");
			_mapPro10.setValueNumber(0.3);
			_mapPro10.setRecordInstance("RadiatorType");
			_mapPro10.setRecordLocation("AixLib.DataBase.Radiators.RadiatiorBaseDataDefinition");
			// add property
			_mapCom.addMappedProperty(_mapPro10);

			MappedProperty _mapPro11;
			_mapPro11.setPropertyName("length");
			_mapPro11.setValueType("Number");
			_mapPro11.setValueNumber(1.3);
			_mapPro11.setRecordInstance("RadiatorType");
			_mapPro11.setRecordLocation("AixLib.DataBase.Radiators.RadiatiorBaseDataDefinition");
			// add property
			_mapCom.addMappedProperty(_mapPro11);

			MappedProperty _mapPro12;
			_mapPro12.setPropertyName("height");
			_mapPro12.setValueType("Number");
			_mapPro12.setValueNumber(0.3);
			_mapPro12.setRecordInstance("RadiatorType");
			_mapPro12.setRecordLocation("AixLib.DataBase.Radiators.RadiatiorBaseDataDefinition");
			// add property
			_mapCom.addMappedProperty(_mapPro12);

			//
			addMappedComponent(_mapCom);
			// index
			int _id_map = MappedComponentList.size()-1;

			_idList.insert(std::pair<int, int>(i, _id_map));

			// 2nd component: Gap
			MappedComponent _mapCom2;
			setMappingRuleName(_mapCom2, "Component_Map_One2Many");
			setTargetComponentName(_mapCom2, "pipe_HeatTransfer");
			setTargetLocation(_mapCom2, "AixLib.HVAC.Pipes.Pipe");

			// property
			MappedProperty _mapPro2_1;
			_mapPro2_1.setPropertyName("D");
			_mapPro2_1.setValueType("Number");
			_mapPro2_1.setValueNumber(0.006);
			// add property
			_mapCom2.addMappedProperty(_mapPro2_1);

			MappedProperty _mapPro2_2;
			_mapPro2_2.setPropertyName("l");
			_mapPro2_2.setValueType("Number");
			_mapPro2_2.setValueNumber(2);
			// add property
			_mapCom2.addMappedProperty(_mapPro2_2);

			MappedProperty _mapPro2_3;
			_mapPro2_3.setPropertyName("p");
			_mapPro2_3.setValueType("Number");
			_mapPro2_3.setValueNumber(100);
			// add property
			_mapCom2.addMappedProperty(_mapPro2_3);

			MappedProperty _mapPro2_4;
			_mapPro2_4.setPropertyName("e");
			_mapPro2_4.setValueType("Number");
			_mapPro2_4.setValueNumber(0.0000249999993684);
			// add property
			_mapCom2.addMappedProperty(_mapPro2_4);

			// add component
			addMappedComponent(_mapCom2);
			// index
			int _id_map2 = MappedComponentList.size()-1;
			_idList.insert(std::pair<int, int>(i, _id_map2));

			// 3rd: Gap
			MappedComponent _mapCom3;
			setMappingRuleName(_mapCom3, "Component_Map_One2Many");
			setTargetComponentName(_mapCom3, "boundary_p");
			setTargetLocation(_mapCom3, "AixLib.HVAC.Sources.Boundary_p");

			// property
			MappedProperty _mapPro3_1;
			_mapPro3_1.setPropertyName("p");
			_mapPro3_1.setValueType("Number");
			_mapPro3_1.setValueNumber(100000);
			// add property
			_mapCom3.addMappedProperty(_mapPro3_1);

			// add component
			addMappedComponent(_mapCom3);
			// index
			int _id_map3 = MappedComponentList.size()-1;
			_idList.insert(std::pair<int, int>(i, _id_map3));
		}
	}

	// add gap
	/*MappedComponent _mapCom;
	setMappingRuleName(_mapCom, "Component_Map_Gap");
	setTargetComponentName(_mapCom, "boundary_p");
	setTargetLocation(_mapCom, "AixLib.HVAC.Sources.Boundary_p");
	addMappedComponent(_mapCom);*/

	MappedComponent _mapCom2;
	setMappingRuleName(_mapCom2, "Component_Map_Gap");
	setTargetComponentName(_mapCom2, "baseParameters");
	setTargetLocation(_mapCom2, "AixLib.HVAC.BaseParameters");

	// property
	MappedProperty _mapPro2_1;
	_mapPro2_1.setPropertyName("p_ambient");
	_mapPro2_1.setValueType("Number");
	_mapPro2_1.setValueNumber(101325);
	// add property
	_mapCom2.addMappedProperty(_mapPro2_1);

	MappedProperty _mapPro2_2;
	_mapPro2_2.setPropertyName("T_ambient");
	_mapPro2_2.setValueType("Number");
	_mapPro2_2.setValueNumber(19.9999938965);
	_mapCom2.addMappedProperty(_mapPro2_2);

	MappedProperty _mapPro2_3;
	_mapPro2_3.setPropertyName("g");
	_mapPro2_3.setValueType("Number");
	_mapPro2_3.setValueNumber(9.81000041962);
	_mapCom2.addMappedProperty(_mapPro2_3);

	MappedProperty _mapPro2_4;
	_mapPro2_4.setPropertyName("mu_Water");
	_mapPro2_4.setValueType("Number");
	_mapPro2_4.setValueNumber(0.0010000000475);
	_mapCom2.addMappedProperty(_mapPro2_4);

	MappedProperty _mapPro2_5;
	_mapPro2_5.setPropertyName("rho_Water");
	_mapPro2_5.setValueType("Number");
	_mapPro2_5.setValueNumber(995.585998535);
	_mapCom2.addMappedProperty(_mapPro2_5);

	MappedProperty _mapPro2_6;
	_mapPro2_6.setPropertyName("cp_Water");
	_mapPro2_6.setValueType("Number");
	_mapPro2_6.setValueNumber(4184);
	_mapCom2.addMappedProperty(_mapPro2_6);

	MappedProperty _mapPro2_7;
	_mapPro2_7.setPropertyName("lambda_Water");
	_mapPro2_7.setValueType("Number");
	_mapPro2_7.setValueNumber(0.600000023842);
	_mapCom2.addMappedProperty(_mapPro2_7);

	MappedProperty _mapPro2_8;
	_mapPro2_8.setPropertyName("T_ref");
	_mapPro2_8.setValueType("Number");
	_mapPro2_8.setValueNumber(273.1499938964844);
	_mapCom2.addMappedProperty(_mapPro2_8);

	MappedProperty _mapPro2_9;
	_mapPro2_9.setPropertyName("T0");
	_mapPro2_9.setValueType("Number");
	_mapPro2_9.setValueNumber(303.1499938965);
	_mapCom2.addMappedProperty(_mapPro2_9);

	MappedProperty _mapPro2_10;
	_mapPro2_10.setPropertyName("calcMFlow");
	_mapPro2_10.setValueType("String");
	_mapPro2_10.setValueString("true");
	_mapCom2.addMappedProperty(_mapPro2_10);

	// add component
	addMappedComponent(_mapCom2);
	

	/*MappedComponent _mapCom3;
	setMappingRuleName(_mapCom3, "Component_Map_Gap");
	setTargetComponentName(_mapCom3, "pipe_HeatTransfer");
	setTargetLocation(_mapCom3, "AixLib.HVAC.Pipes.Pipe");
	addMappedComponent(_mapCom3);*/

	// in the end, add linker
	for(std::multimap<int, int>::iterator _it=_idList.begin(); _it!=_idList.end(); ++_it)
	{
		_simHierarchy.getHierarchyNodeList()[_it->first].addMappedComponent(MappedComponentList[_it->second]);
		MappedComponentList[_it->second].addUnmappedSimHierarchyNode(_simHierarchy.getHierarchyNodeList()[_it->first]);
	}

}