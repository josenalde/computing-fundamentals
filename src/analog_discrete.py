# -*- coding: utf-8 -*-
"""
Created on Thu Sep 17 12:24:17 2020

@author: Josenalde
"""


import matplotlib.pyplot as plt
import numpy as np

t1 = np.linspace(-10,10,20) #20 points in [-10,10]
t2 = np.linspace(-10,10,100) #100 points in [-10,10]
ft = np.sin(t1)
ft2 = np.sin(t2)
#plt.plot(t1,ft, t2, ft2) #see both curves
plt.stem(t1,ft) #see individual plots (points)
plt.show()