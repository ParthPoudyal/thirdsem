import pandas as pd
import scipy.stats as stat


data = pd.read_csv('Practical6.csv')


manure_I = data['x'].dropna()  
manure_II = data['y'].dropna() 
print (manure_II)

var_x = manure_I.var()
var_y = manure_II.var()
if var_x == var_y: 
    print ("they do have equal variance")
else: 
    print ("they do not have equal variance")


t_stat, p_value = stat.ttest_ind(manure_I,manure_II, equal_var=False) 
if (p_value < 0.05):
    print ("Reject Null hypothesis : significant difference between mean yields")
else:
    print ("Accept null hypotheis : Insignificant difference between mean yields")
print(f"T-statistic: {t_stat:.2f}")
print(f"P-value: {p_value:.2f}")
