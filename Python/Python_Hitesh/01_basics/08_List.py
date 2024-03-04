
alphabets = ['abc', 'def', 'ghi', 'jkl']

print(alphabets[1:2])
alphabets[1:2] = 'mno'
print(alphabets) # this gives the output ['abc', 'm', 'n', 'o', 'ghi', 'jkl'], 
# why?
# because the list is sliced from 1 to 2, and then the sliced part is replaced by 'mno'. now 'mno' is a string, treated as a list of characters, and each character is added to the list after dicing.


# to replace the sliced part with a list, use the following code
alphabets[1:2] = ['mno']
print(alphabets) # this gives the output ['abc', 'mno', 'ghi', 'jkl']



# now what does [1:1] mean?
# it means that the list is sliced from index 1 to 1, which is an empty list.
# so the following code
print(alphabets[1:1]) # this gives the output [] (an empty list)


alphabets[1:1] = ['pqr', '123']
print(alphabets) # this gives the output ['abc', 'pqr', '123', 'mno', 'ghi', 'jkl']
# it means that the sliced part is replaced by the list ['pqr', '123'] now that the sliced part is empty, the list ['pqr', '123'] is added to the list at the index 1.



# inserting an empty list
alphabets[1:1] = []
print(alphabets) # this gives the output ['abc', 'pqr', '123', 'mno', 'ghi', 'jkl']
# it means that the sliced part is replaced by an empty list, so nothing is added to the list at the index 1. the list remains the same.

# now what does [1:0] mean?
# it means that the list is sliced from index 1 to 0, which is an empty list.
# so the following code
print(alphabets[1:0]) # this gives the output [] (an empty list)

# if you want to perform deletion, use the following code
alphabets[1:3] = []
print(alphabets) # this gives the output ['abc', 'mno', 'ghi', 'jkl']
# it means that the sliced part is replaced by an empty list, so the list ['pqr', '123'] is deleted from the list at the index 1. the list becomes ['abc', 'mno', 'ghi', 'jkl']


# in python,compute can be present inside the list. this is called list comprehension.
# for example:

squared_num = [x**2 for x in range(10)]
print(squared_num) # this gives the output [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]