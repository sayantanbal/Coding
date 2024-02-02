import  time
H_timestamp = int(time.strftime('%H'))
M_timestamp = int(time.strftime('%M'))
S_timestamp = int(time.strftime('%S'))
if(H_timestamp>=4 and H_timestamp<12):
    print("Good Morning Sir!")
elif(H_timestamp>=12 and H_timestamp<17):
    print("Good Afternoon Sir!")
elif(H_timestamp>=17 and H_timestamp<21):
    print("Good Evening Sir!")
else:
    print("Good Night Sir")





