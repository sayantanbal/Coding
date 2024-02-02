num = int(input())
if(num<0):
    print("Number is negative!")
elif(num>0):
    if(num<=10):
        print("Number is in between 1-10!")
    elif(num>10 and num<=20):
        print("Number is in between 11-20")
    # elif(num>10 and num<=20):
    #     print("Number is in between 11-20") #once condition matched other conditions are overlooked even though there are same conditions
    else:
        print("Number is greater than 20")
else:
    print("Number is 0")