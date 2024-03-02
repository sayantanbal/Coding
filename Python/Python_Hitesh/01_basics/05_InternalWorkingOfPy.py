

# python is a number powered language. so numbers are treated differently than other datatypes such as string list dictionary etc.


# python counts the reference of the object. it is specified as "ref_count" . if the reference count is 0 then the object is deleted from the memory.


# to count the reference of the object we can use "sys" module. it has a function called "getrefcount" which returns the reference count of the object.

# example:

# import sys
# a = 10
# print(sys.getrefcount(a)) # 2 getrefcount function also counts the reference of the object itself. so it should be 2.

# 4294967295 is the maximum number of reference count. if the reference count is 4294967295 then it is not the actual reference count. it is almost constant for every variable.

# but is shows 4294967295 instead of 1. it is because there is a compiler optimization loop. so it is not showing the correct reference count. but it is not a problem. it is just a compiler optimization loop. actually you can not get very close to memory in python but you have pointers too in python. so you can use pointers to get the reference count of the object. but it is not recommended to use pointers in python. because python is a high level language. so you should not use pointers in python. but you can use pointers in c or c++.

# example:
import sys
a = 24601
print(sys.getrefcount(a))
# this is a special number. idk why but it always gives reference count 4. if you ask it like above. but if you ask it like below then it will give the reference count 3.
print(sys.getrefcount(24601)) # 3


# datatype of the data is always stored in memory. the variable initialized to hold the value has/have no realtion with it.

# python does not have any datatype concept for variables. we do not use datatype to declare the variable. but whatever the value we assign to the variable, the variable will take the datatype of the value. 

# In other words datatypes concept are solely for the values not for the variables.


# the garbage collection of numbers and strings are not executed immediately. it is executed after some time. the optimization loop is also there. such as -> if the value is used elsewhere then the assign reassign takes some computational power and time. so it is prevented by the compiler by immediately not deleting the object. 

# so if you delete the object then it will not be deleted immediately. it will be deleted after some time. so if you want to delete the object immediately then you can use "gc" module. it has a function called "collect" which deletes the object immediately.


# example:
import gc
a = 10
b = 10
c = 10
print(sys.getrefcount(10)) # 4
del a
del b
del c
print(sys.getrefcount(10)) # 4
gc.collect()
print(sys.getrefcount(10)) # 3
# so after deleting the object the reference count is still 4. but after using gc.collect() function the reference count is 3. so the object is deleted after using gc.collect() function.



# >>> myl1 = [1,2,3]
# >>> myl2=myl1
# >>> myl1
# [1, 2, 3]
# >>> myl2
# [1, 2, 3]
# >>> myl2[0] = 33
# >>> myl2
# [33, 2, 3]
# >>> myl1
# [33, 2, 3]
# as myl1 and myl2 refers the same object in memory so if we change the value of myl2 then it will also change the value of myl1. because they both refers the same object in memory. 


# >>> myl1 = [1,2,3]
# >>> myl2 = [1,2,3]
# >>> myl2[0] = 33
# >>> myl1
# [1, 2, 3]
# >>> myl2          
# [33, 2, 3]
# as myl1 and myl2 refers the different object in memory (beacuse list is mutable so it not guranteed that they are same so python creates another memory reference) but are same value so if we change the value of myl2 then it will not change the value of myl1. 
