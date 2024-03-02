

# python can handel large numbers. it can handle the numbers of any length. specifically python3 has no limit for the length of the number. python2 had the limit of 32 bit. but python3 has no limit.


# difference between repr() and str() and print() function:

    # repr() provides a detailed and unambiguous representation of an object, often used for debugging and development.
    # str() provides a human-readable representation of an object.
    # print() is a built-in function for displaying text or object representations on the console. It implicitly uses str() on its arguments



# boolean in python is a subclass of integer. so it can be used as a number.

# x>y>z is valid in python. it is equivalent to x>y and y>z. but a > b < c is not valid. it is equivalent to a > b and b < c. so it is not valid. but a < b > c is valid. it is equivalent to a < b and b > c. so it is valid. but it is a good practice to use the brackets to avoid the confusion.


# find the output -> print(1==2<3)
# 1==2<3 is equivalent to 1==2 and 2<3. so it is equivalent to False and True. so it is equivalent to False. so the output is False.


# floor() function is used to find the floor value of a number. it is used to find the largest integer value which is less than or equal to the given.
# example:
# import math
# print(math.floor(2.3)) # 2
# print(math.floor(2.7)) # 2
# print(math.floor(-2.3)) # -3
# print(math.floor(-2.7)) # -3
# print(math.floor(2)) # 2
# print(math.floor(-2)) # -2

# ceil() function is used to find the ceil value of a number. it is used to find the smallest integer value which is greater than or equal to the given number.
# example:
# import math
# print(math.ceil(2.3)) # 3
# print(math.ceil(2.7)) # 3
# print(math.ceil(-2.3)) # -2
# print(math.ceil(-2.7)) # -2
# print(math.ceil(2)) # 2
# print(math.ceil(-2)) # -2


# round() function is used to round the number to the nearest integer. if the number is exactly in the middle of two integers, then it is rounded to the nearest even integer.
# example:
# import math
# print(round(2.3)) # 2
# print(round(2.7)) # 3
# print(round(-2.3)) # -2
# print(round(-2.7)) # -3
# print(round(2)) # 2
# print(round(-2)) # -2
# print(round(2.5)) # 3

# trunc() function is used to remove the decimal part of the number and return the integer part of the number. it takes you towards zero.
# example:
# import math
# print(math.trunc(2.3)) # 2
# print(math.trunc(2.7)) # 2
# print(math.trunc(-2.3)) # -2
# print(math.trunc(-2.7)) # -2
# print(math.trunc(2)) # 2
# print(math.trunc(-2)) # -2


# python can handel imaginary numbers. it uses j to represent the imaginary part of the number.
# example:
# a = 2 + 3j
# print(a) # (2+3j)
# print(a.real) # 2.0
# print(a.imag) # 3.0
# print(a.conjugate()) # (2-3j)



# python can handel binary hex octal etc numbers. it uses the following functions to convert the numbers to the respective number system.
# binary numbers are represented by 0b or 0B. octal numbers are represented by 0o or 0O. hexadecimal numbers are represented by 0x or 0X.
# example:
# print(0b1010) # 10
# print(0o12) # 10
# print(0xa) # 10

# bool() function is used to convert the number to the boolean number.
# bin() function is used to convert the number to the binary number.
# example:
# print(bin(10)) # 0b1010
# print(bin(0b1010)) # 10
# print(bin(0o12)) # 0b1010
# print(bin(0xa)) # 0b1010


# oct() function is used to convert the number to the octal number.
# example:
# print(oct(10)) # 0o12
# print(oct(0b1010)) # 0o12
# print(oct(0o12)) # 0o12
# print(oct(0xa)) # 0o12


# hex() function is used to convert the number to the hexadecimal number.
# example:
# print(hex(10)) # 0xa
# print(hex(0b1010)) # 0xa
# print(hex(0o12)) # 0xa
# print(hex(0xa)) # 0xa


# int() function is used to convert the number to the integer number.
# example:
# print(int(10)) # 10
# print(int(0b1010)) # 10
# print(int(0o12)) # 10
# print(int(0xa)) # 10

# int() function can also be used to convert the number to the respective number system.
# example:
# print(int('10', 2)) # 2
# print(int('64', 8)) # 52
# print(int('b', 16)) # 11


# float() function is used to convert the number to the float number.
# example:
# print(float(10)) # 10.0
# print(float(0b1010)) # 10.0
# print(float(0o12)) # 10.0
# print(float(0xa)) # 10.0


# bitwise operators:

    # & -> bitwise and
    # | -> bitwise or
    # ^ -> bitwise xor
    # ~ -> bitwise not
    # << -> bitwise left shift
    # >> -> bitwise right shift
    # example:
    # print(10 & 7) # 2
    # print(10 | 7) # 15
    # print(10 ^ 7) # 13
    # print(~10) # 5
    # print(10 << 2) # 40
    # print(10 >> 2) # 2



# random number functions:

    # random() function is used to generate a random number between 0 and 1.
    # example:
    # import random
    # print(random.random())

    # randint() function is used to generate a random number between the given range.
    # example:
    # import random
    # print(random.randint(1, 10)) # it will generate a random number between 1 and 10.

    # randrange() function is used to generate a random number between the given range with the given step.
    # example:
    # import random
    # print(random.randrange(1, 10, 2)) # it will generate a random number between 1 and 10 with the step of 2.

    # choice() function is used to generate a random number from the given list.
    # example:
    # import random
    # print(random.choice([1, 2, 3, 4, 5])) # it will generate a random number from the given list.

    # shuffle() function is used to shuffle the given list.
    # example:
    # import random
    # a = [1, 2, 3, 4, 5]
    # random.shuffle(a)

    # sample() function is used to generate a random number from the given list with the given length.
    # example:
    # import random
    # print(random.sample([1, 2, 3, 4, 5], 3)) # it will generate a random number from the given list with the length of 3.


# math functions:
    
    # math module is used to perform the mathematical operations.
    # example:
    # import math
    # print(math.sqrt(16)) # 4.0
    # print(math.pow(2, 3)) # 8.0
    # print(math.factorial(5)) # 120
    # print(math.log(10)) # 2.302585092994046
    # print(math.log10(10)) # 1.0 , it is equivalent to math.log(10, 10). we can give the base as the second argument. or define as math.logx(num). x is the base. num is the number.
    # print(math.log2(10)) # 3.321928094887362
    # print(math.exp(10)) # 22026.465794806718
    # print(math.sin(10)) # -0.5440211108893698
    # print(math.cos(10)) # -0.8390715290764524
    # print(math.tan(10)) # 0.6483608274590866


# complex numbers functions:
    # complex() function is used to create a complex number.
    # example:
    # a = complex(2, 3)
    # print(a) # (2+3j)

    # abs() function is used to find the absolute value of the complex number.
    # example:
    # a = complex(2, 3)
    # print(abs(a)) # 3.605551275463989

    # phase() function is used to find the phase of the complex number.
    # example:
    # a = complex(2, 3)
    # print(cmath.phase(a)) # 0.982793723247329

    # polar() function is used to find the polar form of the complex number.
    # example:
    # a = complex(2, 3)
    # print(cmath.polar(a)) # (3.605551275463989, 0.982793723247329)

    # rect() function is used to find the rectangular form of the complex number.
    # example:
    # a = cmath.rect(3.605551275463989, 0.982793723247329)
    # print(a) # (2+3j)


# math constants:
    # math module has some constants like pi, e, tau, inf, nan.
    # example:
    # import math
    # print(math.pi) # 3.141592653589793
    # print(math.e) # 2.718281828459045
    # print(math.tau) # 6.283185307179586
    # print(math.inf) # inf
    # print(math.nan) # nan


# a special thing to notice.
print(1.1 + 2.2 == 3.3) # False
# it is because of the floating point precision. so it is not exactly equal to 3.3. so it is False. so we can use the round() function to solve this problem.

print(round(1.1 + 2.2, 1) == 3.3) # True
# it is True because we are rounding the number to 1 decimal place. so it is True.

print(1.1 + 2.2) # 3.3000000000000003 etc etc.

#  we use decimal module to solve the floating point precision problem.
# example:

from decimal import Decimal
a = Decimal('1.1')
b = Decimal('2.2')
print(a + b) # 3.3
print(a + b == Decimal('3.3')) # True


# we can use the fractions module to solve the floating point precision problem.
# example:
from fractions import Fraction
a = Fraction(1, 10)
b = Fraction(2, 10)
print(a + b) # 3/10
print(a + b == Fraction(3, 10)) # True

# we can use the math.isclose() function to solve the floating point precision problem.
# example:
import math
a = 1.1
b = 2.2
print(math.isclose(a + b, 3.3)) # True
# we can use the numpy module to solve the floating point precision problem.


# we can use the complex number to solve the floating point precision problem.
# example:
a = 1.1 + 2.2
b = 3.3
print(a == b, a , b) # False 3.3000000000000003 3.3.


# set1 = {1, 2, 3, 4, 5}
# set2 = {4, 5, 6, 7, 8}
# print(set1 - set2) # {1, 2, 3}
# print(set1 | set2) # {1, 2, 3, 4, 5, 6, 7, 8}
# print(set1 & set2) # {4, 5}
# print(set1 ^ set2) # {1, 2, 3, 6, 7, 8}
# print(set1 <= set2) # False
# print(set1 >= set2) # False
# print(set1 < set2) # False
# print(set1 > set2) # False
# print(set1 == set2) # False
# print(set1 != set2) # True
# print(set1.isdisjoint(set2)) # False

# if a set is substracted from another set, then the elements of the first set which are not in the second set are returned. if the values are same in both the sets, then the empty set is returned. 
# example:
# set1 = {1, 2, 3, 4, 5}
# set2 = {1, 2, 3, 4, 5}
# print(set1 - set2) # set() , empty set

# even though True is 1 and False is 0, they are not equal to 1 and 0. if you check using "is" you can see that they are not equal to 1 and 0. but as they are numerically equal to 1 and 0, they can be used as numbers.