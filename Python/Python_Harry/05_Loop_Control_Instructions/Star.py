n = int(input("Enter the number of rows:"))
for startloop_Iterator in range(1, n+1):
    for insideloop_Iterator in range(startloop_Iterator):
        print("*", end='')
    print()

