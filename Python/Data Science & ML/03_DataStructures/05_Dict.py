# the key vale pair can be of any type!
# key can be of any immutable type
# value can be of any type
# key value pair is separated by a colon
# key value pairs are separated by a comma
# keys are unique
# keys are case sensitive
# values can be duplicated
dict1 = {
    1: 'one',
    2: 'two',
    3: 'three',
    # 1: 'four' # this will not give you an error; it will overwrite the previous value
}
print(dict1)

print(dict1[1]) # this will give you the value of the key 1
# you can also use the get method to get the value of the key
print(dict1.get(1))
dict2 = {
    'one': 1,
    'two': 2,
    'three': 3
}
print(dict2)

print(dict2['one']) # this will give you the value of the key 'one'
print('*'*20, end='\n\n')

# adding & updating key-value pairs in a dictionary
# dict1[4] = 'four' # this will add a new key-value pair to the dictionary
# print(dict1)
# dict1[4] = 'five' # this will update the value of the key 4
# print(dict1)
# del dict1[4] # this will delete the key-value pair of the key 4
# if the key is deleted, the value will also be deleted 


# clear the dictionary
# dict1.clear()
# print(dict1)

# delete the dictionary
# del dict1
# print(dict1) # this will give you an error because the dictionary has been deleted

# iterating through a dictionary
# as it is a key-value pair, you can use the items method to get the key-value pair
# .items() returns a list of tuples
for key, value in dict1.items():
    print(key, value)
print('*'*20, end='\n\n')

# you can also use the keys,values method to get the keys,values, just remember .keys() and .values() returns a list!
for key in dict1.keys():
    print(key, dict1[key])

# check if a key exists in a dictionary, this only checks for the key, not the value
print(1 in dict1)
print('one' in dict1)


# dictionary comprehension
# you can use dictionary comprehension to create a dictionary
# syntax: {key: value for key, value in iterable}   
# iterable can be a list, tuple, set, etc
# you can also use conditions in dictionary comprehension
# syntax: {key: value for key, value in iterable if condition}
dict3 = {i: i**2 for i in range(10)}
print(dict3)
dict4 = {i: i**2 for i in range(10) if i%2 == 0}
print(dict4)
print('*'*20, end='\n\n')


dict3 = {i: i**2 for i in range(10)}
# update a dictionary
# you can use the update method to update a dictionary
# syntax: dict1.update(dict2)
dict2.update(dict3)
print(dict2) # this will update dict1 with the key-value pairs of dict2


# Dictionary methods
# dict.clear() - Remove all the elements from the dictionary

# dict.copy() - Returns a copy of the dictionary

# dict.get(key, default = “None”) - Returns the value of specified key

# dict.items() - Returns a list containing a tuple for each key value pair

# dict.keys() - Returns a list containing dictionary’s keys

# dict.update(dict2) - Updates dictionary with specified key-value pairs

# dict.values() - Returns a list of all the values of dictionary

# pop() - Remove the element with specified key

# popItem() - Removes the last inserted key-value pair

# dict.setdefault(key,default= “None”) - set the key to the default value if the key is not specified in the dictionary

# dict.has_key(key) - returns true if the dictionary contains the specified key.

# dict.get(key, default = “None”) - used to get the value specified for the passed key. If the key is not found, it returns the default value None.