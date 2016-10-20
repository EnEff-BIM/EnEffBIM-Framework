import os
from PyQt4 import QtCore, QtGui
from subprocess import call
import sys
import inspect
import importlib
import base 

def importSwigApis():
    """The SimModel classes are loaded.It gives access to the properties
    defined within the classes. Otherwise one will have SwigPyObjects!.
    help: use dir /b /a-d > filenames.txt"""
    import base
    import SimAddress_Postal_Default
    import SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary
    import SimAppObjNameDefaultDistributionSystemHvacChilledWaterLoop
    import SimAppObjNameDefault_BldgComponentGroup_HvacComponent
    import SimAppObjNameDefault_BldgComponentGroup_HvacComponentGroup
    import SimAppObjNameDefault_DistributionSystemSitePowerGeneration
    import SimAppObjNameDefault_DistributionSystem_HvacAirLoop
    import SimAppObjNameDefault_DistributionSystem_HvacCondenserLoop
    import SimAppObjNameDefault_DistributionSystem_HvacHotWaterLoop
    import SimAppObjNameDefault_DistributionSystem_HvacSteamLoop
    import SimAppObjNameDefault_DistributionSystem_MixedWaterLoop
    import SimAppObjNameDefault_DistributionSystem_RefrigerationLoop
    import SimAppObjNameDefault_DistributionSystem_SitePowerDemand
    import SimAppObjNameDefault_DistributionSystem_VarRefrigerantFlow
    import SimAppObjNameDefault_SiteContext_AdjacentSite
    import SimAppObjNameDefault_SiteContext_SolarObstruction
    import SimAppObjNameDefault_Space_Space
    import SimAppObjNameDefault_SpatialContainer_Building
    import SimAppObjNameDefault_SpatialContainer_BuildingStory
    import SimAppObjNameDefault_SpatialContainer_Project
    import SimAppObjNameDefault_SpatialContainer_Site
    import SimAppObjNameDefault_SpatialZone_CeilingPlenumZone
    import SimAppObjNameDefault_SpatialZone_FloorPlenumZone
    import SimAppObjNameDefault_SpatialZone_ThermalZone
    import SimAppObjNameDefault_ZoneGroup_CeilingPlenumZoneGroup
    import SimAppObjNameDefault_ZoneGroup_DaylightingZoneGroup
    import SimAppObjNameDefault_ZoneGroup_FloorPlenumZoneGroup
    import SimAppObjNameDefault_ZoneGroup_HvacEquipmentGroup
    import SimAppObjNameDefault_ZoneGroup_NatVentZoneGroup
    import SimAppObjNameDefault_ZoneGroup_ThermalZoneGroup
    import SimAppPreferences_AppPreferences_AutoSave
    import SimAppPreferences_AppPreferences_AutoSaveInterval
    import SimAppPreferences_AppPreferences_MinMonthlyChargeType
    import SimAppUnitDefault_AppUnitDefault_DatabaseDefault
    import SimArbitraryProfileDef_ArbitraryProfile_Closed
    import SimBldgSiteParams_BuildingSite_Default
    import SimBldgStoryParams_BuildingStory_Default
    import SimBuildingStory_BuildingStory_Default
    import SimBuilding_Building_Default
    import SimCartesianTransformOperator_3D_Uniform
    import SimClassificationClassificationReferenceSpaceCategoryOwner
    import SimClassification_ClassificationReferenceSpaceCategoryBoma
    import SimClassification_ClassificationReference_SpaceTypeOwner
    import SimClassification_ClassificationSystem_Default
    import SimClassification_ClassificationSystem_OmniClass
    import SimConnectedFaceSet_ConnectedFaceSet_ClosedShell
    import SimConnectedFaceSet_ConnectedFaceSet_Default
    import SimConnection_HotWaterFlow_Default
    import SimConnection_ZoneAirFlow_Default
    import SimController_SupplyWater_Temperature
    import SimController_ZoneControlTemperature_Thermostat
    import SimControlScheme_AvailabilityManagerScheme_Scheduled
    import SimControlScheme_ControlAndSequencingScheme_HeatingLoad
    import SimControlScheme_SetpointManagerScheme_ScheduledSetpoint
    import SimControlScheme_SetpointScheme_SingleHeating
    import SimDerivedUnitType_DerivedUnit_Default
    import SimDistributionPort_AirFlowPort_Air_In
    import SimDistributionPort_AirFlowPort_Air_Out
    import SimDistributionPort_HotWaterFlowPort_Water_In
    import SimDistributionPort_HotWaterFlowPort_Water_InOrOut
    import SimDistributionPort_HotWaterFlowPort_Water_Out
    import SimFaceBound_FaceBound_Default
    import SimFaceBound_FaceBound_FaceOuterBound
    import SimFace_Face_Default
    import SimFeatureElementSubtraction_Void_Opening
    import SimFlowController_Valve_Default
    import SimFlowController_Valve_TemperingValve
    import SimFlowEnergyTransferStorage_HotWaterTank_Expansion
    import SimFlowEnergyTransferStorage_HotWaterTank_Mixed
    import SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Water
    import SimFlowEnergyTransfer_ConvectiveHeater_Water
    import SimFlowFitting_Default_Default
    #no module named: import SimFlowFitting_FlowElementProxy_DemandProxy_WaterLoop
    #no module named: import SimFlowFitting_FlowElementProxy_SupplyProxy_AirLoop
    import SimFlowFitting_Mixer_DemandProxyMixerWater
    import SimFlowFitting_Splitter_DemandProxySplitterWater
    import SimFlowMover_Pump_VariableSpeedReturn
    import SimFlowPlant_Boiler_BoilerHotWater
    import SimFlowSegment_Pipe_Indoor
    import SimGeomBooleanResult_BooleanClippingResult_Default
    import SimGeomCurve_Polyline_Default
    import SimGeomHalfSpaceSolid_HalfSpaceSolid_PolygonalBoundedHalfSpace
    import SimGeomPoint_Point_CartesianPoint
    import SimGeomSolidModel_FacetedBrep_Default
    import SimGeomSolidModel_SweptAreaSolid_ExtrudedAreaSolid
    import SimGeomSurfaceModel_FaceBasedSurfaceModel_Default
    import SimGeomSurface_BoundedSurface_CurveBoundedPlane
    import SimGeomSurface_ElementarySurface_Plane
    import SimGeomVector_Vector_Default
    import SimGeomVector_Vector_Direction
    import SimGroup_BldgCompGroup_ZoneEquipment
    import SimGroup_HvacDemandGroup_WaterSystem
    import SimGroup_SpatialZoneGroup_ZoneGroup
    import SimGroup_SpatialZoneGroup_ZoneHvacGroup
    import SimInternalLoad_Equipment_Electric
    import SimInternalLoad_Lights_Default
    import SimInternalLoad_People_Default
    import SimList_ConnectorList_SimConnections
    import SimList_EquipmentList_ZoneHvac
    import SimList_MaterialList_Default
    import SimList_SchemeList_AirLoopAvailabilityMgrScheme
    import SimList_SchemeList_DemandManagerScheme
    import SimList_SchemeList_PlantOperatingScheme
    import SimList_SchemeList_WaterTempControlScheme
    import SimLocalPlacement_LocalPlacement_AbsolutePlacement
    import SimLocalPlacement_LocalPlacement_RelativePlacement
    import SimLocationAndWeather_DesignDay_Default
    import SimLocationAndWeather_Location_Default
    import SimLoop_Loop_PolyLoop
    import SimMappedRepresentationItem_Default_Default
    import SimMaterialLayerSet_Default_Default
    import SimMaterialLayerSet_GlazingLayerSet_Window
    import SimMaterialLayerSet_OpaqueLayerSet_Ceiling
    import SimMaterialLayerSet_OpaqueLayerSet_Door
    import SimMaterialLayerSet_OpaqueLayerSet_Floor
    import SimMaterialLayerSet_OpaqueLayerSet_InternalSource
    import SimMaterialLayerSet_OpaqueLayerSet_Roof
    import SimMaterialLayerSet_OpaqueLayerSet_Wall
    import SimMaterialLayer_GlazingMaterialLayer_Default
    import SimMaterialLayer_OpaqueMaterialLayer_Default
    import SimMaterial_Default_Default
    import SimMaterial_GlazingMaterial_Gas
    import SimMaterial_GlazingMaterial_Glazing
    import SimMaterial_GlazingMaterial_SimpleGlazingSystem
    import SimMaterial_OpaqueMaterial_AirGap
    import SimMaterial_OpaqueMaterial_Default
    import SimModel
    # No module named ... RepresentationContex import SimModelRepresentationContextGeometricRepresentationSubCon
    import SimModelRepresentationContext_GeometricRepresentationContext_Default
    import SimModel_Hierachy
    import SimModel_Mapping
    import SimModel_PyCallBack
    import SimModel_Translator
    import SimNode_AirFlowPort_Air_In
    import SimNode_AirFlowPort_Air_Out
    import SimNode_DigitalControl_AirLoop_DigitalSignal_In
    import SimNode_DigitalControl_HWLoop_DigitalSignal_In
    import SimNode_Docking_Default
    import SimNode_HotWaterFlowPort_Water_In
    import SimNode_HotWaterFlowPort_Water_Out
    import SimOrganization_Organization_Default
    import SimOwnerHistory_Default_Default
    import SimParameterizedProfileDef_ParameterizedProfile_Rectangle
    import SimPerformanceCurve_Mathematical_Cubic
    #Dll load failed import SimPersonAndOrganization_PersonAndOrganization_Default
    import SimPerson_Person_Default
    import SimPlacement_Axis2Placement2D_Default
    import SimPlacement_Axis2Placement3D_Default
    import SimPresentationLayerAssignment_Default_Default
    import SimProject_Project_DesignAlternative
    import SimRepresentationMap_RepresentationMap_Default
    import SimSensor_TemperatureSensor_DryBulb
    import SimShapeRepresentation_ShapeRepresentation_Default
    import SimSimulationConfiguration_SimulationConfiguration_Default
    import SimSimulationParameters_HvacDesign_WaterLoopSizing
    import SimSite_BuildingSite_Default
    import SimSIUnitType_SiUnit_Default
    import SimSlabParams_Slab_Floor
    import SimSlab_Default_Default
    import SimSlab_Floor_FloorOverEarth
    import SimSlab_Floor_InterzoneFloor
    import SimSlab_RoofSlab_RoofUnderAir
    import SimSoftwareApplication_Default_Default
    import SimSolarShade_Fin_Default
    import SimSolarShade_Overhang_Default
    import SimSpaceBoundary_SecondLevel_SubTypeA
    import SimSpaceParams_Space_Default
    import SimSpace_Occupied_Default
    import SimSpatialZone_ThermalZone_Default
    import SimSpatialZone_ThermalZone_TemplateForZoneGroup
    import SimSystem_HvacHotWater_Control
    import SimSystem_HvacHotWater_Demand
    import SimSystem_HvacHotWater_FullSystem
    import SimSystem_HvacHotWater_Supply
    import SimSystem_ZoneHvacGroup_Control
    import SimSystem_ZoneHvacGroup_Demand
    import SimSystem_ZoneHvacGroup_FullSystem
    import SimSystem_ZoneHvacGroup_Supply
    import SimTemplateConstructions_Constructions_Default
    import SimTemplateLocation_Location_Default
    import SimTemplateZoneConditions_ZoneConditions_Default
    import SimTemplateZoneLoads_ZoneLoads_Default
    import SimTimeSeriesSchedule_Calendar_Configuration
    import SimTimeSeriesSchedule_Day_Interval
    import SimTimeSeriesSchedule_Limits_Default
    import SimTimeSeriesSchedule_Week_Daily
    import SimTimeSeriesSchedule_Year_Default
    import SimWallParams_Wall_Default
    import SimWallType_Wall_Default
    import SimWall_Wall_Default
    import SimWall_Wall_ExteriorAboveGrade
    import SimWall_Wall_Interior
    import SimWindowArrayParams_WindowArray_Default
    import SimWindowLiningProps_WindowLiningProps_Default
    import SimWindowParams_Window_Default
    import SimWindowType_Window_Default
    import SimWindow_Window_Default
    import SimWindow_Window_Exterior

class QSimItemNode(object):
    def __init__(self, simNode):
        self._simNode = simNode
        self._simModelObject = simNode.getSimModelObject()
        #print("Type simNode: ", type(simNode), " Type self._simModelObject: ", type(self._simModelObject), " RefId: ", str(self._simModelObject.RefId()))
        self.ObjClass = self._simNode.ClassType()
        #print("self.ObjClass: ", self.ObjClass, " type(self.ObjClass): ", type(self.ObjClass))
        self._refId = self._simModelObject.RefId()
        if(self._simModelObject.SimModelName().present()):		
            self._name = self._simModelObject.SimModelName().getValue()
        else:
            self._name = self._refId            			
        self._data = (self._name, simNode.ClassType(), self._refId)
        self._mappedComponentList = simNode.getMappedComponents()		
        if self._mappedComponentList.size() != 0:		
            self._mappedPropertyList  = self._mappedComponentList[0].getMappedPropertyList()		
            self._ComponentName = self._mappedComponentList[0].getTargetComponentName() 				
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
            #print("type(c): ", type(c), " type(QSimItemNode(c)): ", QSimItemNode(c), " number of childrens: ", len(self._childList), " name of the first one?: ", self._childList[0]._name )			
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
        #print("_parent: ", type(self._parent))
        #print("_parent: data0: ", (self._data[0]), "data1: ", (self._data[1]), " data2: ", (self._data[2]))			
        return self._parent

    def row(self):
        return self._row

    def addChild(self, child):
        child._parent = self
        #print("The parent is: ", self, " and the child: ", child)
        child._row = len(self._childList)
        self._childList.append(child)
        self._columns = max(child.columnCount(), self._columns)
		
class QSimItemModel(QtCore.QAbstractItemModel):
    def __init__(self, root):
        QtCore.QAbstractItemModel.__init__(self)
        self._root = QSimItemNode(root) # initialize root node
        #print("self._root._columns: ",self._root._refId)		

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
        self.model = QSimItemModel(rootNode)	
        self.setModel(self.model)  

class Window(QtGui.QMainWindow):
    def __init__(self, *args, **kwargs):
        QtGui.QMainWindow.__init__(self, *args, **kwargs) 	
        self.setWindowTitle("QSimTreeView")
        self.setGeometry(200,200,800,600)		
        self.createMenuActions()		
        self.createMenus()
        self.statusBar()
 
    def createMenuActions(self):
        """
        Edit the buttons exitAct, OpenFile and Clear
        """
        self.exitAct = QtGui.QAction("Exit", self)
        self.exitAct.setShortcut("Ctrl+Q")
        self.exitAct.setStatusTip("Exit the application")	
        self.connect(self.exitAct, QtCore.SIGNAL("triggered()"), self, QtCore.SLOT("close()"))
        self.OpenFile = QtGui.QAction("&Open simxml File", self)
        self.OpenFile.setShortcut("Ctrl+O")
        self.OpenFile.setStatusTip("OpenFile")	
        self.OpenFile.triggered.connect(self.file_open) 		
        self.Clear = QtGui.QAction("&Clear", self)
        self.Clear.setShortcut("Ctrl+C")
        self.Clear.setStatusTip("Clear")	
        self.Clear.triggered.connect(self.clear) 
        self.Restart = QtGui.QAction("&Restart", self)
        self.Restart.setShortcut("Ctrl+R")
        self.Restart.setStatusTip("Restart the application")	
        self.Restart.triggered.connect(self.restart) 
		
    def createMenus(self):
        """
        Add a menu (File) with three buttons (exitAct, OpenFile and Clear)
        """
        self.fileMenu = self.menuBar().addMenu("&File")
        self.fileMenu.addAction(self.exitAct)
        self.fileMenu.addAction(self.OpenFile)		
        self.fileMenu.addAction(self.Clear)
        self.fileMenu.addAction(self.Restart)			
    
    def file_open(self):
        """
        This function "file_open" save the name of the selected files, to be open, into a list an create a Widget
        from it.
		
        Before new files are loaded the application should be restarted. Otherwise the loaded file/data
        would be added to the existing one... The clear() function cannot solve it since it has
        to do with the functions getHierarchyNodeList(). Data is append not overwritten. The global
        variable keepFrom is used to handle it... this is not working but as expected.		
        """	
        self.Filename2 = QtGui.QFileDialog.getOpenFileNames(self,'Open simxml File','','*.simxml')				
        if self.Filename2:		
            print("Please select the mapping rules to be used")
            self.load_mapping()		
            print("self.Filename2: ", self.Filename2, " type: ", type(self.Filename2))
            for x in range(0,len(self.Filename2)):
                print("\n Basename: ",os.path.basename(self.Filename2[x]))
                self.Filename2[x]=os.path.basename(self.Filename2[x])						
            self.Widget = MainWidget(self.Filename2,self.Mapping)			
            self.setCentralWidget(self.Widget)			

    def load_mapping(self):
        """
        This function (action) save the FIRST! (...[0]) name of the selected files
        """	
        #self.Mapping = ".\\mapping_rule\\mapping_rule_xml\\AixLib_v2.1.xml"		
        self.Mapping = QtGui.QFileDialog.getOpenFileNames(self,'Load xml File','','*.xml')[0]						
			
    def clear(self):
        """
        Setting the parent to None suppose to remove the widget
        """		
        print("....clear()")
        self.Widget.setParent(None)
		
    def restart(self):
        """
        The application is close and restarted
        """		
        self.close()
        call("python" + " QSimWindow.py", shell=True)
		
		
class MainWidget(QtGui.QWidget):
    def __init__(self,Filename,Mapping): 	
        QtGui.QWidget.__init__(self)		
        self.Filename2 = Filename
        self.Mapping = Mapping		
        self.initUI()		
        QtCore.QObject.connect(self.tree.selectionModel(),QtCore.SIGNAL('selectionChanged(QItemSelection, QItemSelection)'),self.SelectObject_TreeView)
        QtCore.QObject.connect(self.tree.selectionModel(),QtCore.SIGNAL('selectionChanged(QItemSelection, QItemSelection)'),self.SimObjectProperties)
        QtCore.QObject.connect(self.bottomleft.selectionModel(),QtCore.SIGNAL('selectionChanged(QItemSelection, QItemSelection)'),self.SelectObject_Comp)     
			
	
    def SelectObject_TreeView(self, selected, deselected):
        """
        The RefId of the selected object in the treeView is obtained.([0] -> Column 1: Name, [1] -> Column 2: ClassType, [2] -> Column3 RefId) 
        Furthermore the attribute self.selected_object and the bottom left view (mapped components) are updated (first clear, second, if necessary, add items).
        """		
        #print(selected.indexes()[0].data())	# indexes()[0] -> Column 1: Name / indexes()[1] -> Column 2: ClassType
        self.selected_object_RefId = selected.indexes()[2].data() # Column 3: RefId
        self.selected_hierarchy_node = self.sim_hierarchy.getHierarchyNode(self.selected_object_RefId)	
        self.mComponent = self.selected_hierarchy_node.getMappedComponents()
        self.selected_object = QSimItemNode(self.selected_hierarchy_node)
        #print("Type self.object.ObjClass: ", self.selected_object.ObjClass)		
        if self.mComponent.size() != 0:
            self.bottomleft.clear()		
            self.UpdateComp(self.mComponent)
        else:		
            self.bottomleft.clear()
			    	
    def UpdateComp(self,mappedComponent):
        """
        Add mapped components to the list
        """		
        for i in range(0,mappedComponent.size()): 
            #print("Name type: ", type(mappedComponent[i].getTargetComponentName()), " Name:",mappedComponent[i].getTargetComponentName())		
            self.bottomleft.addItem(mappedComponent[i].getTargetComponentName())            		
        #print("Dummy - UpdateComp")
        
    def SelectObject_Comp(self, selected_Comp, deselected_Comp):
        """
        The attributes of the selected mapped component are updated on the bottom right view. 
        """		
        if len(selected_Comp.indexes()) != 0:
            #print("selected: ", selected_Comp.indexes()[0].data())
            #print("self.selected_object_RefId: ", self.selected_object_RefId)
            self.row = selected_Comp.indexes()[0].row()			
            self.bottomright.clear()
            self.UpdateProperties()
        
    def UpdateProperties(self):          		
        #print("Dummy - UpdateProperties")
        self.mProperties = self.mComponent[self.row].getMappedPropertyList()
        self.bottomright.setColumnCount(len(self.mProperties))
        self.bottomright.setRowCount(2)
        self.bottomright.setVerticalHeaderItem(0,QtGui.QTableWidgetItem("Name"))
        self.bottomright.setVerticalHeaderItem(1,QtGui.QTableWidgetItem("Value"))				
        self.UpdateTable()
		
    def UpdateTable(self):
        #print("len: ",len(self.mProperties))
        for i in range(0,len(self.mProperties)):
            #print("Name: ", self.mProperties[i].getPropertyName(), " getPropertyValue: ", self.mProperties[i].getPropertyValue())	
            self.bottomright.setItem(0,i,QtGui.QTableWidgetItem(self.mProperties[i].getPropertyName()))           		
            self.bottomright.setItem(1,i,QtGui.QTableWidgetItem(str(self.mProperties[i].getPropertyValue())))
            self.bottomright.repaint()				
		
    def SimObjectProperties(self, selected, deselected):
        """
        Update the top right view. Showing attributes of the selected .simxml object of the tree view.
        """		
        self.topright.clear()	
        self.SimObjectDicts(self.selected_object.ObjClass)
        self.topright.setHorizontalHeaderItem(0,QtGui.QTableWidgetItem("Name"))
        self.topright.setHorizontalHeaderItem(1,QtGui.QTableWidgetItem("Value"))		
        self.topright.repaint()

    def SimObjectDicts(self,classType):
        """
        The information of the SimModel classes is defined within a basic class, like SimSite, and other times in more specific classes. 
        The function obtains the methods (names of the possible attributes) from the top level class. It automatically "load" the methods within
        the extended/loaded basic classes). If for some reason the class is not defined, the function try with a more basic class (ClassTypeShort_aux),
        if it does not work, with the next basic class (ClassTypeShort). If it is not working we might be in the wrong module. We update the module,
        by adding _Default to a short name. This part is a bit critic since 'while True' is used and wait to find what we look for to 'break' the loop...
		
        The names and values of the list are saved into list which will be later iterate to fill a table.
        """
        ListNames = []
        ListValues = []		
        ClassTypeShort = classType.split('_', 1)[0]	
        ClassTypeShort_aux = ClassTypeShort+ "_" + classType.split('_', 2)[1]			
        my_module = importlib.import_module(classType)
        print("Lets look into the module: ", str(my_module),"\n")
        while True:		
            if hasattr(my_module, classType):
                #print("It looks like ", classType, " did exits!")			
                class_=getattr(my_module, classType)
                Dummy = class_()
                ListOfMethods = [method for method in dir(Dummy) if callable(getattr(Dummy, method))]
                #print("The method list contain", len(ListOfMethods), " elements -> \n")
                break				
            elif hasattr(my_module, ClassTypeShort_aux):
                class_=getattr(my_module, ClassTypeShort_aux)
                #print("It looks like ", ClassTypeShort_aux, " exists.\n")
                Dummy = class_()
                ListOfMethods = [method for method in dir(Dummy) if callable(getattr(Dummy, method))]
                #print("The method list contain", len(ListOfMethods), " elements -> \n\n")
                break				
            elif hasattr(my_module, ClassTypeShort):
                #print("It looks like ", ClassTypeShort, " did exits!")			
                class_=getattr(my_module, ClassTypeShort)
                Dummy = class_()
                ListOfMethods = [method for method in dir(Dummy) if callable(getattr(Dummy, method))]
                break							
            my_module = importlib.import_module(ClassTypeShort_aux+"_Default")
		# We filter the list. The methods beginning with __ are deleted
        #print("\n ListOfMethods not filtered!: ",ListOfMethods, "\n")
        for i in range(0,len(ListOfMethods)):
            if "__" not in ListOfMethods[i]:
                continue
            else:
                #print("Position = i: ", i)
                ListOfMethods = ListOfMethods[:i]				
                break
        #print("\n ListOfMethods Filtered!: ",ListOfMethods, "\n")		
		# Not all the attributes defined within a clase are obviously used. It means they are not declared in the simxml file.  Try to obtain a non defined value for instance by calling getValue() will cause the
		# the program to crash. Some Parameters like Description, etc are common. The "best" solution I found is to search within the simxml for each object and check wheter the attribute is actually defined.			
		
        #print("The selected object is of the class: ", self.selected_object.ObjClass , "we try now to extract some value from it:")
		
        # The following piece of code search for the "start" and "end" lines between which the object, based on its RefId, is defined.
        for x in range(0,len(self.Filename2)): 		
            with open(self.Filename2[x]) as inF:				
                for start, line in enumerate(inF,1):
                    if "\""+self.selected_object._refId+"\"" in line:
                        #print("found at line: ", start)
                        break					
        #print("NUM still the same?: ", start)
            with open(self.Filename2[x]) as inF:
                for end, line in enumerate(inF,1):
                    if end >= start:
                        if classType+">" in line:
                            #print("found at line: ",end)
                            break
            if (start!=end): # if start != end means that the object was found at that file!! otherwise open() read till the end of the file.						
                ToBeRemoved = []
                InTheList = []
                Values = ["RefId"]
        # The Program search within the start and end lines of each object (RefId) for the attributes/methods that are actually defined based on the methods/attributes that could actually be defined, based on its class.		
                for i in range(0,len(ListOfMethods)): 		
                    with open(self.Filename2[x]) as inF:
                        for n_line, line in enumerate(inF,1):
                            if n_line >= start-1:
                                if ":"+ListOfMethods[i]+">" in line:							
                                    readedValue = line.split(str(ListOfMethods[i])+">")[1].split("<")[0]
                                    Values.append(readedValue)										
                                    #print(ListOfMethods[i], " found at line: ",n_line, ", with value [", readedValue, "] --> type of: ", type(line))
                                    InTheList.append(str(ListOfMethods[i]))
                                    break
                                if n_line >= end:
                                    #print("No luck...", ListOfMethods[i], " Not Found")
                                    ToBeRemoved.append(str(ListOfMethods[i]))						
                                    break
        # The ListOfMethods is updated. Just the elements that are actually defined within the simxml file are saved.							
                ListOfMethods = ["RefId"] + InTheList
        # The following piece of code extract the values of the attributes/methods of the selected object. Depending on the type a different function has to be used to extract the information.
        # Information is directly extracted (string) or extracted using getValue() or getNumberList().  		
        for i in range(0,len(ListOfMethods)):							
            if True:
                print(str(type(self.selected_object._simModelObject)), "\n", str(ListOfMethods[i]))
		        # getattr is used to call a function/class name using an string!! an instance of the class is created so that isinstance() can be used to compare types and know how the attribute should be extracted.				
                class_name = getattr(self.selected_object._simModelObject,ListOfMethods[i])			
                instance = class_name()
                #L1 = [method for method in dir(instance) if callable(getattr(instance, method))]
                #print("Methods: ",L1,"\n")				
                #print("Type: ", type(instance),"\n")				
                if isinstance(instance,base.string_optional) or isinstance(instance,base.decimal_optional) or isinstance(instance,base.bool_optional) or isinstance(instance,base.idref_optional) or isinstance(instance,base.int_optional): 									
                    ListNames.append(ListOfMethods[i])			
                    ListValues.append(class_name().getValue())	
                elif isinstance(instance,str):			
                    ListNames.append(ListOfMethods[i])			
                    ListValues.append(instance)
                elif isinstance(instance,base.xsd_double_list) or isinstance(instance,base.xsd_integer_list) :			
                    ListNames.append(ListOfMethods[i])			
                    ListValues.append(str(instance.getNumberList()))					
                else:
                    #It is necessary to understand how to deal with the class: ", type(instance), " to load ", ListOfMethods[i])
                    ListNames.append(ListOfMethods[i])			
                    ListValues.append("WARNING! " + str(type(instance)) + " not supported by API. Value in .simxml file: " + Values[i])					
        self.topright.setColumnCount(2)
        self.topright.setRowCount(len(ListNames))		
        for i in range(0,len(ListNames)):
            #Values should be str! -> str(List....				
            self.topright.setItem(i,0,QtGui.QTableWidgetItem(str(ListNames[i])))           		
            self.topright.setItem(i,1,QtGui.QTableWidgetItem(str(ListValues[i])))   			
            #print("Name: ", ListNames[i], " = ", ListValues[i])			

    def getdata(self):
        """ 
		The function load the data from one ore two selected files. The order of the files seems to be relevant.
        I probably should split the function file_open into two. Selecting first the zone and after the HVAC.		
        """ 	
        if len(self.Filename2) >= 2:
            #The order of the files is actually important. UseCase1_1_... should be in the first place, and 1.1_Architecture+HVAC... in the second place. 		
            print("Filename[0]: ", self.Filename2[0], " should be the zone and, \nFilename[1]: ", self.Filename2[1], "the HVAC \n")			
            return self.translator.loadSimModel(self.Filename2[0],self.Filename2[1])			
        else:
            return self.translator.loadSimModel(self.Filename2[0])		
            #return self.translator.loadSimModel("UseCase1_1_BoilerGasRadiatorFromSimergy.simxml","1.1_Architecture+HVAC+Zone_Curve+Schedule_korr.simxml")		
        print("The data was load")		
		
    def initUI(self):
        """
        The data is loaded from .simxml files as well as the mapping data from an .xml file.
        For some reason when the data is readed (translator.loadSimModel() is called) the loaded
        data seems to be append and not overwritten. I think it is something happening in the C code
        and I do not know how to stop thus. I decided to create a global variable keepFrom1.
        The number of elements/data is saved in keepFrom1. When new files are loaded, just the last
        values, starting from keepFrom1 are readed. It allows to load the files twice, but not anymore
        It might be more clean to restart the application...? Is it crashing because other functions?
        is it somehow overload?		
        """
        global keepFrom1		
        importSwigApis()		
        from SimModel_Translator import SimTranslator
        from SimModel_Mapping import SimMappedData	
        self.tree = QSimTreeView()
        self.translator = SimTranslator()		
        self.simxml_data = self.getdata()		        
        #print("simxml_data type: ", str(type(self.simxml_data)), " simxml_data: ", self.simxml_data, "\n")		
        #print ("os.getcwd: ",os.getcwd(), "\n")
        #print("self.Mapping: - - - - - - -> ", str(type(self.Mapping)))		
        self.simxml_mapped_data = self.translator.getSimMappedData(self.Mapping)        
        print("simxml_mapped_data type: ", str(type(self.simxml_mapped_data)))
        #print("simxml_mapped_data: size:", self.simxml_mapped_data,"\n")		
        self.sim_hierarchy = self.translator.getSimHierarchy()		
        self.nodeList = self.sim_hierarchy.getHierarchyNodeList()
       # print("Type nodeList: ", type(self.nodeList), " len nodeList: ", str(self.nodeList.size()), " \n keepFrom node: ", keepFrom1)	
        self.nodeList = self.nodeList[keepFrom1:]			
        #print("-------------------> len nodeList after cut has ", str(self.nodeList.size()), "elements \n sim_hierarchy type: ", str(type(self.sim_hierarchy)))
        self.root_node = self.sim_hierarchy.getHierarchyRootNode()
        #print("root_node type: ", str(type(self.root_node)), "\n -----")
        keepFrom1 = self.sim_hierarchy.getHierarchyNodeList().size()	        
        #print("keepFrom updated to: ", keepFrom1)
        self.tree.setRootNode(self.root_node) 
		
        #self.check()
		
        self.hbox = QtGui.QHBoxLayout(self)
        self.topright    = QtGui.QTableWidget()		
        self.bottomleft  = QtGui.QListWidget()		
        self.bottomright = QtGui.QTableWidget()
 
        self.splitter1 = QtGui.QSplitter(QtCore.Qt.Horizontal)
        self.splitter1.addWidget(self.tree)		
        self.splitter1.addWidget(self.topright)

        self.splitter2 = QtGui.QSplitter(QtCore.Qt.Horizontal)
        self.splitter2.addWidget(self.bottomleft)
        self.splitter2.addWidget(self.bottomright)
	 
        self.splitter3 = QtGui.QSplitter(QtCore.Qt.Vertical)
        self.splitter3.addWidget(self.splitter1)
        self.splitter3.addWidget(self.splitter2)
	 		
        self.hbox.addWidget(self.splitter3)		
        self.setLayout(self.hbox)
        QtGui.QApplication.setStyle(QtGui.QStyleFactory.create('Cleanlooks'))        
        #self.setGeometry(200, 200, 1500, 900)
        self.setWindowTitle('QtGui.QSplitter')				
    # TEST mapping rules:
        self.mappedComonentList = self.simxml_mapped_data.getMappedComponentList()
        #print("root_node: ",self.root_node)		
        #print("mappedComonentList type: ", type(self.mappedComonentList))
        #print("mapped component", 0, ": ", str(self.mappedComonentList[0].getTargetComponentName()))
        #print("mapped component", 1, ": ", str(self.mappedComonentList[1].getTargetComponentName()))

    def check(self):
        """
        Check how many elements are defined within the .simxml files and print it together with number of elements readed by the API.
        """
        List_RefId_simxml = []
        listofId=[]		
        for x in range(0,len(self.Filename2)):
            with open(self.Filename2[x]) as inF:				
                for start, line in enumerate(inF,1):
                    if "RefId=\"" in line:
                        List_RefId_simxml.append(line.split("RefId=\"")[1].split("\"")[0])					   
        for i in range(0,self.nodeList.size()):
            listofId.append(str(self.nodeList[i].getSimModelObject().RefId())) 				
        print("\n The simxml file contain ", len(List_RefId_simxml), " elements, from which ", len(listofId), " are readed by the API")					
		    
if __name__ == '__main__':
    global keepFrom1	
    keepFrom1 = 0
    app = QtGui.QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())