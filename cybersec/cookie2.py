user_1 = {
    "name": "Parth", 
    "age" : "hello", 
    "school" : "pathshala"
}
user_2 = {
    "name": "Parth", 
    "age" : "hello", 
    "favourite" : "apple"
}

print (user_1.keys())
print (user_2.keys())

for items in user_1,user_2: 
    if (not(items in (user_1 and user_2))): 
        print (items)
