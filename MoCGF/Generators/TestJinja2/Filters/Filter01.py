#-*- coding:utf-8 -*-
#
# This file is part of MoCGF - a code generation framework
# 20141114 Joerg Raedler jraedler@udk-berlin.de
#

# the data dictionary read from the api is the first argument,
# other arguments may be introduced later...

def filter01(d, *args, **kwargs):

    print('Filter running from module:', __file__)

    # manipulate some data
    d['foo'] += 1

    # add more data
    d['bar'] = 2.0 * d['foo']
