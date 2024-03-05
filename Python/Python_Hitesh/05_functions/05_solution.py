def greet(name = "User"): # passing default value to name. If no value is passed, it will take default value
    return "Hello, " + name + " !"


print(greet("chai"))
print(greet())