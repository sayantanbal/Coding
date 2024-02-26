

# Chapter 3: Basics_03 -> python mutable and immutable

#       everything in python is an object. mutable and immutable are totally based on memory management. and it is not about constant and variable.
# 
# 
# 1. mutable means changeable. such as -> list, dictionary, set, byteArray, Array.


# 2. immutable means unchangeable. such as -> int, float, decimal, bool, string, tuple, range, frozenset, bytes.

    # 2.1 when a variable gets asigned to a value, it is stored in memory as an object. the value stored in memory is immutable. you CAN'T chnage the value stored in memory. but you can change the variable to point to a different value.

    # 2.2 for example:
    #    a = 5
    #    a = "hello"

    # 2.3 in the above example, the value stored in memory is immutable. you can't change the value stored in memory. but you can change the variable to point to a different value. 
        # 2.3.1 first a is pointing to 5, then we change the reference for a, now it is pointing to "hello". now that we didn't assign any other variable to 5, it's reference will be lost and it will be garbage collected.


