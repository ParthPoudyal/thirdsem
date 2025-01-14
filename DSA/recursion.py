def fact(x): 
    if (x == 0): 
        return 1 
    else:
        return x * fact(x-1)
x = int(input("enter a value for x: "))
factorial = fact (x)
print (factorial)