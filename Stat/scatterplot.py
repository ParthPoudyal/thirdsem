import matplotlib.pyplot as plt
import pandas as pd 

data= pd.read_csv("practical1.csv")

data_x = data['x']
data_y = data['y']

plt.scatter(data_x,data_y)
plt.show()