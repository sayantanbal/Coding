# it filters the data based on the condition; gathers the data that satisfies the condition.
def isOdd(x):
    return x%2 != 0
a = [1,2,3,4,5,6,7,8,9]
b = filter(isOdd,a)
print(list(b))