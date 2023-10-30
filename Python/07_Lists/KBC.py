# Create a program capable of displaying questions to the user like KBC. Use List data type to store the questions and their correct answers. Display the final amount the person is taking home after playing the game.
import random as rd
count = 0
question = 0
priceMoney = 0
userInput = ''
questionList = [
    'Which planet is known as the "Red Planet"? \n A) Venus \n B) Mars \n C) Jupiter \n D) Saturn',
    'Who wrote the famous play "Romeo and Juliet"?\n A) William Wordsworth\n B) William Faulkner\n C) William Shakespeare\n D) Jane Austen?',
    'What is the national flower of India? \n A) Tulip \n B) Rose \n C) Lotus \n D) Sunflower']


correctAnsList = ['B', 'C', 'C']


for question in range(3):
    print(questionList[question])
    userInput = input('Just Enter A/B/C')
    if(userInput == correctAnsList[question] ):
        print("Congratulations")
    else :
        print("Wrong")
    count += 1
    priceMoney += count * 200
    print("Your priceMoney is", priceMoney)