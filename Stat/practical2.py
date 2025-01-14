"""Two samples of size 30 each is selected. From two independent populations. With variances.
840 and 920 respectively. Are the selected samples Have Equal means at 5% level of
significance. Also find 95% confidence limits for the difference of means. """
import pandas as pd 
import math 
from statsmodels.stats.weightstats import ztest
from practical1 import z_alpha,confidence_limits 

data = pd.read_csv("practical1.csv")
data_x = data['x']
data_y = data['y']

x_mean = round(data_x.mean(),2)
y_mean = round(data_y.mean(),2)
mean_diff = x_mean - y_mean

x_count = data_x.count()
y_count = data_y.count()
x_pop_var = 840 # given 
y_pop_var = 940 # given


z_calc, p_calc = ztest(data_x, data_y, alternative="two-sided")

std_error = math.sqrt((x_pop_var**2/ x_count)+(y_pop_var**2/ y_count))
confidence_intervals = confidence_limits(mean_diff,z_alpha,std_error)

print (f"The acquired z-values is: {z_calc:.2f}")
print (f"The acquired p-values is : {p_calc:.2f}")
print (f"confidence interval is : {confidence_intervals}")

if p_calc > 0.05: 
    print ("accept Null hypothesis")
else: 
    print ("Reject Null Hypothesis")


