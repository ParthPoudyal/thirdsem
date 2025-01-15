import math
from scipy.stats import norm

# Given data
n1, n2 = 50, 50
p1_hat, p2_hat = 0.44, 0.50
alpha = 0.05

# Pooled proportion
x1 = p1_hat * n1
x2 = p2_hat * n2
p_hat_pooled = (x1 + x2) / (n1 + n2)

# Test statistic (z)
z_numerator = p1_hat - p2_hat
z_denominator = math.sqrt(p_hat_pooled * (1 - p_hat_pooled) * (1/n1 + 1/n2))
z = z_numerator / z_denominator

# p-value (one-tailed)
p_value = norm.cdf(z)

# Confidence interval for difference of proportions
z_alpha_2 = norm.ppf(1 - alpha / 2)
ci_margin = z_alpha_2 * math.sqrt(
    (p1_hat * (1 - p1_hat) / n1) + (p2_hat * (1 - p2_hat) / n2)
)
ci_lower = z_numerator - ci_margin
ci_upper = z_numerator + ci_margin

z, p_value, (ci_lower, ci_upper)
