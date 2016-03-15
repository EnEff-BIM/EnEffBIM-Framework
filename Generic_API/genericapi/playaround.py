import os
import sys
modulePath = ("D:\\GIT\EnEffBIM-Framework\\SimModel_Python_API\\simmodel_swig"
                 "\\Release")
os.environ['PATH'] = ';'.join([modulePath, os.environ['PATH']])
sys.path.append(modulePath)
import SimModel

import SimModel_Hierachy

from SimProject_Project_DesignAlternative import SimProject_Project_DesignAlternative
from SimSite_BuildingSite_Default import SimSite_BuildingSite_Default
from SimBuilding_Building_Default import SimBuilding_Building_Default
from SimFlowEnergyTransfer_ConvectiveHeater_Water import SimFlowEnergyTransfer_ConvectiveHeater_Water

from SimFlowMover_Pump_VariableSpeedReturn import SimFlowMover_Pump_VariableSpeedReturn

from SimFlowPlant_Boiler_BoilerHotWater import SimFlowPlant_Boiler_BoilerHotWater
from SimMaterial_OpaqueMaterial_Default import SimMaterial_OpaqueMaterial_Default
from SimConnection_HotWaterFlow_Default import SimConnection_HotWaterFlow_Default
from SimConnection_HotWaterFlow_Default import SimConnection_HotWaterFlow_Default
from SimFlowFitting_Splitter_DemandProxySplitterWater import SimFlowFitting_Splitter_DemandProxySplitterWater
from SimFlowFitting_Mixer_DemandProxyMixerWater import SimFlowFitting_Mixer_DemandProxyMixerWater
"""
def find_connection(hierarchy_node, starting_point, liste):
    '''

    recursive function, to find all connected items in SimXML

    Parameters
    ----------
    hierarchy_node : current hierarchy node
    starting_point
    liste

    Returns
    -------

    '''
    comp_child = hierarchy_node.getChildList()
    for i in range(comp_child.size()):
        if comp_child[i].ClassType() == "SimNode_HotWaterFlowPort_Water_Out":
            outlet_child = comp_child[i].getChildList()
            for j in range(outlet_child.size()):
                if outlet_child[j].ClassType() == "SimConnection_HotWaterFlow_Default":
                    connection_parent = outlet_child[j].getParentList()
                    for k in range(connection_parent.size()):
                        if connection_parent[k].ClassType() == "SimNode_HotWaterFlowPort_Water_In":
                            inlet_parent = connection_parent[k].getParentList()
                            for h in range(inlet_parent.size()):
                                if inlet_parent[h].ClassType != "SimConnection_HotWaterFlow_Default":
                                    if inlet_parent[h].getSimModelObject().RefId() !=  starting_point.getSimModelObject().RefId():
                                        liste.append(inlet_parent[h].getSimModelObject())
                                        find_connection(inlet_parent[h],starting_point,liste)
                                        break
                                    else:
                                        return






root_node = sim_hierarchy.getHierarchyRootNode()
all_node = sim_hierarchy.getHierarchyNodeList()
prj_child = root_node.getChildList()
new_list = []
if isinstance(root_node.getSimModelObject(),SimProject_Project_DesignAlternative):
    for a in range(prj_child.size()):
        if isinstance(prj_child[a].getSimModelObject(), SimSite_BuildingSite_Default):
            site_child = prj_child[a].getChildList()
            for b in range(site_child.size()):
                if isinstance(site_child[b].getSimModelObject(),SimBuilding_Building_Default):
                    bldg_child = site_child[b].getChildList()
                    for c in range(bldg_child.size()):
                        if bldg_child[c].ClassType() == "SimSystem_HvacHotWater_FullSystem":
                            bldg_hvac_child = bldg_child[c].getChildList()
                            for d in range(bldg_hvac_child.size()):
                                if bldg_hvac_child[d].ClassType() == "SimSystem_HvacHotWater_Supply":
                                    supply_child = bldg_hvac_child[d].getChildList()
                                    print("First call")
                                    find_connection(
                                        supply_child[0],supply_child[0],new_list)

print(new_list)

"""
sim_hierarchy = SimModel_Hierachy.SimHierarchy()

sim_data = sim_hierarchy.loadSimModel("D:\\GIT\\EnEffBIM-Framework\\SimModel_Python_API\\simmodel_swig"
                 "\\Release\\Boiler_Gas_VDI6020_V12.simxml")
#Access the pump directly
pump_direct = sim_hierarchy.getHierarchyNode("ID882")
#Access the pump over the Parent List of the Water_In distribution port
pump_indirect = sim_hierarchy.getHierarchyNode("ID1399")

print(pump_direct.isParent(pump_indirect))

if pump_direct is pump_indirect:
    print(type(pump_direct))
    print(type(pump_indirect))
    print(pump_direct.getSimModelObject(), pump_direct.getSimModelObject().RefId())
    print(pump_indirect.getSimModelObject(), pump_indirect.getSimModelObject().RefId())
    print("These two are the same")
else:
    print(type(pump_direct.getSimModelObject()))
    print(type(pump_indirect.getSimModelObject()))
    print(pump_direct.getSimModelObject(), pump_direct.getSimModelObject().RefId())
    print(pump_indirect.getSimModelObject(), pump_indirect.getSimModelObject().RefId())
    print("These two are different")
