// Ultrasonic sensor

int trig = 8; // trigger pin number of ultrasonic sensor in arduino 
int echo = 9; // echo pin number of ultrasonic sensor in arduino
long duration; // duration calculated from ultrasonic sensor
float distance; // distance calculated from duration

void setup() {
  // put your setup code here, to run once:
 pinMode(echo, INPUT);
 pinMode(trig, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // next 5 statements will create a digital wave
 digitalWrite(trig, HIGH);
 delayMicroseconds(2);
 digitalWrite(trig, LOW);
 delayMicroseconds(10);
 duration = pulseIn(echo,HIGH);
 
 distance = (duration*0.034)/2; // distance = speed *time 
 
 Serial.print("Distance : ");
 Serial.println(distance);
}
