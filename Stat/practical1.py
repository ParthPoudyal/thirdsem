from statsmodels.stats.weightstats import ztest
from math import sqrt

sample_size = 150 
sample_mean = 47.5 

population_mean = 50 
population_stdev= 12 
level_of_significance = 0.05 
z_alpha = 1.96

#for given data, let the null hypothesis be accepted
#where Null hypothesis : the population mean is equal to the sample mean 
#alternate hypothesis : the population mean is not equal to sample mean

def z_value_calc (sample_mean, sample_size, population_mean , population_stdev): 
    std_error = population_stdev / sqrt(sample_size)
    z_value = abs((sample_mean - population_mean)/ std_error)
    return (z_value,std_error)

def confidence_limits(sample_mean , z_alpha,std_error):
    postitive_limits = round(sample_mean + z_alpha* std_error, 2)
    negative_limits =  round(sample_mean - z_alpha* std_error,2)
    return (postitive_limits, negative_limits)
    

z_calc, std_error = z_value_calc (sample_mean, sample_size, population_mean , population_stdev)
confidence_interval = confidence_limits(sample_mean,z_alpha, std_error)
print (f"z calculated is : {z_calc:.2f}")
print (f"confidence interval is : {confidence_interval}")

if z_calc < z_alpha: 
    {
        print ("accept null hypothesis")
    }
else: 
    {
        print ("reject null hypothesis")
    }


