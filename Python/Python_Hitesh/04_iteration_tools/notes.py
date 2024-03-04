
# there are many tools to iterate over a sequence

# example :
# 1. for loop
# 2. comprehensions
# 3. map

# iterables are objects that can return one of their elements at a time, such as a list, file, string, etc.


# working ->
# 1. iteration tool sends an iter() function to the iterable object.
# 2. iterator object returns an method that defines the __next__() method, which accesses elements in the container one at a time.


# say we have a list, a = [1, 2, 3, 4]
# how the boundaries are maintained?
# how the 1st element is accessed, then the 2nd, then the 3rd, and so on?


# iterable objects always point to the first element of the container, not the whole container.
# they maintain a count of the elements that have been accessed so far.
# they raise a StopIteration exception when there are no more elements to return.