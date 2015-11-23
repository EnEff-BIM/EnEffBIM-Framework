# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 15:33:48 2015

@author: pre
"""
import os

def get_full_path(rel_path):
    '''Helperfunction to construct pathe within Framework

    Helperfunction to construct pathes to files within EnEffBIM-Framework from
    CoTeTo environment

    Parameters
    ----------
    rel_path : str
        Relative path beginning from EnEffBIM-Framework source folder including
        filename

    Returns
    ----------
    full_path : str

    '''

    directory = os.path.dirname(__file__)
    
    src = "\\EnEffBIM-Framework"
    last_index = directory.rfind(src)
    first_path = directory[:last_index]+"\\EnEffBIM-Framework\\"
    full_path = os.path.join(first_path, rel_path)
    print(full_path)
    return full_path