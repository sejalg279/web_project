import datetime
import os
import smtplib
import speech_recognition as sr
import pyttsx3
import wikipedia
import webbrowser


engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
print(voices[0].id)
# 0 for Male voice ,  1 for female voice
engine.setProperty('Voices', voices[0].id)


def speak(audio):
    engine.say(audio)
    engine.runAndWait()


def wishMe():
    hour = int(datetime.datetime.now().hour)
    # hour= 0 t0 24
    if hour >= 0 and hour < 12:
        speak('Good Morning!')
    elif (hour >= 12 and hour < 18):
        speak('Good Afternoon!')
    else:
        speak('Good Evening!')
    speak('I am JARVIS. Please tell me how may I help you')


def takeCommand():
    """ it takes microphone input from the user and returns
        string output"""
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print('Listening...')
        r.pause_threshold = 1
        # take gap of 1 sec
        audio = r.listen(source)
    try:
        print('Recognizing...')
        query = r.recognize_google(audio, language='en-in')
        # indian english language
        print(f"User said: {query}\n")

    except Exception as e:
        # if voice is not recognised by Jarvis
        print("Say that again please...")
        return "None"
    return query


def sendEmail(to, content):
    server = smtplib.SMTP('smtp.gmail.com', 587)
    server.ehlo()
    server.starttls()
    server.login('sejalg279@gmail.com', 'Sejal@123')
    server.sendmail('sejalg279@gmail.com', to, content)
    server.close()


if __name__ == '__main__':
    wishMe()
    while True:
        query = takeCommand().lower()

        # by increasing Energy threshold other unnecessary voice ignored

        if 'wikipedia' in query:
            speak('Searching Wikipedia...')
            query = query.replace('wikipedia', '')
            results = wikipedia.summary(query, sentences=2)
            # gives 2 sentenses from wikipedia
            speak('According to wikipedia')
            print(results)
            speak(results)

        # open YOUTUBE
        elif 'open youtube' in query:
            webbrowser.open('youtube.com')

        # open GOOGLE
        elif 'open google' in query:
            webbrowser.open('google.com')

        # open STACKFLOW
        elif 'open stackoverflow' in query:
            webbrowser.open('stackoverflow.com')

        # PLAY MUSIC
        elif 'play music' in query:
            music_dir = 'E:\music'
            songs = os.listdir(music_dir)
            print(songs)
            os.startfile(os.path.join(music_dir, songs[0]))

        # GIVE CURRENT TIME
        elif 'the time' in query:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")
            speak(f"Mam, The time is{strTime}")

        # OPEN VS CODE
        elif 'open code' in query:
            codepath = "C:\\Users\\91758\AppData\Local\Programs\Microsoft VS Code\Code.exe"
            os.startfile(codepath)

        # SEND E-MAIL
        elif 'email to sejal' in query:
            try:
                speak('What should i say?')
                content = takeCommand()
                to = 'sejalg279@gmail.com'
                sendEmail(to, content)
                speak('Email has been send')
            except Exception as e:
                print(e)
                print('Sorry i am not able to send this mail')
        elif 'quit' in query:
            exit()


