#!/usr/bin/env python

import sys

lb = [('>>> Checking dependencies for the EnEFF/BIM framework <<<',)]

def done(status=0):
    """write linebuffer lb and exit with status"""
    for l in lb:
        print(' '.join(l))
    # wait for a keypress to keep terminal open on Windows
    print('>>> Press ENTER to continue! <<<')
    sys.stdin.read(1)
    sys.exit(status)

## Checking platform
p = sys.platform
l = ['Checking platform... ', p]
if p in ('linux', 'linux2', 'win32'):
    l.append('- Ok!')
else:
    l.append('- Unsupported - good luck!')
lb.append(l)

## Checking python version
py27 = False
py34 = False
v = sys.version_info
l = ['Checking python version... ', '.'.join(str(i) for i in v)]
if v >= (3, 4):
    py34 = True
    l.append('- Ok!')
elif v >= (2, 7) and v < (3,):
    py27 = True
    l.append('Ok!')
else:
    l.append('- Please install Python 3.4 or newer and retry!')
    lb.append(l)
    done(1)
lb.append(l)

## Checking Mako
l = ['Checking mako template engine... ']
try:
    from mako.template import Template
    l.append('Ok!')
except:
    l.append('- Please install mako and retry (pip install mako)!')
lb.append(l)

## Checking PyQt4
l = ['Checking PyQt4... ']
try:
    from PyQt4 import QtGui
    l.append('Ok!')
except:
    l.append('- GUI will not run, please install PyQt4 and retry!')
lb.append(l)

## Checking configparser for python 2.7
if py27:
    l = ['Checking backported configparser:python2.7... ']
    try:
        from configparser import ConfigParser
        l.append('Ok!')
    except:
        l.append('- Please install configparser and retry (pip install configparser)!')
    lb.append(l)

done(0)
