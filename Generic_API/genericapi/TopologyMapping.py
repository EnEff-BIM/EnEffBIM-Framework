# -*- coding: utf-8 -*-
"""
Created on Fri Jan 22 11:06:14 2016

@author: pre
"""

import os
import sys
modulePath = ("D:/GIT/EnEffBIM-Framework/LibSimModelAPI/"
              "LibSimModelAPI/simmodel_swig/Release")
os.environ['PATH'] = ';'.join([modulePath, os.environ['PATH']])
print(modulePath)

sys.path.append(modulePath)
# load SimModel basic classes
import SimModel
import SimConnection_HotWaterFlow_Default
sim_instance = SimModel.SimModel_(modulePath + "/Boiler_Gas_VDI6020_V10.xml")


import genericapi.AixLib.Fluid.HeatExchangers.Boiler as Boiler
import genericapi.AixLib.Fluid.HeatExchangers.Radiators.Radiator as Radiator
import genericapi.AixLib.Fluid.Movers.Pump as Pump
import genericapi.MapAPI.MapHierarchy as MapHierarchy


print(sim_instance.SimConnection_HotWaterFlow_Default().front().SourcePort().getValue())
asd = MapHierarchy.MapProject()
test = MapHierarchy.MapBuilding(asd, asd)
ttt = Pump.instantiate_pump(asd, test, sim_instance)


print(ttt)
for g in ttt:
    print(g.sim_ref_id)
    print(g.target_name)
print(asd.connections)