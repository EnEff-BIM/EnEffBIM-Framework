from ctypes import *

lib = cdll.LoadLibrary('./simmodel2modelica')

class Property(object):
    def __init__(self, obj):
        self.obj = obj
    def getName(self):
        return lib.property_get_name(self.obj)
    def getValue(self):
        return lib.property_get_value(self.obj)
    def getTargetLocation(self):
        return lib.property_get_target_location(self.obj)
    def getRecordInstance(self):
        return lib.property_get_record_instance(self.obj)
    def getRecordLocation(self):
        return lib.property_get_record_location(self.obj)
    def getValueGroup(self):
        return lib.property_get_value_group(self.obj)
    def getFlag(self):
        return lib.property_get_flag(self.obj)

class Component(object):
    def __init__(self, obj):
        self.obj = obj
    def getTargetName(self):
        return lib.component_get_target_name(self.obj)
    def getTargetLocation(self):
        return lib.component_get_target_location(self.obj)
    def getProperty(self, id):
        return lib.component_get_property(self.obj, id)
    def getPropertyNumber(self):
        return lib.component_get_property_number(self.obj)

class RuleData(object):
    def __init__(self):
        self.obj = lib.rule_data_init()
    def getComponent(self, id):
        return lib.rule_data_get_component(self.obj, id)
    def getComponentNumber(self):
        return lib.rule_data_get_component_number(self.obj)


lib.property_get_name.restype = c_char_p
lib.property_get_name.argtypes = ()
lib.property_get_value.restype = c_char_p
lib.property_get_value.argtypes = ()
lib.property_get_target_location.restype = c_char_p
lib.property_get_target_location.argtypes = ()
lib.property_get_record_instance.restype = c_char_p
lib.property_get_record_instance.argtypes = ()
lib.property_get_record_location.restype = c_char_p
lib.property_get_record_location.argtypes = ()
lib.property_get_value_group.restype = c_char_p
lib.property_get_value_group.argtypes = ()
lib.property_get_flag.restype = c_bool
lib.property_get_flag.argtypes = ()

lib.component_get_target_name.restype = c_char_p
lib.component_get_target_name.argtypes = ()
lib.component_get_target_location.restype = c_char_p
lib.component_get_target_location.argtypes = ()
lib.component_get_property_number.restype = c_int
lib.component_get_property_number.argtypes = ()
lib.component_get_property.restype = Property
lib.component_get_property.argtypes = [c_void_p, c_int]

lib.rule_data_get_component.restype = Component
lib.rule_data_get_component.argtypes = [c_void_p, c_int]
lib.rule_data_get_component_number.restype = c_int
lib.rule_data_get_component_number.argtypes = ()

# Load mapped data 
MapData = RuleData()
componentNumber = MapData.getComponentNumber()
for comId in range(0, componentNumber):
    print "Component " + repr(comId) + ": " + MapData.getComponent(comId).getTargetLocation() + " " + MapData.getComponent(comId).getTargetName()   
    propertyNumber = MapData.getComponent(comId).getPropertyNumber()    
    for proId in range(0, propertyNumber):
        if MapData.getComponent(comId).getProperty(proId).getFlag():
            print "Property: " + MapData.getComponent(comId).getProperty(proId).getName() + "=" + MapData.getComponent(comId).getProperty(proId).getValue() + " "
        else:
            print "Property: " + MapData.getComponent(comId).getProperty(proId).getTargetLocation() + "(" + MapData.getComponent(comId).getProperty(proId).getValueGroup() + ") "