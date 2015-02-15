// Copyright (C) 2012-2015 Institute of Energy Efficient Building E3D,
// RWTH Aachen University, Germany.
//
// This program was developed for the EnEff-BIM project. In EnEff-BIM, 
// a project participating in IEA Annex 60, translators between Building 
// Information Models (BIM) and Modelica are developed to support building
// and community energy performance simulation. This is accomplished through 
// extending existing standards for exchanging energy calculation data, and 
// through data representation formats such as the Industry Foundation Classes (IFC).
//
// This program is free software; you can redistribute it and/or modify it 
// under the terms of the GNU General Public License version 2 as published 
// by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, simmodel2c++ gives permission to 
// link this program with the XML data binding framework generated by the 
// Code Synthesis Tools CC, and distribute linked combinations including 
// the two. You must obey the GNU General Public License version 2 in all 
// respects for all of the code used. If you modify this copy of the program, 
// you may extend this exception to your version of the program, but you are 
// not obligated to do so. If you do not wish to do so, delete this exception 
// statement from your version.
//

#ifndef HIERARCH_H
#define HIERARCH_H

// include Qt base object
#include <QObject>
// include the head file
// saving translated model data
#include "SimmodelAPI.h"

// Forward declarations.
//
			//0. base class
			class sim_base;
			//1. simulation project
			class sim_project;
			//2.1 simulation site
			class sim_site;
			// 2.1.1 simulation buidling
			class sim_building;
			//  2.1.1.1 buidling stories: n+1
			class sim_building_storey;
			//   2.1.1.1.1 space occupied
			class sim_space_occupied;
			// 2.1.2 simulation zone group & HVAC group
			class sim_group;
			//  2.1.2.1 simulation thermal zone
			class sim_thermal_zone;
			// 2.1.3 simulation HVAC hot water system
			class sim_hotwater_system;
			//  2.1.3.1 sim hot water loop controler
			class sim_hotwater_control;
			//   2.1.3.1.1 sim supply water temperature controler
			class sim_supplywater_temp_control;
			//   2.1.3.1.2 sim dry bulb temperature sensor
			class sim_temp_drybulb_sensor;
			//  2.1.3.2 sim hot water demand
			class sim_hotwater_demand;
			//   2.1.3.2.1 sim flow energy transfer by convective heater water
			class sim_flwEngyTran_convectheater_water;
			//  2.1.3.3 sim hot water supply
			class sim_hotwater_supply;
			//   2.1.3.3.1 sim flow mover for variable speed pump
			class sim_flwMov_pump_varSpedRet;
			//   2.1.3.3.2 sim flow plant for hot wate boiler
			class sim_flwPlt_hotwater_boiler;

			//2.2 simulation configuration
			class sim_configuration;

			// 3 sim connection between components
			class sim_conns;

// decalration
//

			//0. base class
			class sim_base : public QObject
			{
			public:
				// parameter properties
				virtual list<pair<string, string> >& get_prop_val() = 0;
				// save the modified propety values
				virtual void save_prop_val(list<pair<string, string> >::iterator& _prop_it) = 0;
				// the number of gap parameters
				virtual int get_gap() = 0;
				// retrieve the generic component name
				virtual string get_com_name() = 0;
				virtual ~sim_base() {}

				sim_base() { _zero_deg = 273.15; }
				
				// zero degree (273.15 K)
				double _zero_deg;
			};

			//1. simulation project
			class sim_project : public virtual sim_base
			{
				//Q_OBJECT

			private:
				// core model elements
				//
				// generic component name (without id)
				string com_name;
				// project description
				string _description;
				// object owner history: IDREF
				string _object_owner_history;
				// IFC global Id
				string _ifc_global_id;
				// IFC name
				string _ifc_name;
				// sim unique Id
				string _sim_unique_id;
				// SimModel type
				string _sim_model_type;
				// SimModel subtype
				string _sim_model_subtype;
				// SimModel name
				string _sim_model_name;
				// source model schema
				string _source_model_schema;
				// source model object type
				string _source_model_object_type;
				// object type
				string _object_type;
				
				// building model elements
				//
				// long name
				string _long_name;
				// name
				string _name;
				// project phase
				string _project_phase;
				// project client owner: IDREF
				string _project_client_owner;
				// project architect: IDREF
				string _project_architect;
				// project units: IDREFS
				string _project_units;
				// 3D model representation contexts: IDREFS
				string _3d_model_representation_contexts;
				// weather location region
				string _weather_location_region;
				// weather location city
				string _weather_location_city;
				// weather location id
				string _weather_location_id;
				// point to child class: sim site
				sim_site* sim_site_ptr;
				// point to child: sim configuration
				sim_configuration* sim_config_ptr;
				// quantity of gaps
				int gap_param_nr;
				
				// save property values
				list<pair<string, string> > prop_val_maps;

			public:
				// constructor
				sim_project() 
				{ 
					com_name = "project";
					gap_param_nr = 0; 
				}
				// set project description
				void set_description(string& _des);
				// get project description
				string get_description();
				// set object owner history: IDREF
				void set_object_owner_history(string& _ob_ow_his);
				// retrieve property values
				list<pair<string, string> >& get_prop_val();
				// save the modified propety values
				void save_prop_val(list<pair<string, string> >::iterator& _prop_it) {}
				// retrieve the number of gaps
				int get_gap();
				// retrieve the generic component name
				string get_com_name() { return com_name; }
				// set child class: sim site
				void set_sim_site(sim_site& _sim_site_mo);
				// get child class: sim site
				sim_site* get_sim_site();
				// set child class: sim configuration
				void set_sim_configuration(sim_configuration& _sim_config_mo);
				// get child class: sim configuration
				sim_configuration* get_sim_configuration();

				//! reference to object class: sim project
				SimModel::SimProject_Project_DesignAlternative_iterator sim_project_it;
				// reference to child: sim site
				SimModel::SimSite_BuildingSite_Default_iterator sim_site_it;
				// reference to child: sim configuration
				SimModel::SimSimulationConfiguration_SimulationConfiguration_Default_iterator sim_config_it;
			};
			//2.1 simulation site
			class sim_site : public virtual sim_base
			{
				//Q_OBJECT

			private:
				// generic component name (without id)
				string com_name;
				// point to child class: sim building
				sim_building* sim_building_ptr;
				// point to child class: sim group
				sim_group* sim_group_ptr;
				// quantity of gaps
				int gap_param_nr;
				// save property values
				list<pair<string, string> > prop_val_maps;

				// template of building location
				SimModel::SimTemplateLocation_Location_Default_iterator sim_loc_it;
				// template of summer design days
				SimModel::SimLocationAndWeather_DesignDay_Default_iterator sim_weather_sum_it;

				// additional paramters
				double _T_ambient; // Default ambient temperature [degC]
				double _g; // Gravity [m/s2]
				double _mu_Water; // Dynamic viscosity [Pa.s]
				double _rho_Water; // Density of the fluid [kg/m3]
				double _cp_Water; // Specific heat capacity of fluid [J/(kg.K)]
				double _lambda_Water; // Thermal conductivity of fluid [W/(m.K)]
				double _T_ref; // Reference temperature by zero enthalpy [degC]
				double _T0; // Initial temperature [degC]
				bool _calcMFlow; // Calculate m_flow from p

			public:
				// constructor
				 sim_site() 
				{ 
					com_name = "building_site";
					gap_param_nr = 0; 
					// default values
					_T_ambient = 19.9999938965; // Default ambient temperature [degC]
					_g = 9.81000041962; // Gravity [m/s2]
					_mu_Water = 0.0010000000475; // Dynamic viscosity [Pa.s]
					_rho_Water = 995.585998535; // Density of the fluid [kg/m3|g/cm3]
					_cp_Water = 4184; // Specific heat capacity of fluid [J/(kg.K)]
					_lambda_Water = 0.600000023842; // Thermal conductivity of fluid [W/(m.K)]
					_T_ref = -0.00000610351560226; // Reference temperature by zero enthalpy [degC]
					_T0 = 29.9999938965; // Initial temperature [degC]
					_calcMFlow = true; // Calculate m_flow from p [type=Boolean]
				}
				// set child class: sim building
				void set_sim_building(sim_building& _sim_building_mo);
				// set child class: sim group
				void set_sim_group(sim_group& _sim_group_mo);
				// save building location template
				void set_sim_loc(SimModel::SimTemplateLocation_Location_Default_iterator& _loc_it);
				// save template of weather summer day
				void set_sim_weather_sum(SimModel::SimLocationAndWeather_DesignDay_Default_iterator& _weather_sum_it);
				// get child class: sim building
				sim_building* get_sim_building();
				// get child class: sim group
				sim_group* get_sim_group();
				// get weather summer day template
				SimModel::SimLocationAndWeather_DesignDay_Default_iterator& get_sim_weather_sum();
				// retrieve the generic component name
				string get_com_name() { return com_name; }
				// save the component id and its class instance pointer
				void save_id(map<string, sim_base*>& _id_map);
				// retrieve property values
				list<pair<string, string> >& get_prop_val();
				// save the modified propety values
				void save_prop_val(list<pair<string, string> >::iterator& _prop_it);
				// retrieve the number of gaps
				int get_gap();
				// retrieve additional paramters
				double get_T_ambient() { return _T_ambient; }
				double get_g() { return _g; }
				double get_mu_Water() { return _mu_Water; }
				double get_rho_Water() { return _rho_Water; }
				double get_cp_Water() { return _cp_Water; } 
				double get_lambda_Water() { return _lambda_Water; } 
				double get_T_ref() { return _T_ref; }
				double get_T0() { return _T0; } 
				bool get_calcMFlow() { return _calcMFlow; }

				//! reference to object class: sim site
				SimModel::SimSite_BuildingSite_Default_iterator sim_site_it;
			};
			
			// 2.1.1 simulation buidling
			class sim_building
			{

			private:
				// storey number
				int storey_nb;
			public:
				// constructor
				sim_building() { storey_nb = 0; }
				// destructor
				//! release the vec
				~sim_building() 
				{
					// recover the container space
					for(int idx=0; idx<(int)sim_building_storey_vec.size(); ++idx)
					{
						delete (void*)sim_building_storey_vec[idx];
					}
				}

				// set storey number
				void set_storey_nb(int _nb);
				// get storey number
				int get_storey_nb();

				// child: save building storeys
				vector<sim_building_storey*> sim_building_storey_vec;

				//! refer to object class: sim building
				SimModel::SimBuilding_Building_Default_iterator sim_building_it;

				//!! temp:  point to child class: buidling stories
				sim_building_storey* sim_building_storey_ptr1;
				//!! temp:  point to child class: buidling stories
				sim_building_storey* sim_building_storey_ptr2;
			};

			//  2.1.1.1 buidling stories: n+1
			class sim_building_storey : public virtual sim_base
			{
				//Q_OBJECT

			private:
				// generic component name (without id)
				string com_name;
				// point to child class: space occupied
				sim_space_occupied* sim_space_occupied_ptr;
				// quantity of gaps
				int gap_param_nr;
				// save property values
				list<pair<string, string> > prop_val_maps;

			public:
				// constructor
				sim_building_storey() 
				{ 
					com_name = "building_storey";
					isRoof = false; 
					gap_param_nr = 0;
				}
				// destructor
				~sim_building_storey() {}
				// set child class: space occupied
				void set_space_occupied(sim_space_occupied& _sim_space_occupied_mo);
				// get child class: space occupied
				sim_space_occupied* get_space_occupied();
				// flag for roof storey
				bool isRoof;
				// refer to object class: sim building storey
				SimModel::SimBuildingStory_BuildingStory_Default_iterator sim_building_storey_it;
				// retrieve the generic component name
				string get_com_name() { return com_name; }
				// retrieve property values
				list<pair<string, string> >& get_prop_val();
				// save the modified propety values
				void save_prop_val(list<pair<string, string> >::iterator& _prop_it) {}
				// retrieve the number of gaps
				int get_gap();
			};
			//   2.1.1.1.1 space occupied
			class sim_space_occupied : public virtual sim_base
			{
				//Q_OBJECT

			private:
				// generic component name (without id)
				string com_name;
				// point to child class: thermal zone
				sim_thermal_zone* sim_thermal_zone_ptr;
				// quantity of gaps
				int gap_param_nr;
				// save property values
				list<pair<string, string> > prop_val_maps;

			public:
				// constructor
				sim_space_occupied() 
				{ 
					com_name = "occupied_space";
					gap_param_nr = 0; 
				}
				// set child class: thermal zone
				void set_thermal_zone(sim_thermal_zone& _sim_thermal_zone_mo);
				// get child class: thermal zone
				sim_thermal_zone* get_thermal_zone();
				// refer to object class:
				SimModel::SimSpace_Occupied_Default_iterator sim_space_occupied_it;
				// retrieve the generic component name
				string get_com_name() { return com_name; }
				// retrieve property values
				list<pair<string, string> >& get_prop_val();
				// save the modified propety values
				void save_prop_val(list<pair<string, string> >::iterator& _prop_it) {}
				// retrieve the number of gaps
				int get_gap();
			};

			// 2.1.2 simulation zone & HVAC group
			class sim_group
			{

			private:
				// point to child class: sim thermal zone
				sim_thermal_zone* sim_thermal_zone_ptr;
			public:
				// constructor
				sim_group() {}

				// set child class: sim thermal zone
				void set_thermal_zone(sim_thermal_zone& _sim_thermal_zone_mo);
				// get child class: sim thermal zone
				sim_thermal_zone* get_thermal_zone();

				// refer to object class: sim zone HVAC groups (equipment list)
				SimModel::SimGroup_SpatialZoneGroup_ZoneHvacGroup_iterator sim_hvac_group_it;
				// refer to object class: sim zone groups (internal loads and conditions)
				SimModel::SimGroup_SpatialZoneGroup_ZoneGroup_iterator sim_zone_group_it;
			};
			//  2.1.2.1 simulation thermal zone
			class sim_thermal_zone : public virtual sim_base
			{
				//Q_OBJECT

			public:
				// constructor
				sim_thermal_zone() 
				{ 
					com_name = "thermal_zone";
					gap_param_nr = 0; 
				}
				// refer to object class: sim thermal zone
				SimModel::SimSpatialZone_ThermalZone_Default_iterator sim_thermal_zone_it;
				// retrieve the generic component name
				string get_com_name() { return com_name; }
				// retrieve property values
				list<pair<string, string> >& get_prop_val();
				// save the modified propety values
				void save_prop_val(list<pair<string, string> >::iterator& _prop_it) {}
				// retrieve the number of gaps
				int get_gap();
			private:
				// generic component name (without id)
				string com_name;
				// quantity of gaps
				int gap_param_nr;
				// save property values
				list<pair<string, string> > prop_val_maps;
			};

			// 2.1.3 simulation hot water system
			class sim_hotwater_system : public virtual sim_base
			{
				//Q_OBJECT

			private:
				// generic component name (without id)
				string com_name;
				// point to child class: sim hot water control
				sim_hotwater_control* sim_hw_ctl_ptr;
				//  point to child class: sim hot water demand
				sim_hotwater_demand* sim_hw_dmd_ptr;
				//  point to child class: sim hot water supply
				sim_hotwater_supply* sim_hw_supy_ptr;
				// quantity of gaps
				int gap_param_nr;
				// save property values
				list<pair<string, string> > prop_val_maps;
			public:
				// constructor
				sim_hotwater_system() 
				{ 
					com_name = "hw_system";
					gap_param_nr = 0; 
				}
				// set child class: sim thermal zone
				void set_hotwater_control(sim_hotwater_control& _sim_hotwater_control_mo);
				// get child class: sim thermal zone
				sim_hotwater_control* get_hotwater_control();
				// set child class: sim hot water demand
				void set_hotwater_demand(sim_hotwater_demand& _sim_hw_dmd_mo);
				// get child class: sim hot water demand
				sim_hotwater_demand* get_hotwater_demand();
				//  set child class: sim hot water supply
				void set_hotwater_supply(sim_hotwater_supply& _sim_hw_supy_mo);
				// get child class: sim hot water supply
				sim_hotwater_supply* get_hotwater_supply();
				// refer to object class: sim hot water system
				SimModel::SimSystem_HvacHotWater_FullSystem_iterator sim_hotwater_system_it;
				// retrieve the generic component name
				string get_com_name() { return com_name; }
				// retrieve property values
				list<pair<string, string> >& get_prop_val();
				// save the modified propety values
				void save_prop_val(list<pair<string, string> >::iterator& _prop_it) {}
				// retrieve the number of gaps
				int get_gap();
			};
			//  2.1.3.1 sim hot water loop controler
			class sim_hotwater_control : public virtual sim_base
			{
				//Q_OBJECT

			private:
				// generic component name (without id)
				string com_name;
				// point to child class: sim supply water temperature control
				sim_supplywater_temp_control* sim_sw_temp_ctl_ptr;
				// point to child class: sim dry bulb temperature sensor
				sim_temp_drybulb_sensor* sim_temp_dbb_ssr_ptr;
				// quantity of gaps
				int gap_param_nr;
				// save property values
				list<pair<string, string> > prop_val_maps;
			public:
				// constructor
				sim_hotwater_control() 
				{ 
					com_name = "hw_control";
					gap_param_nr = 0; 
				}
				// set child class: sim supply water temperature control
				void set_supplywater_temp_control(sim_supplywater_temp_control& _sim_sw_temp_ctl_mo);
				// get child class
				sim_supplywater_temp_control* get_supplywater_temp_control();
				// set child class: sim dry bulb temperature sensor
				void set_temp_drybulb_sensor(sim_temp_drybulb_sensor& _sim_temp_dbb_ssr_mo);
				// get child class
				sim_temp_drybulb_sensor* get_temp_drybulb_sensor();
				// refer to object class: sim hot water loop control
				SimModel::SimSystem_HvacHotWater_Control_iterator sim_hw_ctl_it;
				// retrieve the generic component name
				string get_com_name() { return com_name; }
				// retrieve property values
				list<pair<string, string> >& get_prop_val();
				// save the modified propety values
				void save_prop_val(list<pair<string, string> >::iterator& _prop_it) {}
				// retrieve the number of gaps
				int get_gap();
			};
			//   2.1.3.1.1 sim supply water temperature control
			class sim_supplywater_temp_control : public virtual sim_base
			{
				//Q_OBJECT

			public:
				// constructor
				sim_supplywater_temp_control() 
				{
					com_name = "temperature_control";
					gap_param_nr = 0; 
				}
				// refer to object class: sim supply water temperature controler
				SimModel::SimController_SupplyWater_Temperature_iterator sim_sw_temp_ctl_it;
				// retrieve the generic component name
				string get_com_name() { return com_name; }
				// retrieve property values
				list<pair<string, string> >& get_prop_val();
				// save the modified propety values
				void save_prop_val(list<pair<string, string> >::iterator& _prop_it) {}
				// retrieve the number of gaps
				int get_gap();
			
			private:
				// generic component name (without id)
				string com_name;
				// quantity of gaps
				int gap_param_nr;
				// save property values
				list<pair<string, string> > prop_val_maps;
			};
			//   2.1.3.1.2 sim dry bulb temperature sensor
			class sim_temp_drybulb_sensor : public virtual sim_base
			{
				//Q_OBJECT

			public:
				// constructor
				sim_temp_drybulb_sensor() 
				{ 
					com_name = "drybulb";
					gap_param_nr = 0; 
				}
				// refer to object class: sim temperature dry bulb sensor
				SimModel::SimSensor_TemperatureSensor_DryBulb_iterator sim_temp_dbb_ssr_it;
				// retrieve the generic component name
				string get_com_name() { return com_name; }
				// retrieve property values
				list<pair<string, string> >& get_prop_val();
				// save the modified propety values
				void save_prop_val(list<pair<string, string> >::iterator& _prop_it) {}
				// retrieve the number of gaps
				int get_gap();

			private:
				// generic component name (without id)
				string com_name;
				// quantity of gaps
				int gap_param_nr;
				// save property values
				list<pair<string, string> > prop_val_maps;
			};
			
			//  2.1.3.2 sim hot water demand
			class sim_hotwater_demand : public virtual sim_base
			{
				//Q_OBJECT

			private:
				// point to child class: sim flow energy transfer by convective heater water
				sim_flwEngyTran_convectheater_water* sim_flwEngyTran_convectheater_w_ptr;
				// quantity of gaps
				int gap_param_nr;
				// save property values
				list<pair<string, string> > prop_val_maps;
				// generic component name (without id)
				string com_name;

			public:
				// constructor
				sim_hotwater_demand() 
				{ 
					com_name = "hw_demand";
					gap_param_nr = 0; 
				}
				// set child class: sim flow energy transfer by convective heater water
				void set_flwEngyTran_convectheater_water(sim_flwEngyTran_convectheater_water& _sim_flwEngyTran_convectheater_w_mo);
				// get child class: sim flow energy transfer by convective heater water
				sim_flwEngyTran_convectheater_water* get_flwEngyTran_convectheater_water();
				// refer to object class: sim hot water demand
				SimModel::SimSystem_HvacHotWater_Demand_iterator sim_hw_dmd_it;
				// retrieve the generic component name
				string get_com_name() { return com_name; }
				// retrieve property values
				list<pair<string, string> >& get_prop_val();
				// save the modified propety values
				void save_prop_val(list<pair<string, string> >::iterator& _prop_it) {}
				// retrieve the number of gaps
				int get_gap();
			};
			//   2.1.3.2.1 sim flow energy transferred by convective heater water radiator
			class sim_flwEngyTran_convectheater_water : public sim_base
			{
				Q_OBJECT

			public:
				// constructor
				 sim_flwEngyTran_convectheater_water() 
				{
					com_name = "SimFlowEnergyTransfer_ConvectiveHeater_Water";
					gap_param_nr = 0; 
					// default values
					nom_power = 644; 
					T_flow_nom = 55; 
					T_return_nom = 45; 
					T_room_nom = 20; 
					_exponent = 1.2776;
					vol_water = 4.68; 
					mass_steel = 22.11; 
					rad_perct = 0.3; 
					_length = 1.3; 
					_height = 0.3;
					// expansion vessel pressure
					_boundary_p = 1;
					// pipe parameters
					_p_drop = 6.62963867188;
					_p_e = 0.0000249999993684;
					_p_d = 0.00600000005215;
				}

				// refer to object class: sim flow energy transfer by convective heater water
				SimModel::SimFlowEnergyTransfer_ConvectiveHeater_Water_iterator sim_flwEngyTran_convectheater_w_it;
				// save component id
				void save_id(set<string>& _id_set);
				// save the component id and its class instance pointer
				void save_id(map<string, sim_base*>& _id_map);
				// retrieve property values
				list<pair<string, string> >& get_prop_val();
				// save the modified propety values
				void save_prop_val(list<pair<string, string> >::iterator& _prop_it);
				// retrieve the number of gaps
				int get_gap();
				// retrieve the generic component name
				Q_INVOKABLE string get_com_name() { return com_name; }
				// retrieve additional paramters
				double get_nom_power() { return nom_power; }
				double get_T_flow_nom() { return T_flow_nom; }
				double get_T_return_nom() { return T_return_nom; }
				double get_T_room_nom() { return T_room_nom; }
				double get_exponent() { return _exponent; }
				double get_vol_water() { return vol_water; }
				double get_mass_steel() { return mass_steel; }
				double get_rad_perct() { return rad_perct; }
				double get_length() { return _length; }
				double get_height() { return _height; }
				// expansion vessel pressure
				double get_boundary_p() { return _boundary_p; }
				// pipe parameters
				double get_p_drop() { return _p_drop; }
				double get_p_e() { return _p_e; }
				double get_p_d() { return _p_d; }
				
				// Meta methods
				Q_INVOKABLE string get_SimModelType() { return sim_flwEngyTran_convectheater_w_it->SimModelType().get(); }
			private:
				// generic component name (without id)
				string com_name;
				// quantity of gaps
				int gap_param_nr;
				// save property values
				list<pair<string, string> > prop_val_maps;

				// additional paramters
				double nom_power; // nominal power of radiator at nominal temperatures in W
				double T_flow_nom; // Nominal temperatures T_flow according to DIN-EN 442. in degC [K|degC]
				double T_return_nom; // Nominal temperatures T_return according to DIN-EN 442.in deg C [K|degC]
				double T_room_nom; // Nominal temperatures T_room according to DIN-EN 442. in deg C [K|degC]
				double _exponent; // radiator exponent
				double vol_water; // Water volume inside radiator in l [l]
				double mass_steel; // Material mass of radiator in kg [kg]
				double rad_perct; // Percent of radiative heat [1]
				double _length; // Length of radiator in m [m]
				double _height; // Height of radiator in m [m]
				// expansion vessel pressure
				double _boundary_p;
				// pipe parameters
				double _p_drop; // Pressure drop between the two ports [Pa]
				double _p_e; // pipe roughness [m]
				double _p_d; // Diameter [m]

			};
			// add the class type into the meta model
			Q_DECLARE_METATYPE(sim_flwEngyTran_convectheater_water*)

			//  2.1.3.3 sim hot water supply
			class sim_hotwater_supply : public virtual sim_base
			{
				//Q_OBJECT

			private:
			// generic component name (without id)
			string com_name;
			// point to child class: sim flow mover for variable speed pump
			sim_flwMov_pump_varSpedRet* sim_flwMov_pump_varSpedRet_ptr;
			// point to child class: sim flow plant for hot wate boiler
			sim_flwPlt_hotwater_boiler* sim_flwPlt_hw_boiler_ptr;
			// quantity of gaps
			int gap_param_nr;
			// save property values
			list<pair<string, string> > prop_val_maps;

			public:
				// constructor
				sim_hotwater_supply() 
				{
					com_name = "hw_supply";
					gap_param_nr = 0; 
				}
				// set child class: sim flow mover for variable speed pump
				void set_flwMov_pump_varSpedRet(sim_flwMov_pump_varSpedRet& _sim_flwMov_pump_varSpedRet_mo);
				// get child class:
				sim_flwMov_pump_varSpedRet* get_flwMov_pump_varSpedRet();
				// set child class: sim flow plant for hot wate boiler
				void set_flwPlt_hotwater_boiler(sim_flwPlt_hotwater_boiler& _sim_flwPlt_hw_boiler_mo);
				// get child class:
				sim_flwPlt_hotwater_boiler* get_flwPlt_hotwater_boiler();
				// refer to object class: sim hot water supply
				SimModel::SimSystem_HvacHotWater_Supply_iterator sim_hw_supy_it;
				// retrieve the generic component name
				string get_com_name() { return com_name; }
				// retrieve property values
				list<pair<string, string> >& get_prop_val();
				// save the modified propety values
				void save_prop_val(list<pair<string, string> >::iterator& _prop_it) {}
				// retrieve the number of gaps
				int get_gap();
			};
			//   2.1.3.3.1 sim flow mover for variable speed pump
			class sim_flwMov_pump_varSpedRet : public sim_base
			{
				Q_OBJECT

			public:
				// constructor
				sim_flwMov_pump_varSpedRet() 
				{ 
					com_name = "SimFlowMover_Pump_VariableSpeedReturn";
					gap_param_nr = 0;
					// default paramters
					c1 = 0;
					c2 = 1;
					c3 = 0;
					c4 = 0;
					v_flow = 0.0000112961579362;
					p_head = 1;
					_period = 86400;
				}
				// retrieve property values
				list<pair<string, string> >& get_prop_val();
				// save the modified propety values
				 void save_prop_val(list<pair<string, string> >::iterator& _prop_it);
				// retrieve the number of gaps
				 int get_gap();
				// save the time series of the pump
				void save_time_series(SimModel::SimTimeSeriesSchedule_Day_Hourly_iterator& _tmsrs_dayhour_it);
				// retrieve the time series
				SimModel::SimTimeSeriesSchedule_Day_Hourly_iterator& get_time_series();
				// refer to object class:
				SimModel::SimFlowMover_Pump_VariableSpeedReturn_iterator sim_flwMov_pump_varSpedRet_it;
				// save component id
				void save_id(set<string>& _id_set);
				// save the component id and its class instance pointer
				void save_id(map<string, sim_base*>& _id_map);
				// retrieve the generic component name
				Q_INVOKABLE string get_com_name() { return com_name; }
				Q_INVOKABLE string get_SimFlowMover_RatedFlowRate() { return QString::number( sim_flwMov_pump_varSpedRet_it->SimFlowMover_RatedFlowRate().get() ).toStdString(); }
				// retrieve default paramters
				double get_c1() { return c1; }
				double get_c2() { return c2; }
				double get_c3() { return c3; }
				double get_c4() { return c4; }
				int get_period() { return _period; }

			private:
				// generic component name (without id)
				string com_name;
				// quantity of gaps
				int gap_param_nr;
				// save property values
				list<pair<string, string> > prop_val_maps;
				// default paramters
				double c1, c2, c3, c4;
				double v_flow; // volume flow rate through the pump [m3/s]
				double p_head; // pumping head [m]
				int _period; // time for one period [s]

				// refer to the time series of the pump
				SimModel::SimTimeSeriesSchedule_Day_Hourly_iterator sim_tmsrs_dayhour_it;
			};
			// add the class type into the meta model
			Q_DECLARE_METATYPE(sim_flwMov_pump_varSpedRet*)

			//   2.1.3.3.2 sim flow plant for hot wate boiler
			class sim_flwPlt_hotwater_boiler : public sim_base
			{
				Q_OBJECT

			public:
				// constructor
				Q_INVOKABLE sim_flwPlt_hotwater_boiler() 
				{ 
					com_name = "SimFlowPlant_Boiler_BoilerHotWater";
					gap_param_nr = 0; 
					// default values
					_vol = 0.00999999977648;
					_vol_t = 54.9999938965;
				}

				// refer to object class: sim flow plant for hot wate boiler
				SimModel::SimFlowPlant_Boiler_BoilerHotWater_iterator sim_flwPlt_hw_boiler_it;
				// save component id
				void save_id(set<string>& _id_set);
				// save the component id and its class instance pointer
				void save_id(map<string, sim_base*>& _id_map);
				// retrieve property values
				list<pair<string, string> >& get_prop_val();
				// save the modified propety values
				void save_prop_val(list<pair<string, string> >::iterator& _prop_it);
				// retrieve the number of gaps
				int get_gap();
				// save performance curve iterator
				void set_percur(SimModel::SimPerformanceCurve_Mathematical_Quadratic_iterator& _it);
				// get performance curve iterator
				SimModel::SimPerformanceCurve_Mathematical_Quadratic_iterator& get_percur();
				// retrieve the generic component name
				Q_INVOKABLE string get_com_name() { return com_name; }
				Q_INVOKABLE string get_SimFlowPlant_NomCap() { return QString::number( sim_flwPlt_hw_boiler_it->SimFlowPlant_NomCap().get() ).toStdString(); }
				// retrieve additional paramters
				double get_vol() { return _vol; }
				double get_vol_t() { return _vol_t; }

			private:
				// generic component name (without id)
				string com_name;
				// quantity of gaps
				int gap_param_nr;
				// save property values
				list<pair<string, string> > prop_val_maps;
				// performance curve
				SimModel::SimPerformanceCurve_Mathematical_Quadratic_iterator sim_percur_mathQuad_it;
				// additional paramters
				double _vol; // Fluid volume inside the heat generation unit [m3]
				double _vol_t; // Temperature inside the CV in K [K|degC]
			};
			// add the class type into the meta model
			Q_DECLARE_METATYPE(sim_flwPlt_hotwater_boiler*)

			//2.2 simulation configuration
			class sim_configuration : public virtual sim_base
			{
				//Q_OBJECT

			private:
				// generic component name (without id)
				string com_name;
				// quantity of gaps
				int gap_param_nr;
				// save property values
				list<pair<string, string> > prop_val_maps;

			public:
				// constructor
				sim_configuration() 
				{ 
					com_name = "configuration";
					gap_param_nr = 0; 
				}

				//! reference to object class: sim configuration
				SimModel::SimSimulationConfiguration_SimulationConfiguration_Default_iterator sim_config_it;
				// retrieve property values
				list<pair<string, string> >& get_prop_val();
				// save the modified propety values
				void save_prop_val(list<pair<string, string> >::iterator& _prop_it) {}
				// retrieve the number of gaps
				int get_gap();
				// retrieve the generic component name
				string get_com_name() { return com_name; }
			};

			// 3 sim connection between components
			class sim_conns
			{
			public:
				sim_conns() {}
				// pass componet id
				sim_conns(string _out_id, string _in_id) 
				{
					com_out_id = _out_id;
					com_in_id = _in_id;
				}
				// pass component class instance pointer
				sim_conns(sim_base* _out_ptr, sim_base* _in_ptr)
				{
					sim_com_out_ptr = _out_ptr;
					sim_com_in_ptr = _in_ptr;
				}
				// retrieve the component with outlet port
				string get_com_out_id() { return com_out_id; }
				// retrieve the component with inlet port
				string get_com_in_id() { return com_in_id; }
				// retrieve the component instance pointer with outlet port
				sim_base* get_com_out_ptr() { return sim_com_out_ptr; }
				// retrieve the component instance pointer with inlet port
				sim_base* get_com_in_ptr() { return sim_com_in_ptr; }

			private:
				// component attached with outlet port
				string com_out_id;
				// the pointer points to the sim class
				sim_base* sim_com_out_ptr;
				// component attached with inlet port
				string com_in_id;
				// the pointer points to the sim class
				sim_base* sim_com_in_ptr;
			};
#endif