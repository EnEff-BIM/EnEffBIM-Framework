#-*- coding:utf-8 -*-
#
# This file is part of MoCGF - a code generation framework
# 20141114 Joerg Raedler jraedler@udk-berlin.de
#

name = 'JSONReader'
description = 'JSON file reader, return deserialized objects from JSON files'
version = '0.1'
author = 'EnEff-BIM team'
helptxt = """
All files in uriList will be read a and decoded. The return value is a
dictionary with one entry called json_data: the filenames are the keys and
the objects are the values."""

def fetchData(uriList, systemCfg, generatorCfg, logger):
    from os.path import isfile
    from json import load
    jf = {}
    if not uriList:
        logger.critical('JSONReader - no files specified!')
        raise Exception('No files specified!')
    for f in uriList:
        if isfile(f):
            logger.info('JSONReader - loading %s', f)
            jf[f] = load(open(f, 'r'))
        else:
            jf[f] = None
            logger.error('JSONReader - file not readable %s', f)
    return {'json_files': jf}
