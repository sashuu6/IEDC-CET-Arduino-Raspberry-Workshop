// Serial monitor

int varires = A0; //pin number of variable resistor
int value; // to store the value from the variable resistor

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600); // for serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
 value = analogRead(varires); // stores the value generated from variable resistor
 Serial.println(value); // prints the value to the monitor
}
