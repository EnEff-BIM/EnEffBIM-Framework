#-*- coding:utf-8 -*-
#
# This file is part of CoTeTo - a code generation tool
# 201500225 Joerg Raedler jraedler@udk-berlin.de
#

import sys

__version__ = '0.2'

# python version check

# please handle py27 a s a special case which may be removed later
v = sys.version_info
if v >= (3, 3):
    py33 = True
    py27 = False
elif v >= (2, 7) and v < (3,):
    py33 = False
    py27 = True
else:
    raise Exception('This software runs on python versions 2.7 or >=3.3 only!')

	
# special hack for mako on windows to correct a nasty line ending problem
if sys.platform.startswith('win'):
	def read_file(path, mode='r'):
		fp = open(path, mode)
		try:
			data = fp.read()
			return data
		finally:
			fp.close()
	# hot patch loaded module :-)
	import mako.util
	mako.util.read_file = read_file
	del read_file
