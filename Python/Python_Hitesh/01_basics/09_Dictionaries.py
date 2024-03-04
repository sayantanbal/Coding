
# dictionaries in python are key-value pairs. lists are also key-value pairs but the keys are always integers/index.
# dictionaries are mutable
# dictionaries are unordered
# dictionaries are un indexed
# dictionaries are written in curly brackets

# creating a dictionary
my_dict = {
    "name": "Sayantan",
    "age": 30,
    "city": "New York"
}
# how to access the values in a dictionary
# two ways to access the values in a dictionary
# 1. using square brackets. This method will throw an error if the key is not found
print(my_dict["name"])
# 2. using get method. This method will return None if the key is not found
print(my_dict.get("age"))

# how to change the values in a dictionary
my_dict["name"] = "Jane"
print(my_dict)


# looping through a dictionary
# 1. loop through the keys
for x in my_dict:
    print(x)
# 2. loop through the values
for x in my_dict:
    print(my_dict[x])
# 3. loop through the keys and values. it uses the items () method
for x, y in my_dict.items():
    print(x, y)


# how to check if a key exists in a dictionary
if "name" in my_dict:
    print("Yes, name is one of the keys in the dictionary")

# how to check the length of a dictionary
print(len(my_dict))

# how to pop a value from a dictionary
my_dict.pop("age")
print(my_dict)

# there is something called the popitem() method. This method removes the last inserted item.

# how to clear a dictionary
my_dict.clear()
print(my_dict)

# del keyword can also be used to delete a dictionary or its items. this removes the dictionary completely from memory.
del my_dict
# print(my_dict)  # this will throw an error because the dictionary has been deleted.

# how to copy a dictionary
# 1. using the copy() method
my_dict = {
    "name": "Sayantan",
    "age": 30,
    "city": "New York"
}
my_dict2 = my_dict.copy()
print(my_dict2)
# 2. using the dict() method
my_dict3 = dict(my_dict)
print(my_dict3)

# how to merge two dictionaries
# 1. using the update() method
my_dict4 = {
    "name": "Jane",
    "age": 25,
    "city": "Los Angeles"
}
my_dict.update(my_dict4)
print(my_dict)
# 2. using the ** operator
my_dict5 = {
    "name": "John",
    "age": 35,
    "city": "Chicago"
}
my_dict6 = {**my_dict, **my_dict5}
print(my_dict6)
# 3. using the | operator
my_dict7 = my_dict | my_dict5
print(my_dict7)
# 4. using the update() method
my_dict8 = my_dict.copy()
my_dict8.update(my_dict5)
print(my_dict8)

# how to create a dictionary using the dict() constructor
my_dict9 = dict(name="John", age=35, city="Chicago")
print(my_dict9)
# this is the same as
my_dict10 = {
    "name": "John",
    "age": 35,
    "city": "Chicago"
}
print(my_dict10)

# how to create a dictionary with a default value
# 1. using the setdefault() method
my_dict11 = dict(name="John", age=35, city="Chicago")
my_dict11.setdefault("country", "USA")
print(my_dict11)
# 2. using the defaultdict() method
from collections import defaultdict
my_dict12 = defaultdict(lambda: "USA")
my_dict12["name"] = "John"
my_dict12["age"] = 35
my_dict12["city"] = "Chicago"
print(my_dict12)
# 3. using the fromkeys() method
my_dict13 = dict.fromkeys(my_dict12, "USA")
print(my_dict13)


# how to create a nested dictionary
my_dict14 = {
    "dict1": {
        "name": "John",
        "age": 35,
        "city": "Chicago"
    },
    "dict2": {
        "name": "Jane",
        "age": 25,
        "city": "Los Angeles"
    }
}
print(my_dict14)
# how to access the values in a nested dictionary
print(my_dict14["dict1"]["name"])
print(my_dict14["dict2"]["age"])



# how to create a dictionary with a square of numbers

my_dict15 = {}
for i in range(1, 11):
    my_dict15[i] = i * i
print(my_dict15)

# how to create a dictionary with a square of numbers using dictionary comprehension
my_dict16 = {i: i * i for i in range(1, 11)}

print(my_dict16)

# how to create a dictionary using two lists
keys = ["name", "age", "city"]
values = ["John", 35, "Chicago"]
my_dict17 = dict(zip(keys, values))
print(my_dict17)

# how to create a dictionary using two lists using dictionary comprehension
keys = ["name", "age", "city"]
values = ["John", 35, "Chicago"]
my_dict18 = {keys[i]: values[i] for i in range(len(keys))}
print(my_dict18)

# how to create a dictionary using two lists using dict.fromkeys() method
keys = ["name", "age", "city"]
values = ["John", 35, "Chicago"]
my_dict19 = dict.fromkeys(keys, values)
print(my_dict19)
