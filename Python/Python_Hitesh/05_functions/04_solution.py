import math

def circle_stats(radius):
    area = math.pi * radius ** 2
    circumference = 2 * math.pi * radius
    return area, circumference # return multiple values.

a, c = circle_stats(3) # unpack the returned values. you can take multiple variables to unpack multiple values.

print("Area: ", a, "Circumference: ", c)