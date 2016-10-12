class CallBack(SimPyCallBack):
    def __init__(self):
        super(CallBack, self).__init__()
        self._sim = None
        self._simGeom = None
        self._simSys = None
        self._dict = {}
    def loadSimClassObj(self, _dataName, _simClassList):
        if self._sim == None:
            self._sim = SimModel.SimModel_(_dataName)
        for id in range(0, _simClassList.size()):
            _objList = getattr(self._sim, _simClassList[id])()
            for subId in range(0, _objList.sizeInt()):
                self._dict[_objList.at(subId).RefId()] = _objList.at(subId)
    def loadSimGeomClassObj(self, _geomDataName, _simGeomClassList):
        if self._simGeom == None:
            self._simGeom = SimModel.SimModel_(_geomDataName)
        for id in range(0, _simGeomClassList.size()):
            _objList = getattr(self._simGeom, _simGeomClassList[id])()
            for subId in range(0, _objList.sizeInt()):
                self._dict[_objList.at(subId).RefId()] = _objList.at(subId)
    def loadSimSysClassObj(self, _sysDataName, _simSysClassList):
        if self._simSys == None:
            self._simSys = SimModel.SimModel_(_sysDataName)
        for id in range(0, _simSysClassList.size()):
            _objList = getattr(self._simSys, _simSysClassList[id])()
            for subId in range(0, _objList.sizeInt()):
                self._dict[_objList.at(subId).RefId()] = _objList.at(subId)
    def getSimClassObj(self, _id):
        if _id in self._dict:
            return self._dict[_id]
        else:
            return None
    def getReferenceId(self, _classId, _propertyName):
        _classObj = self.getSimClassObj(_classId)
        if _classObj is not None and getattr(_classObj, _propertyName)().present():
            return getattr(_classObj, _propertyName)().getValue()
    def getIO(self, _name):
        print(_name)
    def getRefValueType(self, _classId, _propertyName):
        _classObj = self.getSimClassObj(_classId)
        if _classObj is not None and getattr(_classObj, _propertyName)().present():
            if type(getattr(_classObj, _propertyName)().getValue()) is str:
                return "String"
            else:
                return "Number"
    def getRefNumberValue(self, _classId, _propertyName):
        _classObj = self.getSimClassObj(_classId)
        if _classObj is not None and getattr(_classObj, _propertyName)().present():
            return getattr(_classObj, _propertyName)().getValue()
    def getRefStringValue(self, _classId, _propertyName):
        _classObj = self.getSimClassObj(_classId)
        if _classObj is not None and getattr(_classObj, _propertyName)().present():
            return getattr(_classObj, _propertyName)().getValue()    
