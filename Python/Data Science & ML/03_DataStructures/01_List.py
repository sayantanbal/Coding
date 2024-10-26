list1  = [1, 2, 3, 4, 5]
list2 = ['a', 'b', 'c', 'd', 'e']
list3 = [1.1, 2.2, 3.3, 4.4, 5.5]
list4 = ['a', 1, 2.2, 'b', 3.3]
list5 = [1, 2, 'a', 'b', 3.3]
list6 = [1, 2, 3, 4, 5, True, False, 'a', 'b', 'c', 'd', 'e', 1.1, 2.2, 3.3, 4.4, 5.5, 1, 2.2, 'b', 3.3, 1, 2, 'a', 'b', 3.3]


# a list can contain any type of data. list in python is a collection of items. but not necessarily of the same type!

# list in python is mutable. i.e. you can change the elements of the list. it is ordered and changeable. allows duplicate members.
# example:
list1[0] = 10
print(list1)

# list can be created using square brackets [] or list() function.

# we can slice the list using the index. list[start:stop:step]
# example:
print(list1[1:4]) # o/p: [2, 3, 4]
print(list1[1:4:2]) # o/p: [2, 4]

# similarly we can rev the list using slicing.
print(list1[::-1]) # o/p: [5, 4, 3, 2, 10]

# we can add elements to the list using append() method.
list1.append(6)
print(list1) # o/p: [10, 2, 3, 4, 5, 6]

# we can add elements to the list using insert() method.
list1.insert(1, 1)
print(list1) # o/p: [10, 1, 2, 3, 4, 5, 6]

# difference between append() and insert() is that append() adds the element at the end of the list and insert() adds the element at the specified index.

# remove the element from the list using remove() method.
list1.remove(1)
print(list1) # o/p: [10, 2, 3, 4, 5, 6]

# remove the element from the list using pop() method.
list1.pop()
print(list1) # o/p: [10, 2, 3, 4, 5]

# difference between remove() and pop() is that remove() removes the element by value and pop() removes the element by index.

# iterate through the list using for loop.
for i in list1:
    print(i)
# other ways to iterate through the list are using while loop and list comprehension.

# list comprehension:
# list comprehension is a concise way to create lists. it is more readable and faster.
# example:
list7 = [i for i in range(10)]
print(list7) # o/p: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

# list comprehension with if condition:
list8 = [i for i in range(10) if i % 2 == 0]
print(list8) # o/p: [0, 2, 4, 6, 8]

# list comprehension with if else condition:
list9 = [i if i % 2 == 0 else 'odd' for i in range(10)]
print(list9) # o/p: [0, 'odd', 2, 'odd', 4, 'odd', 6, 'odd', 8, 'odd']

# list comprehension with nested loops:
list10 = [(i, j) for i in range(3) for j in range(3)]
print(list10) # o/p: [(0, 0), (0, 1), (0, 2), (1, 0), (1, 1), (1, 2), (2, 0), (2, 1), (2, 2)]

# list comprehension with nested loops and if condition:
list11 = [(i, j) for i in range(3) for j in range(3) if i == j]
print(list11) # o/p: [(0, 0), (1, 1), (2, 2)]

# list comprehension with nested loops and if else condition:
list12 = [i if i % 2 == 0 else 'odd' for i in range(10) if i % 3 == 0]
print(list12) # o/p: [0, 'odd', 6, 'odd']

# how to iterate through the list using list comprehension:
[print(i) for i in list1]


list13 = [1, 2, 3, 4, 5]
# reverse a list using list comprehension:
[print(i) for i in range(len(list13)-1, -1, -1)]
[print(i) for i in (list13[::-1])]


# list methods:
list1 = [10, 2, 3, 4, 5]
    # append() - adds an element at the end of the list. example: list1.append(6) o/p -> [10, 2, 3, 4, 5, 6]
    # clear() - removes all the elements from the list. list will be empty. example: list1.clear() o/p -> []
    # copy() - returns a copy of the list. example: list2 = list1.copy() o/p -> list2 = [10, 2, 3, 4, 5]
    # count() - returns the number of elements with the specified value. example: list1.count(2) o/p -> 1
    # extend() - add the elements of a list to the end of the current list. example: list1.extend(list2) o/p -> [10, 2, 3, 4, 5, 'a', 'b', 'c', 'd', 'e']
    # index() - returns the index of the first element with the specified value. example: list1.index(2) o/p -> 1
    # insert() - adds an element at the specified position. example: list1.insert(1, 1) o/p -> [10, 1, 2, 3, 4, 5]
    # pop() - removes the element at the specified position. example: list1.pop() o/p -> [10, 2, 3, 4, 5]
    # remove() - removes the first item with the specified value. example: list1.remove(2) o/p -> [10, 3, 4, 5]
    # reverse() - reverses the order of the list. example: list1.reverse() o/p -> [5, 4, 3, 2, 10] you can also use slicing to reverse the list. example: list1[::-1]
    # sort() - sorts the list. example: list1.sort() o/p -> [2, 3, 4, 5, 10] you can also use sorted() function to sort the list. example: sorted(list1)
    # len() - returns the length of the list. example: len(list1) o/p -> 5
    # max() - returns the maximum value in the list. example: max(list1) o/p -> 10
    # min() - returns the minimum value in the list. example: min(list1) o/p -> 2
    # sum() - returns the sum of all the elements in the list. example: sum(list1) o/p -> 24
    # all() - returns True if all items in the list are True. example: all(list1) o/p -> True
    # any() - returns True if any item in the list is True. example: any(list1) o/p -> True
    # enumerate() - returns an enumerate object. example: enumerate(list1) o/p -> <enumerate object at 0x000001E1D3D3D8C0>
    # filter() - returns an iterator where the items are filtered through a function to test if the item is accepted or not. example: filter(lambda x: x < 5, list1) o/p -> <filter object at 0x000001E1D3D3D8C0>
    # map() - returns an iterator that applies a function to every item of the iterable. example: map(lambda x: x + 1, list1) o/p -> <map object at 0x000001E1D3D3D8C0>
    # reduce() - applies a function of two arguments cumulatively to the items of an iterable, optionally starting with an initial argument. example: reduce(lambda x, y: x + y, list1) o/p -> 24
    # zip() - returns an iterator, from two or more iterators. example: zip(list1, list2) o/p -> <zip object at 0x000001E1D3D3D8C0>
