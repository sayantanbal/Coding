# import pywhatkit


# from datetime import datetime
# # # # # import random
# current_minute = datetime.now().minute

# for i in range (40):
#     pywhatkit.sendwhatmsg("+916290950386","Love you ❤️", 18,current_minute+1)


# # import pywhatkit
# # import itertools
# # import time
# # from datetime import datetime, timedelta

# # love_quotes = [
# #     "You are my sunshine ☀️, my only sunshine 🌞.",
# #     "I love you to the moon and back 🌙💫.",
# #     "Every love story is beautiful 💖, but ours is my favorite 💕.",
# #     "You have my whole heart 💗 for my whole life 💍.",
# #     "You are the peanut butter to my jelly 🥜🍇.",
# #     "I am yours ❤️, don't give myself back to me 💞.",
# #     "You make my heart skip a beat 💓 every time I see you.",
# #     "Together is a beautiful place to be 👫💑.",
# #     "Love is not about how many days, months, or years you have been together ❤️. Love is about how much you love each other every single day 🌹.",
# #     "You are my forever and always 🌟💖.",
# #     "If I had to choose between breathing and loving you, I would use my last breath to tell you I love you 💌.",
# #     "Your love is the best gift I’ve ever received 🎁💘.",
# #     "You are my today and all of my tomorrows 🗓️💞.",
# #     "My heart is perfect because you are inside 💖🌺.",
# #     "Love is not just looking at each other ❤️, it's looking in the same direction 👫.",
# #     "You are the reason I wake up with a smile 😊 every morning.",
# #     "In your arms, I am complete 💏.",
# #     "You are the love of my life 💕 and my best friend 👯.",
# #     "I choose you 💝, and I'll choose you again and again 💫.",
# #     "You complete me 🧩, now and forever 💍.",
# #     "When I am with you, I feel at home 🏡💖.",
# #     "You are my best friend 💕 and my soulmate 👫.",
# #     "You make every day a little brighter 🌟.",
# #     "My love for you is a journey 🌍, starting at forever and ending at never 🕊️.",
# # ]


# # # Create an iterator to cycle through quotes
# # quote_generator = itertools.cycle(love_quotes)

# # # Number of messages to send
# # num_messages = 40

# # # Get current time
# # now = datetime.now()

# # for i in range(num_messages):
# #     # Calculate the time to send the message
# #     send_time = now + timedelta(seconds=i)

# #     # Extract hours and minutes
# #     hours = send_time.hour
# #     minutes = send_time.minute

# #     # Get the next quote
# #     quote = next(quote_generator)
    
# #     # Send the message
# #     pywhatkit.sendwhatmsg("+918910392843", quote, hours, minutes+i+1)
    
# #     # Sleep for a short while to avoid rapid execution issues
# #     time.sleep(1)




import pyautogui
# import itertools
import time 


time.sleep(5)
for i in range(11):
    # quote = next(itertools.cycle(love_quotes))
    pyautogui.typewrite("Love you <3")
    pyautogui.press("enter")

# text = "Hello ❤️"
# emoji = "2764"  #Unicode for the red heart emoji

# pyautogui.hotkey('win', '.') #Shortcut enters unicode value
# pyautogui.typewrite(emoji) #Writes the emoji in unicode
# pyautogui.press('enter')



# Get the current minute

