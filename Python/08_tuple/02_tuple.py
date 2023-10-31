tuple1 = (0, 1, 2, 3, 2, 31, 1, 3, 2, 3)
# res = tuple1.count(3)
# res = tuple1.index(3)
# res = tuple1.index(311)
# res = tuple1.index(3, 4, 8) # it takes the first value as an argument to find the number. then slices the tuple using next two values and then findes index. it returns index based on the whole 
res = len(tuple1)
print('Count of 3 in tuple1 is:', res)