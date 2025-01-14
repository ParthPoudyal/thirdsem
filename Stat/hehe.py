import pandas as pd
import math
from statsmodels.stats.weightstats import ztest

# Constants
z = 1.96  # for 0.05 confidence intervals
p = 0.5  # assuming that the proportions of male to female are equal
e = 0.05
pop_size = 5000

# Load the data
data = pd.read_csv('Practical9.csv')

# Calculate the sample size
n = (z**2 * p * (1 - p)) / (e**2)
n = math.ceil(n / (1 + ((n - 1) / pop_size)))  # Post adjustment

# Draw a sample
gender_data = data['Gender']
gender_data_sample = gender_data.sample(n, random_state=42)

# Perform a z-test
z_value, p_value = ztest(gender_data_sample == '1', value=0.5)

# Output the results
print(f"The acquired p-value is: {p_value:.2f}")
print(f"The test statistic (z-value) is: {z_value:.2f}")

if abs(z_value) < 1.96:
    print("The gender is equally distributed.")
else:
    print("The genders are not equally distributed.")
