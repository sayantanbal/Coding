import time

# timeStamp = time.strftime('%H:%M:%S')
# print(type(timeStamp))

hour = int(time.strftime('%H'))
print(hour)
print(type (hour))

if (hour >= 4 and hour  < 9) :
    print("Good Morning Sir")
elif (hour >= 9 and hour  < 15) :
    print("Good Noon Sir")
elif (hour >= 15 and hour  < 19) :
    print("Good AfterNoon Sir")
else:
    print("Good Night")