import matplotlib.pyplot as plt
import numpy as np

t1 = np.linspace(-10,10,20) #20 points in [-10,10]
t2 = np.linspace(-10,10,100) #100 points in [-10,10]
ft = np.sin(t1)
ft2 = np.sin(t2)
plt.figure(figsize=(10,15))
plt.subplot(2,1,1)
plt.plot(t1,ft, 'b', t2, ft2, 'r') #see both curves
plt.grid()
plt.subplot(2,1,2)
plt.stem(t1,ft) #see individual plots (points)
plt.grid()
plt.show()
