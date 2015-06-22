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

// include the head file
#include "simmodelParser.h"

// load SimModel hierarchy
void simmodel_parser::load_model_hierarchy(auto_ptr<SimModel>& ob_model)
{
	try 
	{

		//1. create sim project id
		string sim_pro_id = "";
		//2.1 create sim project id reference
		string sim_pro_id_ref = "";
		//2.2 create sim project design alternative id
		string sim_dsg_alt_id = "";
		// 2.1 sim site id
		string sim_site_id = "";
		// 2.1.1 sim site id reference
		string sim_site_id_ref = "";
		// 2.1.2 sim building id
		string sim_building_id = "";
		// 2.1.2 sim building id reference
		string sim_building_id_ref = "";
		// 2.1.3 sim hot water system id
		string sim_hw_sys_id = "";
		// 2.1.3.1 sim hot water system id reference
		string sim_hw_sys_id_ref = "";
		
		// init
		bool _flag = false;
	
		// load sim project info sequence: from SimModel
		//! allow multiple SimProject definitions
		SimModel::SimProject_Project_DesignAlternative_sequence& project_info = ob_model->SimProject_Project_DesignAlternative();
		for(SimModel::SimProject_Project_DesignAlternative_iterator it = project_info.begin(); it != project_info.end(); ++it)
		{
			//! save sim project reference
			sim_pro_mo.sim_project_it = it;
		}
		// retrieve sim project id
		sim_pro_id = sim_pro_mo.sim_project_it->RefId();

		//2.1 load sim site info from SimModel
		SimModel::SimSite_BuildingSite_Default_sequence& site_info = ob_model->SimSite_BuildingSite_Default();
		// retrieve the 1st sim site
		SimModel::SimSite_BuildingSite_Default_iterator sim_site_it = site_info.begin();
		// retrieve the referenced sim project id
		if(sim_site_it->SiteInSpatialContainer().present())
			sim_pro_id_ref = (string) sim_site_it->SiteInSpatialContainer().get();
		// check reference equality
		if(sim_pro_id_ref == sim_pro_id) 
		{
			// save 1st sim site reference
			sim_pro_mo.sim_site_it = sim_site_it;
			//! save 1st child reference: sim site model
			sim_pro_mo.set_sim_site(sim_site_mo);
			//! save the pointer to the children list
			sim_pro_mo.save_sim_site(&sim_site_mo);
			//! initialize sim site reference
			sim_site_mo.sim_site_it = sim_site_it;
			// save site id
			sim_site_mo.save_id(id_map);
			// retrieve sim site id
			sim_site_id = sim_site_mo.sim_site_it->RefId();
	
			// retrieve the weather data
			// access building location template
			SimModel::SimTemplateLocation_Location_Default_sequence& sim_loc_tmp = ob_model->SimTemplateLocation_Location_Default();
			for(SimModel::SimTemplateLocation_Location_Default_iterator sim_loc_tmp_it = sim_loc_tmp.begin(); sim_loc_tmp_it != sim_loc_tmp.end(); ++sim_loc_tmp_it)
			{
				// check location template id
				if((string)sim_loc_tmp_it->RefId() == (string)sim_site_mo.sim_site_it->LocationsTemplate().get())
				{
					// save location template
					sim_site_mo.set_sim_loc(sim_loc_tmp_it);
					// weather template of summer days
					SimModel::SimLocationAndWeather_DesignDay_Default_sequence& sim_wtr_tmp = ob_model->SimLocationAndWeather_DesignDay_Default();
					for(SimModel::SimLocationAndWeather_DesignDay_Default_iterator sim_wtr_tmp_it = sim_wtr_tmp.begin(); sim_wtr_tmp_it != sim_wtr_tmp.end(); ++sim_wtr_tmp_it)
					{
						// check weather template id
						if((string)*sim_loc_tmp_it->TemplateSummerDesignDays().get().begin()==(string)sim_wtr_tmp_it->RefId())
						{
							// save summer day template
							sim_site_mo.set_sim_weather_sum(sim_wtr_tmp_it);
							break;
						}
					}

					break;
				}
			}

		}

		// 2.1.1 load sim building info from SimModel
		SimModel::SimBuilding_Building_Default_sequence& building_info = ob_model->SimBuilding_Building_Default();
		// retrieve the 1st sim building
		SimModel::SimBuilding_Building_Default_iterator sim_building_it = building_info.begin();
		// retrieve the referenced sim site id
		if(sim_building_it->BuildingInSpatialContainer().present())
			sim_site_id_ref = sim_building_it->BuildingInSpatialContainer().get();
		// check reference equality
		if(sim_site_id_ref == sim_site_id)
		{
			//! save child reference for sim_site: sim building model
			sim_site_mo.set_sim_building(sim_building_mo);
			// save the pointer to the children list
			sim_site_mo.save_sim_building(&sim_building_mo);
			//! init sim building reference
			sim_building_mo.sim_building_it = sim_building_it;
			//! set storey number: nb+1
			sim_building_mo.set_storey_nb((int)sim_building_mo.sim_building_it->BuildingNumberofStoreys().get()+1);
			// retrieve sim building id
			sim_building_id = sim_building_mo.sim_building_it->RefId();
		}

		//  2.1.1.1 load buidling stories: n+1 info from SimModel
		SimModel::SimBuildingStory_BuildingStory_Default_sequence& building_storey_info = ob_model->SimBuildingStory_BuildingStory_Default();
		// retrieve all storeys
		for(SimModel::SimBuildingStory_BuildingStory_Default_iterator sim_building_storey_it = building_storey_info.begin(); sim_building_storey_it != building_storey_info.end(); ++sim_building_storey_it)
		{
			// check reference id equality
			if(sim_building_storey_it->BldgStoryInSpatialContainer().present() && (string)sim_building_storey_it->BldgStoryInSpatialContainer().get() == (string)sim_building_mo.sim_building_it->RefId())
			{
				// check storey number
				if(sim_building_storey_it->BuildingStoryNumber().present())
				{
					// storey location in the container
					int sloc = (int)sim_building_storey_it->BuildingStoryNumber().get() - 1;
					//! save child class: create storey
					sim_building_mo.sim_building_storey_vec[sloc] = new sim_building_storey();
					//! init storey reference
					sim_building_mo.sim_building_storey_vec[sloc]->sim_building_storey_it = sim_building_storey_it;
					// check storey location
					if((int)sim_building_storey_it->BuildingStoryNumber().get() == sim_building_mo.get_storey_nb())
					{
						// set as roof storey
						sim_building_mo.sim_building_storey_vec[sloc]->isRoof = true;
					}
				}
			}
		}
		
		//   2.1.1.1.1 load space occupied info from SimModel
		SimModel::SimSpace_Occupied_Default_sequence& space_occupied_info = ob_model->SimSpace_Occupied_Default();
		// check used reference
		for(SimModel::SimSpace_Occupied_Default_iterator sim_space_occupied_it = space_occupied_info.begin(); sim_space_occupied_it != space_occupied_info.end(); ++sim_space_occupied_it)
		{
			// check id equality: !temp: storey 1
			if(sim_space_occupied_it->SpaceInSpatialContainer().present() && (string)sim_space_occupied_it->SpaceInSpatialContainer().get() == (string)sim_building_mo.sim_building_storey_vec[0]->sim_building_storey_it->RefId())
			{
				//! save child class:
				sim_building_mo.sim_building_storey_vec[0]->set_space_occupied(sim_space_occupied_mo);
				//! init class reference 
				sim_space_occupied_mo.sim_space_occupied_it = sim_space_occupied_it;
				// stop iterating
				break;
			}
		}

		// 2.1.2-1 load sim zone group info from SimModel
		SimModel::SimGroup_SpatialZoneGroup_ZoneGroup_sequence& zone_group_info = ob_model->SimGroup_SpatialZoneGroup_ZoneGroup();
		// retrieve the 1st sim zone group
		SimModel::SimGroup_SpatialZoneGroup_ZoneGroup_iterator sim_zone_group_it = zone_group_info.begin();
		// retrieve the referenced sim building id
		if(sim_zone_group_it->ContainingBuildings().present())
		{
			// retrieve containing building ids
			idrefs& ids = sim_zone_group_it->ContainingBuildings().get();
			// retrieve the 1st building id
			sim_building_id_ref = *ids.begin();
		}
		// check reference
		if(sim_building_id_ref == sim_building_id)
		{
			//! init sim zone group reference
			sim_group_mo.sim_zone_group_it = sim_zone_group_it;
		}

		// 2.1.2-2 load sim zone HVAC group info from SimModel
		SimModel::SimGroup_SpatialZoneGroup_ZoneHvacGroup_sequence& hvac_group_info = ob_model->SimGroup_SpatialZoneGroup_ZoneHvacGroup();
		// retrieve the 1st sim zone HVAC group
		for(SimModel::SimGroup_SpatialZoneGroup_ZoneHvacGroup_iterator sim_hvac_group_it = hvac_group_info.begin(); sim_hvac_group_it != hvac_group_info.end(); ++sim_hvac_group_it)
		{
			// re-init
			sim_building_id_ref = "";
			// retrieve referenced/used hvac group
			if(sim_hvac_group_it->ContainingBuildings().present())
			{
				// retrieve containing building ids
				idrefs& ids = sim_hvac_group_it->ContainingBuildings().get();
				// retrieve the 1st building id
				sim_building_id_ref = *ids.begin();
			}
			// check reference
			if(sim_building_id_ref == sim_building_id)
			{
				//! init sim hvac group reference
				sim_group_mo.sim_hvac_group_it = sim_hvac_group_it;

				//! stop iteration: check the 1st used group
				break;
			}
		}

		//! 2.1.2-3 save child reference for sim_site: sim zone & HVAC group model
		sim_site_mo.set_sim_group(sim_group_mo);

		//  2.1.2.1 load sim thermal zone info from SimModel
		SimModel::SimSpatialZone_ThermalZone_Default_sequence& thermal_zone_info = ob_model->SimSpatialZone_ThermalZone_Default();
		// retrieve the 1st sim therma zone
		SimModel::SimSpatialZone_ThermalZone_Default_iterator sim_thermal_zone_it = thermal_zone_info.begin();
		// 2.1.2.1-1 retrieve referenced sim zone group id & HVAC group id: IDREFS
		if(sim_thermal_zone_it->ParentGroups().present())
		{
			// re-init bool flag
			_flag = false;
			idrefs& ids = sim_thermal_zone_it->ParentGroups().get();
			// check referenced id pair equality
			if((string)sim_group_mo.sim_hvac_group_it->RefId() == (string)ids.front() && (string)sim_group_mo.sim_zone_group_it->RefId() == (string)ids.back() || (string)sim_group_mo.sim_hvac_group_it->RefId() == (string)ids.back() && (string)sim_group_mo.sim_zone_group_it->RefId() == (string)ids.front())
				_flag = true;
		}		
		// 2.1.2.1-2 retrieve referenced sim building id: IDREFS
		if(sim_thermal_zone_it->ContainingBuilding().present())
		{
			sim_building_id_ref = sim_thermal_zone_it->ContainingBuilding().get();
		}
		// 2.1.2.1-3 check referenced id pair for zone & zone HVAC group
		if(_flag)
		{
			//! save child reference for sim_group: sim_thermal_zone
			sim_group_mo.set_thermal_zone(sim_thermal_zone_mo);
			//! init sim thermal zone reference
			sim_thermal_zone_mo.sim_thermal_zone_it = sim_thermal_zone_it;
		}
		//!temp:   2.1.1.1.1 check id for assigned space occupied and building
		if(sim_building_id_ref == sim_building_id && (string)sim_thermal_zone_mo.sim_thermal_zone_it->RefId() == (string)sim_space_occupied_mo.sim_space_occupied_it->SpaceZoneAssignments().get().front())
		{
			//! save child class: thermal zone
			sim_space_occupied_mo.set_thermal_zone(sim_thermal_zone_mo);
			//! save the pointer to the child class for sim_building
			sim_building_mo.save_sim_thermal_zone(&sim_thermal_zone_mo);
		}

		// 2.1.3 load simulation hot water system info from SimModel
		SimModel::SimSystem_HvacHotWater_FullSystem_sequence& hw_system_info = ob_model->SimSystem_HvacHotWater_FullSystem();
		// retrieve referenced/used hot water system: by sim_buiding class
		for(SimModel::SimSystem_HvacHotWater_FullSystem_iterator sim_hw_system_it = hw_system_info.begin(); sim_hw_system_it != hw_system_info.end(); ++sim_hw_system_it)
		{
			// re-init
			sim_building_id_ref = "";
			// retrieve referenced sim buidling id
			if(sim_hw_system_it->SystemServicesSpatialElements().present())
			{
				sim_building_id_ref = sim_hw_system_it->SystemServicesSpatialElements().get().front();
			}
			// check sim building ids
			if(sim_building_id_ref == sim_building_id)
			{
				//! init sim hot wate system reference
				sim_hw_sys_mo.sim_hotwater_system_it = sim_hw_system_it;
				//! save child class: sim system objects
				sim_building_mo.save_sim_system(&sim_hw_sys_mo);
				break;
			}
		}
		
		//  2.1.3.1 load simulation hot water loop control info from SimModel
		SimModel::SimSystem_HvacHotWater_Control_sequence& hw_ctl_info = ob_model->SimSystem_HvacHotWater_Control();
		// retrieve used hot water loop control
		for(SimModel::SimSystem_HvacHotWater_Control_iterator sim_hw_ctl_it = hw_ctl_info.begin(); sim_hw_ctl_it != hw_ctl_info.end(); ++sim_hw_ctl_it)
		{
			// check reference id equality
			if(sim_hw_ctl_it->ParentSystem().present() && (string)sim_hw_ctl_it->ParentSystem().get() == (string)sim_hw_sys_mo.sim_hotwater_system_it->RefId())
			{
				//! save child class pointer
				sim_hw_sys_mo.set_hotwater_control(sim_hw_ctl_mo);
				//! init sim hot wate loop conrol reference
				sim_hw_ctl_mo.sim_hw_ctl_it = sim_hw_ctl_it;
				// stop iterating
				break;
			}
		}

		//   2.1.3.1.1 load sim supply water temperature control info from SimModel
		SimModel::SimController_SupplyWater_Temperature_sequence& sw_temp_ctl_info = ob_model->SimController_SupplyWater_Temperature();
		// retrieve used supply water temperature control
		for(SimModel::SimController_SupplyWater_Temperature_iterator sim_sw_temp_ctl_it = sw_temp_ctl_info.begin(); sim_sw_temp_ctl_it != sw_temp_ctl_info.end(); ++sim_sw_temp_ctl_it)
		{
			// check reference id equality: return IDREFS, retrieve the 1st one
			if(sim_sw_temp_ctl_it->AssignedToGroups().present() && (string)sim_sw_temp_ctl_it->AssignedToGroups().get().front() == (string)sim_hw_ctl_mo.sim_hw_ctl_it->RefId())
			{
				//! save child class pointer
				sim_hw_ctl_mo.set_supplywater_temp_control(sim_sw_temp_ctl_mo);
				//! init object reference
				sim_sw_temp_ctl_mo.sim_sw_temp_ctl_it = sim_sw_temp_ctl_it;
				// stop iterating
				break;
			}
		}
			
		//   2.1.3.1.2 load sim dry bulb temperature sensor info from SimModel
		SimModel::SimSensor_TemperatureSensor_DryBulb_sequence& temp_dbb_ssr_info = ob_model->SimSensor_TemperatureSensor_DryBulb();
		// retrieve used dry bulb sensor
		for(SimModel::SimSensor_TemperatureSensor_DryBulb_iterator sim_temp_dbb_ssr_it = temp_dbb_ssr_info.begin(); sim_temp_dbb_ssr_it != temp_dbb_ssr_info.end(); ++sim_temp_dbb_ssr_it)
		{
			// check reference id equality:
			if(sim_temp_dbb_ssr_it->AssignedToGroups().present() && (string)sim_temp_dbb_ssr_it->AssignedToGroups().get().front() == (string)sim_hw_ctl_mo.sim_hw_ctl_it->RefId())
			{
				//! save child class pointer
				sim_hw_ctl_mo.set_temp_drybulb_sensor(sim_temp_dbb_ssr_mo);
				//! init object reference
				sim_temp_dbb_ssr_mo.sim_temp_dbb_ssr_it = sim_temp_dbb_ssr_it;
				// stop iterating
				break;
			}
		}

		//  2.1.3.2 load sim hot water demand info from SimModel
		SimModel::SimSystem_HvacHotWater_Demand_sequence& hw_dmd_info = ob_model->SimSystem_HvacHotWater_Demand();
		// retrieve used sim hot water demand
		for(SimModel::SimSystem_HvacHotWater_Demand_iterator sim_hw_dmd_it = hw_dmd_info.begin(); sim_hw_dmd_it != hw_dmd_info.end(); ++sim_hw_dmd_it)
		{		
			// check reference id equality
			if(sim_hw_dmd_it->ParentSystem().present() && (string)sim_hw_dmd_it->ParentSystem().get() == (string)sim_hw_sys_mo.sim_hotwater_system_it->RefId())
			{
				//! save child class pointer
				sim_hw_sys_mo.set_hotwater_demand(sim_hw_dmd_mo);
				//! init sim hot water demand reference
				sim_hw_dmd_mo.sim_hw_dmd_it = sim_hw_dmd_it;
				// stop iterating
				break;
			}
		}
		
		//   2.1.3.2.1 load sim flow energy transfer by convective heater water info from SimModel
		SimModel::SimFlowEnergyTransfer_ConvectiveHeater_Water_sequence& flwEngyTran_convectheater_w_info = ob_model->SimFlowEnergyTransfer_ConvectiveHeater_Water();
		// retrieve used sim flow
		for(SimModel::SimFlowEnergyTransfer_ConvectiveHeater_Water_iterator sim_flwEngyTran_convectheater_w_it = flwEngyTran_convectheater_w_info.begin(); sim_flwEngyTran_convectheater_w_it != flwEngyTran_convectheater_w_info.end(); ++sim_flwEngyTran_convectheater_w_it)
		{
			// re-init bool flag
			_flag = false;
			// check reference id equality
			if(sim_flwEngyTran_convectheater_w_it->AssignedToGroups().present())
			{
				// retrieve a list of ids
				idrefs& ids = sim_flwEngyTran_convectheater_w_it->AssignedToGroups().get();
				for(idrefs_it ids_it = ids.begin(); ids_it != ids.end(); ++ids_it)
				{
					// check id reference equality
					if((string)*ids_it == (string)sim_hw_dmd_mo.sim_hw_dmd_it->RefId()) 
					{
						//! save child class pointer
						sim_hw_dmd_mo.set_flwEngyTran_convectheater_water(sim_flwEngyTran_convectheater_w_mo);
						//! init sim flow energy transfer reference
						sim_flwEngyTran_convectheater_w_mo.sim_flwEngyTran_convectheater_w_it = sim_flwEngyTran_convectheater_w_it;
						// save radiator id
						sim_flwEngyTran_convectheater_w_mo.save_id(id_map);
						_flag = true;
						// stop iterating
						break;
					}
				}
			}

			// find the child id
			// stop the iteration
			if(_flag)
				break;
		}

		//  2.1.3.3 load sim hot water supply info from SimModel
		SimModel::SimSystem_HvacHotWater_Supply_sequence& hw_supy_info = ob_model->SimSystem_HvacHotWater_Supply();
		// retrieve used hot water supply reference
		for(SimModel::SimSystem_HvacHotWater_Supply_iterator sim_hw_supy_it = hw_supy_info.begin(); sim_hw_supy_it != hw_supy_info.end(); ++sim_hw_supy_it)
		{
			// check id equality
			if(sim_hw_supy_it->ParentSystem().present() && (string)sim_hw_supy_it->ParentSystem().get() == (string)sim_hw_sys_mo.sim_hotwater_system_it->RefId())
			{
				//! save child class pointer
				sim_hw_sys_mo.set_hotwater_supply(sim_hw_supy_mo);
				//! init sim hot water supply reference
				sim_hw_supy_mo.sim_hw_supy_it = sim_hw_supy_it;
				// stop iterating
				break;
			}
		}

		//   2.1.3.3.1 load sim flow mover for variable speed pump info from SimModel
		SimModel::SimFlowMover_Pump_VariableSpeedReturn_sequence& flwMov_pump_varSpedRet_info = ob_model->SimFlowMover_Pump_VariableSpeedReturn();
		// retrieve used pump reference
		for(SimModel::SimFlowMover_Pump_VariableSpeedReturn_iterator flwMov_pump_varSpedRet_it = flwMov_pump_varSpedRet_info.begin(); flwMov_pump_varSpedRet_it != flwMov_pump_varSpedRet_info.end(); ++flwMov_pump_varSpedRet_it)
		{
			// check id equality
			if(flwMov_pump_varSpedRet_it->AssignedToGroups().present() && (string)flwMov_pump_varSpedRet_it->AssignedToGroups().get().front() == (string)sim_hw_supy_mo.sim_hw_supy_it->RefId())
			{
				//! save child class pointer
				sim_hw_supy_mo.set_flwMov_pump_varSpedRet(sim_flwMov_pump_varSpedRet_mo);
				//! init pump reference
				sim_flwMov_pump_varSpedRet_mo.sim_flwMov_pump_varSpedRet_it = flwMov_pump_varSpedRet_it;
				// save pump id
				sim_flwMov_pump_varSpedRet_mo.save_id(id_map);

				// check time series referenced
				for(SimModel::SimTimeSeriesSchedule_Day_Hourly_iterator sim_tmsrs_dayhour_it = ob_model->SimTimeSeriesSchedule_Day_Hourly().begin(); sim_tmsrs_dayhour_it != ob_model->SimTimeSeriesSchedule_Day_Hourly().end(); ++sim_tmsrs_dayhour_it)
				{
					// check the series id
					if((string)sim_tmsrs_dayhour_it->RefId()==(string)flwMov_pump_varSpedRet_it->SimFlowMover_PumprpmSchedName().get())
					{
						// save referenced time series
						sim_flwMov_pump_varSpedRet_mo.save_time_series(sim_tmsrs_dayhour_it);
						
						// stop iterating
						break;
					}
				}

				// stop iterating
				break;
			}
		}

		//   2.1.3.3.2 load sim flow plant for hot wate boiler info from SimModel
		SimModel::SimFlowPlant_Boiler_BoilerHotWater_sequence& flwPlt_hw_boiler_info = ob_model->SimFlowPlant_Boiler_BoilerHotWater();
		// retrieve used boilder reference
		for(SimModel::SimFlowPlant_Boiler_BoilerHotWater_iterator sim_flwPlt_hw_boiler_it = flwPlt_hw_boiler_info.begin(); sim_flwPlt_hw_boiler_it != flwPlt_hw_boiler_info.end(); ++sim_flwPlt_hw_boiler_it)
		{
			// check id equality
			if(sim_flwPlt_hw_boiler_it->AssignedToGroups().present() && (string)sim_flwPlt_hw_boiler_it->AssignedToGroups().get().front() == (string)sim_hw_supy_mo.sim_hw_supy_it->RefId())
			{
				//! save child class pointer
				sim_hw_supy_mo.set_flwPlt_hotwater_boiler(sim_flwPlt_hotwater_boiler_mo);
				//! init boiler reference
				sim_flwPlt_hotwater_boiler_mo.sim_flwPlt_hw_boiler_it = sim_flwPlt_hw_boiler_it;
				// save boiler id
				sim_flwPlt_hotwater_boiler_mo.save_id(id_map);

				// retreive performance curve
				// load performance curve list
				SimModel::SimPerformanceCurve_Mathematical_Quadratic_sequence& percur_mathquad_info = ob_model->SimPerformanceCurve_Mathematical_Quadratic();
				// iterate the list
				for(SimModel::SimPerformanceCurve_Mathematical_Quadratic_iterator percur_mathquad_it=percur_mathquad_info.begin(); percur_mathquad_it!=percur_mathquad_info.end(); ++percur_mathquad_it)
				{
					// save referenced performance curve
					if(sim_flwPlt_hotwater_boiler_mo.sim_flwPlt_hw_boiler_it->SimFlowPlant_NrmlizedBoilerEffCurveName().present() && (string)percur_mathquad_it->RefId()==(string)sim_flwPlt_hotwater_boiler_mo.sim_flwPlt_hw_boiler_it->SimFlowPlant_NrmlizedBoilerEffCurveName().get())
					{
						sim_flwPlt_hotwater_boiler_mo.set_percur(percur_mathquad_it);
						break;
					}
				}

				// stop iterating
				break;
			}
		}

		//2.2 load sim simulation info from SimModel
		//! allow multiple SimSimulationConfiguration definitions
		SimModel::SimSimulationConfiguration_SimulationConfiguration_Default_sequence& simulation_info = ob_model->SimSimulationConfiguration_SimulationConfiguration_Default();
		// retrieve the 1st sim simulation configuration
		SimModel::SimSimulationConfiguration_SimulationConfiguration_Default_iterator sim_simulation_it = simulation_info.begin();
		// retrieve the referenced sim project design alternative id
		if(sim_simulation_it->DesignAlternative().present())
			sim_dsg_alt_id = sim_simulation_it->DesignAlternative().get();

		if(sim_dsg_alt_id == sim_pro_id)
		{
			// save 1st sim simulation configuration reference
			sim_pro_mo.sim_config_it = sim_simulation_it;
			//! save 1st child reference: sim configuration model
			sim_pro_mo.set_sim_configuration(sim_config_mo);
			//! initialize sim simulation configuration reference
			sim_config_mo.sim_config_it = sim_simulation_it;
		}
		//
		// ending
	} 
	catch (const xml_schema::exception& e) 
	{
		cerr << e << endl;
	}
}

// retrieve hosted component attached with outlet port
string simmodel_parser::get_host_out_id(auto_ptr<SimModel>& ob_model, string _port_id)
{
	// check hot water outlet port
	for(SimModel::SimDistributionPort_HotWaterFlowPort_Water_Out_iterator _hw_out_it=ob_model->SimDistributionPort_HotWaterFlowPort_Water_Out().begin(); _hw_out_it!=ob_model->SimDistributionPort_HotWaterFlowPort_Water_Out().end(); ++_hw_out_it)
	{
		if((string)_hw_out_it->RefId()==_port_id)
			return _hw_out_it->HostElement().get();
	}

	// check control inlet port
	for(SimModel::SimDistributionPort_DigitalControlPort_DigitalSignal_In_iterator _ds_in_it=ob_model->SimDistributionPort_DigitalControlPort_DigitalSignal_In().begin(); _ds_in_it!=ob_model->SimDistributionPort_DigitalControlPort_DigitalSignal_In().end(); ++_ds_in_it)
	{
		if((string)_ds_in_it->RefId()==_port_id)
			return _ds_in_it->HostElement().get();
	}

	// return default id
	return "";
}

// retrieve hosted component attached with inlet port
string simmodel_parser::get_host_in_id(auto_ptr<SimModel>& ob_model, string _port_id)
{
	// check hot water inlet port
	for(SimModel::SimDistributionPort_HotWaterFlowPort_Water_In_iterator _hw_in_it=ob_model->SimDistributionPort_HotWaterFlowPort_Water_In().begin(); _hw_in_it!=ob_model->SimDistributionPort_HotWaterFlowPort_Water_In().end(); ++_hw_in_it)
	{
		if((string)_hw_in_it->RefId()==_port_id)
			return _hw_in_it->HostElement().get();
	}

	// check control inlet port
	for(SimModel::SimDistributionPort_DigitalControlPort_DigitalSignal_In_iterator _ds_in_it=ob_model->SimDistributionPort_DigitalControlPort_DigitalSignal_In().begin(); _ds_in_it!=ob_model->SimDistributionPort_DigitalControlPort_DigitalSignal_In().end(); ++_ds_in_it)
	{
		if((string)_ds_in_it->RefId()==_port_id)
			return _ds_in_it->HostElement().get();
	}

	// return default id
	return "";
}

// load sim connections between HVAC components
void simmodel_parser::load_sim_conns(auto_ptr<SimModel>& ob_model)
{
	// reset container capacity
	conns_vec.reserve(ob_model->SimConnection_HotWaterFlow_Default().size());
	// load default hot water connections
	for(SimModel::SimConnection_HotWaterFlow_Default_iterator _hw_conn_it=ob_model->SimConnection_HotWaterFlow_Default().begin(); _hw_conn_it!=ob_model->SimConnection_HotWaterFlow_Default().end(); ++_hw_conn_it)
	{
		// host component attached with outlet port
		string host_out = get_host_out_id(ob_model, _hw_conn_it->SourcePort().get());
		// host component attached with inlet port
		string host_in = get_host_in_id(ob_model, _hw_conn_it->TargetPort().get());
		// check whether the components are valid
		map<string, sim_base*>::iterator _id_map_out_it = id_map.find(host_out);
		map<string, sim_base*>::iterator _id_map_in_it = id_map.find(host_in);
		if(_id_map_out_it!=id_map.end() && _id_map_in_it!=id_map.end())
		{
			// save this connection
			sim_conns _conn_obj(_id_map_out_it->second, _id_map_in_it->second);
			conns_vec.push_back(_conn_obj);
		}	
	}
}