#-*- coding:utf-8 -*-
#
# This file is part of CoTeTo - code templating tool
#

name = 'libSimModel'
description = 'SimXML file reader, return objects from SimXML files'
version = '0.1'
author = 'EnEff-BIM team'
helptxt = """
Help yourself"""

def fetchData(uriList, systemCfg, generatorCfg, logger):
    from os.path import isfile
    from json import load
    jf = {}
    if not uriList:
        logger.critical('libSimModel - no files specified!')
        raise Exception('No files specified!')
    for f in uriList:
        if isfile(f):
            logger.info('libSimModel - loading %s', f)
            jf[f] = load(open(f, 'r'))
        else:
            jf[f] = None
            logger.error('libSimModel - file not readable %s', f)
    return {'json_files': jf}
