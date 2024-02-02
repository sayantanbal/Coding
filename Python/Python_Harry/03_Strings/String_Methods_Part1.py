a = "!!!!tuhin!!!!"
b = "!!!!GHOSH!!!!"
# Strings are immutable
print(a+b)
# Upper and Lower Case
print(a.upper())
print(b.lower())
# Cancel the characters
print(a.rstrip("!")) # Only trailing
# Replace anything inside the string
print(a.replace("tuhin", "Subham"))
print(a.replace("!", "*"))
print(a.split(" ")) # Convert to list
# Make the First Letter capital
blogHeading = "introduction tO programminG"
print(blogHeading.capitalize())
# Center Alignment
str1 = "Welcome to the terminal"
print(len(str1.center(50)))
print(len(str1))