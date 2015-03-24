#-*- coding:utf-8 -*-
#
# This file is part of MoCGF - a code generation framework
# 201500225 Joerg Raedler jraedler@udk-berlin.de
#

import sys, os, os.path, tempfile
import MoCGF
from MoCGF.Controller import Controller
from PyQt4 import QtCore, QtGui, uic


class MoCGFWidget(QtGui.QWidget):
    def __init__(self, app, resPath):
        QtGui.QWidget.__init__(self)
        self.app = app
        # load the Icons
        sys.path.insert(0, resPath)
        import Icons_rc
        # load the ui
        self.ui = uic.loadUi(os.path.join(resPath, 'MoCGF-GUI.ui'), self)
        generatorPath = os.environ.get('MOCGF_GENERATORS', None)
        self.mocgf = Controller(generatorPath)
        self.setWindowTitle('MoCGF GUI | Version: %s' % (MoCGF.__version__))

        # apis
        self.apiList.itemSelectionChanged.connect(self.activateAPI)
        self.apiView.anchorClicked.connect(self.openURL)
        for a in sorted(self.mocgf.apis):
            self.apiList.addItem(a)
        self.apiList.item(0).setSelected(True)

        # generators
        self.activeGenerator=None
        self.generatorListReloadButton.pressed.connect(self.updateGeneratorList)
        self.generatorExplorerButton.pressed.connect(self.exploreGenerators)
        self.generatorList.itemSelectionChanged.connect(self.activateGenerator)
        self.generatorView.anchorClicked.connect(self.openURL)
        self.generateButton.clicked.connect(self.executeGenerator)
        self.updateGeneratorList(rescan=False)

        # buttons
        self.uriLoadButton.clicked.connect(self.getUriList)
        self.outputLoadButton.clicked.connect(self.getOutputFile)

    # general methods
    def openURL(self, url):
        """open an link target from the generator or api view"""
        scheme = url.scheme()
        if scheme == 'file':
            # print(url)
            QtGui.QDesktopServices.openUrl(url)
        elif scheme == 'api':
            a = url.authority().replace('___', '::').lower()
            i = self.apiList.findItems(a, QtCore.Qt.MatchFixedString)[0]
            self.apiList.setCurrentItem(i)
            self.apiList.itemActivated.emit(i)
            self.moCGFMainView.setCurrentIndex(1)
        else:
            print('Unknown URL scheme:', url)

    def getUriList(self):
        flist = QtGui.QFileDialog.getOpenFileNames(self, 'Select Data Sources')
        if flist:
            self.uriInput.setText(', '.join(flist))

    def getOutputFile(self):
        f = QtGui.QFileDialog.getSaveFileName(self, 'Select Output File', '*')
        if f:
            self.outputInput.setText(f)

    # API methods
    def activateAPI(self):
        items = self.apiList.selectedItems()
        if items:
            api = items[0].text()
            if MoCGF.py27:
                api = unicode(api)
        self.apiView.clear()
        self.apiView.setText(self.mocgf.apiInfoText(api, 'html'))

    # generator methods
    def exploreGenerators(self):
        QtGui.QDesktopServices.openUrl(QtCore.QUrl.fromLocalFile(self.mocgf.generatorPath))

    def updateGeneratorList(self, rescan=True):
        if rescan:
            self.mocgf.rescanGenerators()
        self.generatorList.clear()
        for n in sorted(self.mocgf.generators):
            self.generatorList.addItem(n)
        self.generatorList.item(0).setSelected(True)

    def activateGenerator(self):
        items = self.generatorList.selectedItems()
        if items:
            gen = items[0].text()
            if MoCGF.py27:
                gen = unicode(gen)
        self.activeGenerator = self.mocgf.generators[gen]
        self.generatorView.clear()
        self.generatorView.setText(self.activeGenerator.infoText('html'))

    def executeGenerator(self):
        line = self.uriInput.text()
        if MoCGF.py27:
            line = unicode(line)
        uriList = [u.strip() for u in line.split(',')]
        outputFile = self.outputInput.text()
        if not outputFile:
            tmp, outputFile = tempfile.mkstemp(suffix='.txt', text=True)
            self.outputInput.setText(outputFile)
        x = self.activeGenerator.execute(uriList)
        o = open(outputFile, 'w')
        o.write(x.read())
        o.close()
        if self.openOutputButton.isChecked():
            QtGui.QDesktopServices.openUrl(QtCore.QUrl.fromLocalFile(outputFile))

def main():
    # FIXME: resPath may need to be adjusted after installation?
    resPath = os.path.join(os.path.dirname(os.path.realpath(__file__)), 'res')
    app = QtGui.QApplication(sys.argv)
    mw = MoCGFWidget(app, resPath)
    mw.show()
    r = app.exec_()
    return(r)
