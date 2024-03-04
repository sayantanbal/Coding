l = [1,3,5,6,7,8,4]

def filter_func(a):
    return a>4
newl = list(filter(filter_func, l))
print(newl)

newl2 = list(filter(lambda a: a>4, l))
print(newl)