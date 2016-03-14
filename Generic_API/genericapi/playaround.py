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

sim_hierarchy = SimModel_Hierachy.SimHierarchy()

sim_data = sim_hierarchy.loadSimModel("D:\\GIT\\EnEffBIM-Framework\\SimModel_Python_API\\simmodel_swig"
                 "\\Release\\Boiler_Gas_VDI6020_V12.simxml")
#Access the pump directly
zone_occ = sim_hierarchy.getHierarchyNode("ID1336")

zone_child = zone_occ.getChildList()

for i in range(zone_child.size()):
    print(zone_child[i].getSimModelObject())
