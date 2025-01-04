# lambda function is basically a small anonymous function that can take any number of arguments, but can only have one expression.
a = [1,2,3,4,5,6,7,8,9]
add = lambda a : sum(a)
print(add(a))