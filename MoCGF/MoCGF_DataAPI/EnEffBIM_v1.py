#-*- coding:utf-8 -*-
#
# This file is part of MoCGF - a code generation framework
#

name = 'EnEffBIM'
description = 'Data API for MoCGF to load SimModel/EnEff-BIM data.'
version = '1.0'
author = 'EnEff-BIM team'
helptxt = """
Trying to use the API
"""

def fetchData(uriList, systemCfg, generatorCfg, logger):
    import os
    import sys

    rootPath = os.path.dirname(os.path.dirname(os.path.dirname(__file__)))
    modulePath = os.path.join(rootPath, 'Generic_API\Generic_API_1.0')
    dllPath = os.path.join(rootPath, 'Generic_API\Generic_API_1.0\PythonAPI')
    useCaseLoc = os.path.join(rootPath, "Generic_API\\Generic_API_1.0\\xml_use_case\\Boiler_Gas_VDI6020_Test.xml")
    mapRuleLoc = os.path.join(rootPath, "Generic_API\\Generic_API_1.0\\xml_mapping_rule\\AixLib_Mapping_Rule.xml")

    # add dllPath to Windows Path
    os.environ['PATH'] = ';'.join([dllPath, os.environ['PATH']])
    # add modulePath to Python Path
    sys.path.append(modulePath)

    from PythonAPI import simmodel2modelica as lsm
    # create mapped data object
    MapData = lsm.RuleData()
    # set data location
    MapData.setDataLocation(useCaseLoc, mapRuleLoc)
    # transform SimModel data into Modelica objects
    MapData.transformModel()
    simProject = MapData.getSimProject()

    # access transformed / mapped data
    componentNumber = MapData.getComponentNumber()
    # iterate each mapped component data
    comDict = {}
    for comId in range(0, componentNumber):
        # retrieve the mapped component name and its location in AixLib
        comPath = MapData.getComponent(comId).getTargetLocation()
        comName = MapData.getComponent(comId).getTargetName()
        comDict[comName] = comPath
        nProperties = MapData.getComponent(comId).getPropertyNumber()
        # iterate mapped properties of each component
        for proId in range(0, nProperties):
            testXYZ = MapData.getComponent(comId).getProperty(proId).getRecordInstance()
                #print("record structure name: " +
                # MapData.getComponent(comId).getProperty(proId).getRecordInstance())
            testZYX = MapData.getComponent(comId).getProperty(proId).getRecordLocation()
                #print("record structure location: " + MapData.getComponent(comId).getProperty(proId).getRecordLocation())
            # print("Property: " +
            # MapData.getComponent(comId).getProperty(proId).getTargetLocation()
            # + MapData.getComponent(comId).getProperty(proId).getName() + "="
            # + MapData.getComponent(comId).getProperty(proId).getValue())

    dataDictionary=dict(
        modelName='TestOutput',
        location=simProject.getWeatherLocationCity(),
        componentNumber=componentNumber,
        comDict=comDict
    )
    return dataDictionary
