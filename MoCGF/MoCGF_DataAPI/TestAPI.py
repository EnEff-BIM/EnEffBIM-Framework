#-*- coding:utf-8 -*-
#
# This file is part of MoCGF - a code generation framework
# 20141114 Joerg Raedler jraedler@udk-berlin.de
#

name = 'TestAPI'
description = 'Test API to get to know how this works'
version = '0.1'
author = 'EnEff-BIM team'
helptxt = """no helptext"""

def fetchData(uriList, systemCfg, generatorCfg, logger):

    class Project(object):


        def __init__(self):
            self.projectName = 'TestModel'
            self.modelDescription = 'This is just a Testmodel'
            self.libraryName = 'AixLib'
            #self.model = model

    class Model(object):

        def __init__(self):

            self.modelName = ''

    class Connections(object):

        def __init__(self):

            self.connections = {}

    boiler = Model()
    pump = Model()
    connections = Connections()


    boiler.modelName= 'Boiler'
    boiler.modelPath= 'HVAC/HeatGeneration/Boiler'
    boiler.power = 1000.0
    pump.modelName= 'Pump'
    pump.modelPath= 'HVAC/HeatGeneration/Pump'
    pump.head = 5.0
    connections = Connections()
    connections.connections = {'Boiler' : 'Pump', 'test1':'test2'}

    return {'project' : Project(), 'models' : [boiler,pump], 'connections' : connections}
