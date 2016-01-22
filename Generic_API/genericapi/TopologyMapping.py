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
## load the SimModel classes you wanna access, e.g.,
## if you need to access a class named A, then import A like following code
import SimBuilding_Building_Default
import SimBuildingStory_BuildingStory_Default
#
## load the use case SimXML, and validate the synatx
unmapped_data = SimModel.SimModel_(modulePath + "/Boiler_Gas_VDI6020_V10.xml")

