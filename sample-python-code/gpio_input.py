import RPi.GPIO as GPIO  #import library 
GPIO.setmode(GPIO.BCM) #setting pinmode
GPIO.setup(4, GPIO.IN) #setting up 
a = GPIO.input(4) 
print(a)