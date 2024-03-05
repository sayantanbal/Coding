# *args is accepting any number of arguments."args" is not mandatory. you can use any name. * is mandatory. but it is a good practice to use args. you will find most codebase using "args".
def sum_all(*args):
    print(args)  # without * it will print the tuple
    # print(*args) # with * it will print the values separated by space
    for i in args:
        print(i * 2)
    # sum() is a built-in function that adds all the elements in the tuple and returns the sum. args is a tuple here. so if you put *args it will throw TypeError.
    return sum(*args)


print(sum_all(1, 2, 3))
# print(sum_all(1, 2, 3, 4, 5))
# print(sum_all(1, 2, 3, 4, 5, 6, 7, 8))
