import pandas as pd
data = pd.read_csv('Practical 3.csv')
from statsmodels.stats.weightstats import ztest
z_stat, p_value = ztest(data, value = 1100)
print (z_stat)
print (p_value)