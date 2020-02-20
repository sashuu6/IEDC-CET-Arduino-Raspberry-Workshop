// Blinking 2 LEDs alternatively

int LED1 = 9; // led 1 pin number
int LED2 = 10; // led 2 pin number

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED(s) as an output.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED1, HIGH);   // turn the LED1 on (HIGH is the voltage level)
  digitalWrite(LED2, LOW);    // turn the LED2 off by making the voltage LOW 
  delay(1000);                // wait for a second
  digitalWrite(LED1, LOW);    // turn the LED1 off by making the voltage LOW
  digitalWrite(LED2, HIGH);   // turn the LED2 on (HIGH is the voltage level)
  delay(1000);                // wait for a second
}
