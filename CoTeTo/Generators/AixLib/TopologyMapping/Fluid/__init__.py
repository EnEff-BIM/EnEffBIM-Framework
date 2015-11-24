# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 16:01:34 2015

@author: pre
"""

class First(object):
  def __init__(self):
    super(First, self).__init__()
    print("first")

class Second(object):
  def __init__(self):
    super(Second, self).__init__()
    print("first1")

class Third(Second,First):
  def __init__(self):
    super(Third, self).__init__()
    print("first2")
    
Third()