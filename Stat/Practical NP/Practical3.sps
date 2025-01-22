* Encoding: UTF-8.
for practical 3.
DATASET ACTIVATE Practical3_dataset.
NPAR TESTS
  /MEDIAN=Marks BY Section(0 1)
  /MISSING ANALYSIS.

NPAR TESTS
  /M-W= Marks BY Section(1 0)
  /K-S= Marks BY Section(1 0)
  /MISSING ANALYSIS.
