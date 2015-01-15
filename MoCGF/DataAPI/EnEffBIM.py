#-*- coding:utf-8 -*-
#
# This file is part of MoCGF - a code generation framework
# 20141114 Joerg Raedler jraedler@udk-berlin.de
#

name = 'EnEffBIM'
description = 'Data API for MoCGF to load SimModel/EnEff-BIM data.'
version = '0.1'
author = 'EnEff-BIM team'
helptxt = """
This is the help text for EnEffBIM.
Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod 
tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At 
vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, 
no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, 
consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et 
dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo 
duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est 
Lorem ipsum dolor sit amet.
"""


def fetchData(uriList=[]):
    # FIXME: add Yuns API here
    # discussion: what data do we need? probably almost all
    # return just one dictionary? many small functions? where is the preprocessing done?
    # use dot notation like pipe.length    
    dataDictionary = dict(
        modelName='TestOutput',
        mu_Water=4.7729e-4,
        rho_Water=983.83,
        cp_Water=4182.7,
        lambda_Water=0.65297,
    )
    return dataDictionary
