year = int(input("Enter the year you want to check:"))
if(year%100==0):
    if(year%400==0):
        print("This is Leap year!")
    else:
        print("This is not Leap year!")
elif(year%4==0):
    print("This is Leap year!")
else:
    print("This is not Leap year!")