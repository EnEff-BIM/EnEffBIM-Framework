# all following lines are just  examples
import os
import sys

rootPath = os.path.dirname(os.path.dirname(os.path.dirname(__file__)))

dllPath = os.path.join(rootPath, 'Generic_API_1.0\PythonAPI')
useCaseLoc = os.path.join(rootPath, "Generic_API\\Generic_API_1.0\\xml_use_case\\Boiler_Gas_VDI6020_Test.xml")
mapRuleLoc = os.path.join(rootPath, "Generic_API\\Generic_API_1.0\\xml_mapping_rule\\AixLib_Mapping_Rule.xml")


import simmodel2modelica as lsm

# create mapped data object
MapData = lsm.RuleData()
# set data location
MapData.setDataLocation(useCaseLoc, mapRuleLoc)

print(sys.getfilesystemencoding())
# transform SimModel data into Modelica objects
MapData.transformModel()
