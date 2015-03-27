#-*- coding:utf-8 -*-
#
# This file is part of MoCGF - a code generation framework
# 201500225 Joerg Raedler jraedler@udk-berlin.de
#

import sys, os, os.path, tempfile, argparse, logging, configparser
import MoCGF
from MoCGF.Controller import Controller
from PyQt4 import QtCore, QtGui, uic

descr = """
MoCGF is a framework to generate source code from data sources.
It is developed in the EnEff-BIM project to generate Modelica code from SimModel data.
MoCGF-cli is the command line interface to MoCGF. MoCGF-gui provides a graphical interface."""


# view log in Qt - inspired by
# http://stackoverflow.com/questions/14349563/how-to-get-non-blocking-real-time-behavior-from-python-logging-module-output-t

class QtLogHandler(logging.Handler):
    def __init__(self):
        logging.Handler.__init__(self)
    def emit(self, record):
        record = self.format(record)
        if record:
            XStream.stdout().write('%s\n'%record)

class XStream(QtCore.QObject):
    _stdout = None
    _stderr = None
    messageWritten = QtCore.pyqtSignal(str)
    def flush( self ):
        pass
    def fileno( self ):
        return -1
    def write( self, msg ):
        if not self.signalsBlocked():
            self.messageWritten.emit(msg)
    @staticmethod
    def stdout():
        if not XStream._stdout:
            XStream._stdout = XStream()
            sys.stdout = XStream._stdout
        return XStream._stdout
    @staticmethod
    def stderr():
        if not XStream._stderr:
            XStream._stderr = XStream()
            sys.stderr = XStream._stderr
        return XStream._stderr



class MoCGFWidget(QtGui.QWidget):
    def __init__(self, app, resPath, *arg, **kwarg):
        QtGui.QWidget.__init__(self)
        self.app = app
        # load the Icons
        sys.path.insert(0, resPath)
        import Icons_rc
        # load the ui
        self.ui = uic.loadUi(os.path.join(resPath, 'MoCGF-GUI.ui'), self)
        self.setWindowTitle('MoCGF GUI | Version: %s' % (MoCGF.__version__))
        # create a logView?
        if kwarg['logLevel'] > 0:
            self.logView = QtGui.QTextBrowser(self)
            self.moCGFMainView.addTab(self.logView, 'Messages')
            XStream.stdout().messageWritten.connect(self.logView.insertPlainText)
            XStream.stderr().messageWritten.connect(self.logView.insertPlainText)
            logHandler = QtLogHandler()
            logHandler.setFormatter(logging.Formatter("%(levelname)s: %(message)s"))
            kwarg['logHandler'] = logHandler
        # create a controller
        self.mocgf = Controller(*arg, **kwarg)

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
    """main function when MoCGF is used with the Qt gui"""

    parser = argparse.ArgumentParser(description=descr)
    grp = parser.add_argument_group('path settings')
    grp.add_argument('-p', '--search-path', metavar='PATH', help='search path for generators (separated by ;)')
    grp = parser.add_argument_group('general information')
    grp.add_argument('-d', '--debug', metavar='LEVEL', help='set debug level and activate messages tab (1...5)')

    args = parser.parse_args()

    # first read config file for default values
    defaults = {
        'GeneratorPath': os.environ.get('MOCGF_GENERATORS', ''),
        'LogLevel' : '0',
    }
    cfg = configparser.ConfigParser(defaults)
    homeVar = {'win32':'USERPROFILE', 'linux2':'HOME', 'darwin':'HOME'}.get(sys.platform)
    cfg.read(os.path.join(os.environ.get(homeVar, ''), '.MoCGF.cfg'))

    # generatorPath
    gp = args.search_path or cfg['DEFAULT']['GeneratorPath']
    generatorPath = [p for p in gp.split(';') if p]

    # logLevel
    logLevel = 10 * cfg.getint('DEFAULT', 'LogLevel')
    if args.debug:
        logLevel = 10 * int(args.debug)

    # FIXME: resPath may need to be adjusted after installation,
    # or use pkg_resources? See:
    # http://stackoverflow.com/questions/779495/python-access-data-in-package-subdirectory
    resPath = os.path.join(os.path.dirname(os.path.realpath(__file__)), 'res')

    app = QtGui.QApplication(sys.argv)
    mw = MoCGFWidget(app, resPath, generatorPath, logLevel=logLevel)
    mw.show()
    r = app.exec_()
    return(r)
