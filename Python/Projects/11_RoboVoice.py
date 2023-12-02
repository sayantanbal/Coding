import os
import win32com.client as wincl
def TextToSpeech(userVoice):
    speak = wincl.Dispatch("SAPI.SpVoice")
    speak.Speak(f"{userVoice}")
    print("Enter 'q' to quit the program.")


if __name__ == "__main__":
    userVoice = input("Enter the text you want to convert to speech: ")
    while True:
        if userVoice == "q":
            os.system("byeee")
            break
        elif userVoice == "":
            print("Please enter a valid text.")
        else:
            TextToSpeech(userVoice)
            break