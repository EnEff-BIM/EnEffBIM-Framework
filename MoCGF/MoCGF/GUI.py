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
    _ostdout = None
    _ostderr = None
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
            XStream._ostdout = sys.stdout
            sys.stdout = XStream._stdout
        return XStream._stdout

    @staticmethod
    def stderr():
        if not XStream._stderr:
            XStream._stderr = XStream()
            XStream._ostderr = sys.stderr
            sys.stderr = XStream._stderr
        return XStream._stderr

    @staticmethod
    def reset():
        if XStream._stdout:
            sys.stdout = XStream._ostdout
        if XStream._stderr:
            sys.stdout = XStream._ostderr


class LogViewer(QtGui.QWidget):
    def __init__(self, resPath, *arg, **kwarg):
        QtGui.QWidget.__init__(self)
        # load the ui
        self.ui = uic.loadUi(os.path.join(resPath, 'MessageBrowser.ui'), self)
        XStream.stdout().messageWritten.connect(self.textBrowser.insertPlainText)
        XStream.stderr().messageWritten.connect(self.textBrowser.insertPlainText)
        self.logHandler = QtLogHandler()
        self.logHandler.setFormatter(logging.Formatter("%(levelname)s: %(message)s"))
        self.logger = logging.getLogger('MoCGF')
        i = int(kwarg['logLevel'] / 10 ) - 1 # convert level to QComboBox index
        self.levelSelect.setCurrentIndex(i)
        self.levelSelect.currentIndexChanged.connect(self.setLevel)
        self.clearButton.pressed.connect(self.clearLog)
        self.saveButton.pressed.connect(self.saveLog)

    def setLevel(self, i):
        l = (i+1) * 10 # convert QComboBox index to level :-)
        self.logger.setLevel(l)

    def clearLog(self):
        self.textBrowser.clear()
        
    def saveLog(self):
        f = QtGui.QFileDialog.getSaveFileName(self, 'Select Output File', '*')
        if not f:
            return
        try:
            open(f, 'w').write(self.textBrowser.toPlainText())
        except Exception as e:
            QtGui.QMessageBox.critical(self, 'Error during save', 'Message log could not be saved!')
            self.logger.exception('Could not save message log')


class MoCGFWidget(QtGui.QWidget):
    def __init__(self, app, resPath, cfg, *arg, **kwarg):
        QtGui.QWidget.__init__(self)
        self.app = app
        # load the Icons
        sys.path.insert(0, resPath)
        import Icons_rc
        # load the ui
        self.ui = uic.loadUi(os.path.join(resPath, 'MoCGF-GUI.ui'), self)
        self.setWindowTitle('MoCGF GUI | Version: %s' % (MoCGF.__version__))
        self.cfg = cfg
        # create a logView?
        if 'logLevel' in kwarg and kwarg['logLevel'] > 0:
            self.logView = LogViewer(resPath, *arg, **kwarg)
            self.moCGFMainView.addTab(self.logView, 'Messages')
            kwarg['logHandler'] = self.logView.logHandler
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

        # set preferences from cfg
        if cfg.has_section('PREFERENCES'):
            p = cfg['PREFERENCES']
            self.uriInput.setText(p.get('uriList', ''))
            self.outputInput.setText(p.get('outputFile', ''))
            g = p.get('generator', '')
            for x in range(self.generatorList.count()):
                i = self.generatorList.item(x)
                if i.text() == g:
                    i.setSelected(1)
                    break
        # end of preferences
    

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
        # get old selection
        selItems = self.generatorList.selectedItems()
        selected = None
        if selItems:
            selected = selItems[0].text()
            if MoCGF.py27:
                seleected = unicode(selected)
        if rescan:
            self.mocgf.rescanGenerators()
        self.generatorList.clear()
        i = 0
        for n in sorted(self.mocgf.generators):
            self.generatorList.addItem(n)
            if n == selected:
                # select previously selected generator 
                self.generatorList.item(i).setSelected(True)
            i += 1
        if not self.generatorList.selectedItems():
            # nothing selected, select the first in the list
            self.generatorList.item(0).setSelected(True)

    def activateGenerator(self):
        sel = self.generatorList.selectedItems()
        if sel:
            gen = sel[0].text()
            if MoCGF.py27:
                gen = unicode(gen)
        else:
            return
        self.activeGenerator = self.mocgf.generators[gen]
        self.generatorView.clear()
        self.generatorView.setText(self.activeGenerator.infoText('html'))

    def executeGenerator(self):
        line = self.uriInput.text()
        if MoCGF.py27:
            line = unicode(line)
        uriList = [u.strip() for u in line.split(',')]
        outputFile = str(self.outputInput.text())
        if not outputFile:
            tmp, outputFile = tempfile.mkstemp(suffix='.txt', text=True)
            self.outputInput.setText(outputFile)
        if not os.path.isabs(outputFile):
            outputFile = os.path.abspath(outputFile)
        x = self.activeGenerator.execute(uriList)
        o = open(outputFile, 'w')
        o.write(x.read())
        o.close()
        if self.openOutputButton.isChecked():
            QtGui.QDesktopServices.openUrl(QtCore.QUrl.fromLocalFile(outputFile))

    def closeEvent(self, e):
        # first reset output streams to standard settings
        XStream.reset()
        # save preferences to config file
        if hasattr(self.cfg, 'path'):
            uriList = self.uriInput.text()
            outputFile = self.outputInput.text()
            generator = ''
            tmp = self.generatorList.selectedItems()
            if tmp:
                generator = tmp[0].text()
                if MoCGF.py27:
                    generator = unicode(generator)
            try:
                c = self.cfg
                p = 'PREFERENCES'
                if not c.has_section(p):
                    c.add_section(p)
                c.set(p, 'uriList', uriList)
                c.set(p, 'outputFile', outputFile)
                c.set(p, 'generator', generator)
                with open(c.path, 'w') as configfile:
                    c.write(configfile)
            except:
                # silently ignore errors
                pass
        e.accept()


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
    homeVar = {'win32':'USERPROFILE', 'linux':'HOME', 'linux2':'HOME', 'darwin':'HOME'}.get(sys.platform)
    cfgFile = os.path.join(os.environ.get(homeVar, ''), '.MoCGF.cfg')
    if os.path.isfile(cfgFile):
        cfg.read(cfgFile)
        cfg.path = cfgFile

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
    mw = MoCGFWidget(app, resPath, cfg, generatorPath, logLevel=logLevel)
    mw.show()
    r = app.exec_()
    return(r)
