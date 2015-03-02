#!/usr/bin/env python3

import sys

if sys.version_info >= (3, 3):

    import importlib

    def import_file(module_path='', module=''):
        importlib.invalidate_caches()
        if module in sys.modules:
            del sys.modules[module]
        sys.path.insert(0, module_path)
        loader = importlib.find_loader(module)
        del sys.path[0]
        m = loader.load_module(module)
        return m


elif sys.version_info >= (2, 7):

    def import_file(module_path='', module=''):
        if module in sys.modules:
            del sys.modules[module]
        sys.path.insert(0, module_path)
        m = __import__(module)
        del sys.path[0]
        return m

else:
    raise NotImplementedError('This modules functions are not implemented for python <2.7')


if __name__ == '__main__':
    # test this module with path and module name as arguments
    # will print modules namespace (without __builtins__)

    import pprint
    
    p, n = sys.argv[1:]
    m = import_file(p, n)
    d = m.__dict__
    del d['__builtins__']
    pprint.pprint(d)
