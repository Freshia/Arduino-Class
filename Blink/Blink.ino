int myLED = 13;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(myLED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(myLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(myLED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
};
