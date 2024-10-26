# Finding maximum value in a 2 D list.
# define a matrix and find the maximum value, sum,max, min, duplicate --> diagonal,column-wise,row-wise in the matrix.


matrix = [[1, 2, 3], [4, 6], [7, 8, 9]]
print(matrix)

def max_value(matrix):
    max_values_each_row = []
    for row in matrix:
        max_values_each_row.append(max(row))
    print(max(max_values_each_row))

def min_value(matrix):
    min_values_each_row = []
    for row in matrix:
        min_values_each_row.append(min(row))
    print(min(min_values_each_row))

def sum_value(matrix):
    sum_values_each_row = []
    for row in matrix:
        sum_values_each_row.append(sum(row))
    print(sum(sum_values_each_row))

def sum_value_row(matrix):
    sum_values_each_row = []
    i = 1
    for row in matrix:
        print(f"{i}-->row sum is = {sum(row)}")
        i+=1

def sum_value_column(matrix):
    # Edge case: empty matrix
    if not matrix:
        return []
    # Determine the number of columns by finding the longest row
    max_columns = max(len(row) for row in matrix)
    # Initialize a list to hold the column sums
    column_sums = [0] * max_columns
    # Iterate over each row in the matrix
    for row in matrix:
        # Add values column-wise, handling missing elements as 0
        for i in range(len(row)):
            column_sums[i] += row[i]
    print(column_sums)

def duplicate(matrix):
    duplicate_values = []
    for row in matrix:
        for value in row:
            if row.count(value) > 1:
                duplicate_values.append(value)
    print(duplicate_values)


def sum_value_diagonal(matrix):
    sum_diagonal = 0
    for i in range(len(matrix)):
        sum_diagonal += matrix[i][i]
    print(sum_diagonal)


def max_value_diagonal(matrix):
    max_diagonal = 0
    for i in range(len(matrix)):
        max_diagonal = max(max_diagonal, matrix[i][i])
    print(max_diagonal)

# max_value(matrix)
# min_value(matrix)
# sum_value(matrix)
# duplicate(matrix)
# sum_value_row(matrix)
sum_value_column(matrix)