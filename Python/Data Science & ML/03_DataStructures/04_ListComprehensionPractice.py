# Write a program to print Prime numbers in a given range.
# def prime_numbers(n):
#     prime_numbers = [ i for i in range(2,n+1) if all(i%j != 0 for j in range(2,i)) ]
#     print(prime_numbers)

# if __name__ == '__main__':
#     n = int(input('Enter a number: '))
#     print(f'Prime numbers upto {n} are:{prime_numbers(n)}')

# find first 10 even numbers
# even_numbers = [i for i in range(1,21) if i%2 ==0]
# print(even_numbers)


# make multi-dimensional list using list comprehension
# multiDimList = [ [i*j for j in range(3)] for i in range(3)]
# print(multiDimList) # first part creates the rows and the second part creates the columns.

# make a 2-D list using list comprehension 
# [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
# for this the common formula is {row+column = element number}

list2D = [ [i+j for j in range(3)] for i in range(1,8,3)]
print(list2D)

# make the above list using nested for loop
list2D = []
for i in range(1,8,3):
    row = []
    for j in range(3):
        row.append(i+j)
    list2D.append(row)

# make this list --> [[2,4,6], [8,10,12], [14,16,18]]

list2D = [ [2*(row+col) for col in range(3)] for row in range(1,8,3)]
print(list2D)