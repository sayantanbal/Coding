# Write a python program to translate a message into secret code language. Use the rules below to translate normal English into secret code language

# Coding:
# if the word contains atleast 3 characters, remove the first letter and append it at the end
#   now append three random characters at the starting and the end
# else:
#   simply reverse the string

# Decoding:
# if the word contains less than 3 characters, reverse it
# else:
#   remove 3 random characters from start and end. Now remove the last letter and append it to the beginning

# Your program should ask whether you want to code or decode
import random as rd
def randomCharGenerator( num ) :
    min = 33
    max = 126
    str = ""
    for i in range (num) :
        randomNum = rd.randint(33,126)
        newChar = chr(randomNum)
        str += newChar
        print(str)
    return str


userInput = input("Enter your Message.")

if (len(userInput) >= 3) :
    firstChar_userInput = userInput[0]

    userInput = userInput[1:]
    print(userInput, firstChar_userInput)

    newSecretStr = randomCharGenerator(3) + userInput + firstChar_userInput + randomCharGenerator(3)
    print(newSecretStr)



else :
    revStr = userInput[::-1]
    print(revStr)