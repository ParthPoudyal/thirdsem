import pandas as pd 
import math 
import statistics as st
data = pd.read_csv('Practical 9 files\Practical9.csv')
from statsmodels.stats.weightstats import ztest

z= 1.96 #for 0.05 confidence intervals
p = 0.5 #here we assume that the proportions of male to female is equal
e = 0.05
pop_size = 5000

#print(data.describe()) 


#to calculate the sample size : 
n = (z**2 * p *(1-p))/(e**2)
n = math.ceil(n/(1+((n-1)/pop_size))) 
data_sample = data.sample(500)

#sample data saved to csv
data_sample.to_csv('Practical 9 files/sample.csv')

#seperating the gender column to work with
male_count = (data_sample['Gender'] == 1).sum()
female_count = n - male_count
male_proportion = male_count / n 
female_proportion = female_count / n 
print(male_proportion, female_proportion)

standard_error = math.sqrt(male_proportion* female_proportion/n)

z_value_b  = (male_proportion - 0.5)/standard_error # for equal distribution

if abs(z_value_b)<z: 
    print ("male proprtion and female proportion are equal")
else:
    print ("male proportion and female proporation are not equal")




male_height_data = data_sample[data_sample['Gender'] == 1]['Height']
female_height_data = data_sample[data_sample['Gender'] == 0]['Height']

print (male_height_data)

#performing the z test on the generated sample data
z_value, p_value = ztest(male_height_data, female_height_data)
print (f"the acquired pvalues is :{p_value:.2f}")
print (f"the required test statistic is :{z_value:.2f}")

if p_value > 0.05: 
    print ("insignificant evidence that females are not taller than males")
else: 
    print ("females are taller")






