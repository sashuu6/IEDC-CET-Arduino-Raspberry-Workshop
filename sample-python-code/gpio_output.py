import RPi.GPIO as GPIO  #import library 
GPIO.setmode(GPIO.BCM) #setting pinmode
GPIO.setup(4, GPIO.OUT) #setting up pin
GPIO.output(4, GPIO.HIGH) #output