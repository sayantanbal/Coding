
a = "Tuhin, subham, Tuhin, Anushka, Tuhin"
print(a.count(("Tuhin")))

b = "Welcome to the terminal!!!"
print(b.endswith("!!!"))
c = "Welcome to the terminal!!!"
print(c.endswith("to", 4, 10))

# Find the first occurrence index using find()
# when it is false it will return -1!
str1 = "He's name is Dan. He is an honest man."
print(str1.find("is"))

# when it is false it will throw an error!
print(str1.index("is"))

str2 = "WelcomeToTerminal"
print(str2.isalnum())

str3 = "Welcome00"
print(str3.isalpha())

str = "tuhin"
print(str.islower())

str = "Happy Birthday\n"
print(str.isprintable())