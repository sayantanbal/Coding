# print a table

# a = int(input("Enter a number: "))
# for i in range(1, 11):
#     print(f'{a} x {i} = {a * i}')

# you can jump a specific number of steps in the range function
# for i in range(1, 11, 2): # 1st arg is starting point, 2nd arg is upto which number(it is excluded) & 3rd argument is the step
    # print(i)

# output: 1, 3, 5, 7, 9

# table using steps in range function
# a = int(input("Enter a number: "))
# for i in range(a, a*10+1, a):
#     print(i)

# o/p i,j when the sum = 5.

# for i in range(1, 7):
#     for j in range(1, 7):
#         if i + j == 5:
#             print(f'{i}, {j}')


# input number of dices and roll them then print the probability of the outcomes.

dice_number = int(input("Enter the number of dices: "))

# total number of outcomes
total_outcomes = 6 * dice_number

for i in range(1, total_outcomes + 1):
    flag = 0
    for j in range(1, 7):
        for k in range(1, 7):
            if j+k == i:
                flag += 1
    print(f'Probability of {i} is {round(flag*100/total_outcomes,4)}%')