# -*- coding: utf-8 -*-
"""
Created on Thu Sep 17 12:02:12 2020

@author: Josenalde
"""


import cv2 as cv
import numpy as np
img = cv.imread('abaco.jpg')
print(type(img))
imgG = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow('TAD0001 - Teste de leitura de imagem', imgG)
cv.waitKey(0)
cv.destroyAllWindows()