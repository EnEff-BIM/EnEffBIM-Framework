# file: runme.py

# This file illustrates the proxy class C++ interface generated
# by SWIG.
# Please run this code in Python 2.6 32bit environment
# Our new binding tool SWIG also supports the Python 3
# We will add the Python 3 support in next demo

import test_dll
simObj = test_dll.SimRoot()
# the following two I/O functions are added manually for testing
# as we can not retrieve the data from the SimXML file yet
simObj.setId('111')
print simObj.refId()
# print the default property defined in SimModel
simObj.Description() # the output is empty as we haven't loaded the real data from SimXML
simObj.IfcName() # the same result will be given as above function call




