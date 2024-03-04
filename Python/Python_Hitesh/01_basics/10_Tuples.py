
# why need tuple?
# 1. faster than list
# 2. immutable

# how to create a tuple
# 1. using the tuple() constructor
my_tuple = tuple()
print(my_tuple)
# 2. using a comma-separated sequence of values
my_tuple2 = (1, 2, 3)
print(my_tuple2)
# 3. using the tuple() constructor with a sequence of values
my_tuple3 = tuple([7, 8, 9])
print(my_tuple3)
# 4. using the tuple() constructor with a string
my_tuple4 = tuple("Hello")


# how to create a tuple with a single value
# 1. using a comma
my_tuple5 = ("apple",)
print(my_tuple5)
# 2. using the tuple() constructor
my_tuple6 = tuple(["apple"])
print(my_tuple6)
# 3. using the tuple() constructor with a string
my_tuple7 = tuple("apple")
print(my_tuple7)




# how to access the values in a tuple
# 1. using the index operator
print(my_tuple2[0])
# 2. using the slice operator
print(my_tuple2[0:2])
# 3. using the for loop
for x in my_tuple2:
    print(x)
# 4. using the in operator
print(1 in my_tuple2)
# 5. using the len() function
print(len(my_tuple2))
# 6. using the count() method
print(my_tuple2.count(1))
# 7. using the index() method
print(my_tuple2.index(1))
# 8. using the unpacking operator
a, b, c = my_tuple2
print(a, b, c)
# 9. using the * operator
a, *b, c = my_tuple2
print(a, b, c)
# 10. using the * operator with a function
def my_function(*args):
    print(args)


# how to update a tuple
# 1. using the + operator
my_tuple8 = (1, 2, 3)
my_tuple9 = (4, 5, 6)   
my_tuple10 = my_tuple8 + my_tuple9
print(my_tuple10)

# 2. using the * operator
my_tuple11 = (1, 2, 3)
my_tuple12 = my_tuple11 * 3
print(my_tuple12)

# 3. using the += operator
my_tuple13 = (1, 2, 3)
my_tuple13 += (4, 5, 6)
print(my_tuple13)

# 4. using the *= operator
my_tuple14 = (1, 2, 3)
my_tuple14 *= 3
print(my_tuple14)

# 5. using the list() constructor
my_tuple15 = (1, 2, 3)
my_list = list(my_tuple15)
my_list.append(4)
my_tuple15 = tuple(my_list)
print(my_tuple15)

# 6. using the bytearray() constructor
my_tuple16 = (1, 2, 3)
my_bytearray = bytearray(my_tuple16)
my_bytearray.append(4)
my_tuple16 = tuple(my_bytearray)
print(my_tuple16)   

# 7. using the memoryview() constructor
my_tuple17 = (1, 2, 3)
my_memoryview = memoryview(my_tuple17)
my_memoryview[0] = 4
my_tuple17 = tuple(my_memoryview)
print(my_tuple17)


# how to delete a tuple
# 1. using the del keyword
my_tuple18 = (1, 2, 3)
del my_tuple18
# print(my_tuple18)  # this will throw an error because the tuple has been deleted.

# 2. using the clear() method
my_tuple19 = (1, 2, 3)
my_tuple19.clear()
# print(my_tuple19)  # this will throw an error because the tuple has been deleted.


# how to copy a tuple
# 1. using the tuple() constructor
my_tuple20 = (1, 2, 3)
my_tuple21 = tuple(my_tuple20)
print(my_tuple21)
# 2. using the * operator
my_tuple22 = (1, 2, 3)
my_tuple23 = my_tuple22 * 1
print(my_tuple23)


# how to merge two tuples
# 1. using the + operator
my_tuple24 = (1, 2, 3)
my_tuple25 = (4, 5, 6)
my_tuple26 = my_tuple24 + my_tuple25


# nested tuples
my_tuple27 = (1, 2, 3, (4, 5, 6))
print(my_tuple27)
