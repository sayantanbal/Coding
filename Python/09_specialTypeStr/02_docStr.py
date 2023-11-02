def square(n):
  '''Takes in a number n, returns the square of n'''
  print(n**2)
square(5)
print(square.__doc__) # docStr must be written right under the func def line. else it takes it as a comment. and o/p becomes "none"