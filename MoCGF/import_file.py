#!/usr/bin/env python3

import sys

if sys.version_info >= (3, 4):

    import importlib

    def import_file(module_path='', module=''):
        pass

elif sys.version_info >= (3, 3):

    import importlib

    def import_file(module_path='', module=''):
        pass

elif sys.version_info >= (2, 7):

    def import_file(module_path='', module=''):
        pass

else:
    raise NotImplementedError('This modules functions are not implemented for python <2.7')


if __name__ == '__main__':
    # test code
    pass
