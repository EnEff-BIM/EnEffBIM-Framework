import os
from PyQt4 import QtCore, QtGui

def importSwigApis():
    import SimProject_Project_DesignAlternative
    import SimSite_BuildingSite_Default
    import SimBuilding_Building_Default
    import SimBuildingStory_BuildingStory_Default
    import SimGroup_SpatialZoneGroup_ZoneGroup
    import SimGroup_SpatialZoneGroup_ZoneHvacGroup
    import SimSpatialZone_ThermalZone_Default
    import SimSpace_Occupied_Default
    import SimList_EquipmentList_ZoneHvac
    import SimSpaceBoundary_SecondLevel_SubTypeA
    import SimSlab_Default_Default
    import SimSlab_RoofSlab_RoofUnderAir
    import SimSlab_Floor_FloorOverEarth
    import SimWall_Wall_Default
    import SimWall_Wall_ExteriorAboveGrade
    import SimWindow_Window_Exterior
    import SimMaterialLayerSet_Default_Default
    import SimMaterialLayerSet_OpaqueLayerSet_Roof
    import SimMaterialLayerSet_OpaqueLayerSet_Floor
    import SimMaterialLayerSet_OpaqueLayerSet_Wall
    import SimMaterialLayerSet_GlazingLayerSet_Window
    import SimFeatureElementSubtraction_Void_Opening
    import SimMaterialLayer_OpaqueMaterialLayer_Default
    import SimMaterialLayer_GlazingMaterialLayer_Default
    import SimMaterial_OpaqueMaterial_Default
    import SimMaterial_GlazingMaterial_SimpleGlazingSystem
    import SimSystem_HvacHotWater_FullSystem
    import SimSystem_HvacHotWater_Control
    import SimController_SupplyWater_Temperature
    import SimSensor_TemperatureSensor_DryBulb
    import SimSystem_HvacHotWater_Demand
    import SimFlowEnergyTransfer_ConvectiveHeater_Water
    import SimFlowFitting_Mixer_DemandProxyMixerWater
    import SimFlowFitting_Splitter_DemandProxySplitterWater
    import SimSystem_HvacHotWater_Supply
    import SimFlowMover_Pump_VariableSpeedReturn
    import SimFlowPlant_Boiler_BoilerHotWater
    import SimConnection_HotWaterFlow_Default
    import SimNode_HotWaterFlowPort_Water_Out
    import SimNode_HotWaterFlowPort_Water_In
    import SimNode_DigitalControl_HWLoop_DigitalSignal_In


class QSimItemNode(object):

    def __init__(self, simNode):
        self._simNode = simNode
        self._simModelObject = simNode.getSimModelObject()
        o = self._simModelObject
        self._refId = self._simModelObject.RefId()
        self._name = self._simModelObject.SimModelName().getValue() or self._refId
        self._data = (self._name, simNode.ClassType(), self._refId)
        self._columns = 3
        self._childList = None # will be filled on demand!
        self._parent = None
        self._row = 0

    def children(self):
        """check if child list is already evaluated, do this if necessary, return it"""
        if self._childList is None:
            self._initChildList()
        return self._childList

    def _initChildList(self):
        """initialize child list"""
        self._childList = []
        for c in self._simNode.getChildList():
            self.addChild(QSimItemNode(c))

    # these methods are called from the model

    def data(self, col):
        return self._data[col]

    def columnCount(self):
        return self._columns

    def childCount(self):
        return len(self.children())

    def child(self, row):
        return self.children()[row]

    def parent(self):
        return self._parent

    def row(self):
        return self._row

    def addChild(self, child):
        child._parent = self
        child._row = len(self._childList)
        self._childList.append(child)
        self._columns = max(child.columnCount(), self._columns)


class QSimItemModel(QtCore.QAbstractItemModel):
    def __init__(self, root):
        QtCore.QAbstractItemModel.__init__(self)
        self._root = QSimItemNode(root) # initialize root node

    def rowCount(self, idx):
        if idx.isValid():
            return idx.internalPointer().childCount()
        return self._root.childCount()

    def addChild(self, node, parent):
        if not parent or not parent.isValid():
            parent = self._root
        else:
            parent = parent.internalPointer()
        parent.addChild(node)

    def index(self, row, col, parent=None):
        if not parent or not parent.isValid():
            p = self._root
        else:
            p = parent.internalPointer()
        if not QtCore.QAbstractItemModel.hasIndex(self, row, col, parent):
            return QtCore.QModelIndex()
        child = p.child(row)
        if child:
            return QtCore.QAbstractItemModel.createIndex(self, row, col, child)
        else:
            return QtCore.QModelIndex()

    def parent(self, idx):
        if idx.isValid():
            p = idx.internalPointer().parent()
            if p:
                return QtCore.QAbstractItemModel.createIndex(self, p.row(), 0, p)
        return QtCore.QModelIndex()

    def columnCount(self, idx):
        if idx.isValid():
            return idx.internalPointer().columnCount()
        return self._root.columnCount()

    def data(self, idx, role):
        if not idx.isValid():
            return None
        node = idx.internalPointer()
        if role == QtCore.Qt.DisplayRole:
            return node.data(idx.column())
        return None


class QSimTreeView(QtGui.QTreeView):

    def __init__(self, *args, **kwargs):
        QtGui.QTreeView.__init__(self, *args, **kwargs)

    def setRootNode(self, rootNode):
        model = QSimItemModel(rootNode)
        self.setModel(model)


def test():
    import sys
    importSwigApis()
    from SimModel_Translator import SimTranslator
    translator = SimTranslator()
    simxml_data = translator.loadSimModel("Boiler_Gas_VDI6020_V12.simxml")
    simxml_mapped_data = translator.getSimMappedData(".\\mapping_rule\\mapping_rule_xml\\AixLib.xml")
    sim_hierarchy = translator.getSimHierarchy()
    root_node = sim_hierarchy.getHierarchyRootNode()

    app = QtGui.QApplication(sys.argv)

    v = QSimTreeView()
    v.setRootNode(root_node)
    v.showMaximized()

    r = app.exec_()
    sys.exit(r)

if __name__ == '__main__':
    test()
