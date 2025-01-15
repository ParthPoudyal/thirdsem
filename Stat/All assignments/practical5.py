from scipy.stats import ttest_1samp


data = [35 ,20 ,30 ,45 ,60 ,40 ,65 ,40 ,25 ,50 ]
t_calc,p_value = ttest_1samp(data,popmean=30,alternative='greater')
print (f"the calculated t is :{t_calc}")
print (f"the p value is : {p_value}")

if (p_value < 0.05):
    print ("Insignificant")
else:
    print ("significant")
