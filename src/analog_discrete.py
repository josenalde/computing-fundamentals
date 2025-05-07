#code by Josenalde Oliveira
#didatic script for analog, discrete signals

import matplotlib.pyplot as plt
import numpy as np

#create x-axis points
t1 = np.linspace(-10,10,20) #20 points in [-10,10]
t2 = np.linspace(-10,10,100) #100 points in [-10,10]

#apply sin function to both scales
ft = np.sin(t1)
ft2 = np.sin(t2)

plt.figure(figsize=(10,15))
plt.subplot(2,1,1)
plt.plot(t1,ft, 'b', t2, ft2, 'r') #see both curves
plt.grid()
plt.subplot(2,1,2)
plt.stem(t1,ft) #see individual plots (points)
#plt.stem(t2,ft2) #see individual plots (points). Comment previous line
plt.grid()
plt.show()
