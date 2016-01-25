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
import base
## load SimXML I/O functions
import SimModel

#
## load the use case SimXML, and validate the synatx
try:
    unmapped_data = SimModel.SimModel_(modulePath + "/Boiler_Gas_VDI6020_V10.xml")
except:
    print("file not readable")



import genericapi.AixLib.Fluid.HeatExchangers.Boiler as Boiler
import genericapi.AixLib.Fluid.HeatExchangers.Radiators.Radiator as Radiator
import genericapi.AixLib.Fluid.Movers.Pump as Pump
import genericapi.MapAPI.MapHierarchy as MapHierarchy

asd = MapHierarchy.MapProject()
test = MapHierarchy.MapBuilding(asd)
ttt = Pump.instantiate_pump(asd, test, unmapped_data)
print(ttt)
for g in ttt:
    print(g.sim_ref_id)
print(asd.connections)