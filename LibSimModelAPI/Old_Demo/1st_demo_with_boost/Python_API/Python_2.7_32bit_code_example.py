#  Copyright E3D, RWTH Aachen University 2013-2015. Distributed under the Boost
#  Software License, Version 1.0. (See accompanying file LICENSE_1_0.txt
#  or copy at http://www.boost.org/LICENSE_1_0.txt)
#  SimRoot Example from the SimModel API

import test_dll
simRootObj = test_dll.schema.simxml.SimModelCore.SimRoot()
simRootObj.setId('111')
print simRootObj.refId()
