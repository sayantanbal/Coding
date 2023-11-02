
# set datatype is defined by {}
# They are unordered so {2, 4, 2, 6, 3, 2} doesn't mean you will get {2,4,6,3} you may get {2, 3, 4, 6}. as they occur at random indexes u can't access any particular element using index
s = {2, 4, 2, 6, 3, 2}
print(s)

info = {"Carla", 19, False, 5.9, 19}
print(info)


# abc = {} its a empty dict. not a empty set.
harry = set() # this is how empty set is declared.
print(type(harry))

for value in info:
  print(value)