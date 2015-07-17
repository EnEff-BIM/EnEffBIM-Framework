#-*- coding:utf-8 -*-
#
# This file is part of MoCGF - a code generation framework
# 20141114 Joerg Raedler jraedler@udk-berlin.de
#

# the data dictionary read from the api is the first argument,
# other arguments may be introduced later...

def filter01(d, systemCfg, generatorCfg, logger):

    logger.info('Hello, this is the filter running from module: %s', __file__)

    # walk up structure, increment age :^)
    for f in d['json_files'].values():
        for p in f:
            p['age'] += 1
