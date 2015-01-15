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

def fetchData(uriList=[]):
    
    class Project(object):
    
    
        def __init__(self,model):
            self.projectName = 'TestModel'
            self.modelDescription = 'This is just a Testmodel'
            self.libraryName = 'AixLib'
            self.model = model
        
    class Model(object):
        
        def __init__(self):
            
            self.modelName = ''
            
    boiler = Model()
    pump = Model()
    
    boiler.modelName = 'AixLib.HVAC.HeatGeneration.Boiler'
    boiler.maxPower = 1000.0
    
    
    pump.modelName = 'AixLib.HVAC.Pumps.Pump'
    
    print(boiler.__class__.__dict__)
    
    
    
    return {'project' : Project([boiler,pump])}
