import pandas as pd
# x = pd.Series([1,2,3,4,5], index=['a','b','c','d','e'], dtype="float")
# print(x)
# print(type(x))
# print(x['a'])


# dictionary = {
#     "name": ["Sayantan", "meow", "hummm"],
#     "age": [21, 22, 23],
#     "city": ["Kolkata", "Delhi", "Mumbai"]
# }

# x = pd.Series(dictionary)
# print(x)

# in panda we can work with missing data also but numpy does not support that
s1 = pd.Series(1, index=['a','b','c','d','e'], dtype="float")
s2 = pd.Series(2, index=['a','b','c','d','e'], dtype="float")
print(s1+s2)
print(type(s1+s2))