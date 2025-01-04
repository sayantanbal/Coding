# list1 = [1,2,3,4,5]
# list2 = ['a','b','c']
# print(list(zip(list1,list2))) 
# when non-identical number of elements are zipped together then the object which has least elements is the limiting factor.
# matrix = [[1,2,3],[4,5,6],[7,8,9]]
# print(list(zip(*matrix)))
# print(list(zip(*(zip(*matrix)))))
# *Using the asterisk (`*`) before a variable name in Python is a way to unpack iterable objects into individual arguments. In this context, writing `*matrix` distributes the items of matrix as separate arguments when calling a function or performing an operation.This approach can be used to apply a function like zip to multiple lists or sequences held within matrix. For example, if matrix contains multiple rows of data, unpacking it with `*` passes each row as a separate argument. This makes it quick to process or combine corresponding elements across those rows without manually looping through them.*


# by loop -->
# print([list(row) for row in zip(matrix)])

# doing star operator twice will give the original matrix back. once will give the transposed matrix. 

# dot product using zip

a = [1,2,3]
b = [4,5,6]
dot_product = sum([i*j for i,j in zip(a,b)])
print(dot_product)

