import pandas as pd


# dictionary must be balanced. If not, it will throw an error
x ={'A': [1, 2, 3], 'B': [4, 5, 6]}

# var = pd.DataFrame(x)
# print(var)
# print(type(var))

# showing only the first column
# print(var['A'])
# var1 = pd.DataFrame(x, columns=['A'])
# print(var1)

# list1 = [[1, 2, 3, 4, 5], [6, 7, 8, 9, 10]]
# var2 = pd.DataFrame(list1, columns=['A', 'B', 'C', 'D', 'E'])
# print(var2)

# if we want to give index to the dataframe then we can do it like this
sr = {'A': pd.Series([1, 2, 3, 4, 5],index=['a','b','c','d','e']), 'B': pd.Series([6, 7, 8, 9, 10],index=['a','b','c','d','e'])}

var3 = pd.DataFrame(sr)
print(var3)