import pandas as pd
import scipy.stats as stat


data = pd.read_csv('Practical7.csv')


before = data['x'].dropna()  
after = data['y'].dropna() 
print (after)

var_x = before.var()
var_y = after.var()
if var_x == var_y: 
    print ("they do have equal variance")
else: 
    print ("they do not have equal variance")


t_stat, p_value = stat.ttest_ind(after,before,alternative='greater') 
if (p_value < 0.05):
    print ("Reject Null hypothesis : they have improved")
else:
    print ("Accept null hypotheis : they have not improved")
print(f"T-statistic: {t_stat:.2f}")
print(f"P-value: {p_value:.2f}")
