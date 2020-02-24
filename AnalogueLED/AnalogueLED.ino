int myLED = 3;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(myLED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
//  analogWrite(myLED, 10); 
//  delay(1000);                    
//  analogWrite(myLED, 30);    
//  delay(1000);    
//  analogWrite(myLED, 70);    
//  delay(1000);
//  analogWrite(myLED, 100);
//  delay(1000);

  //Doing it in loop
  int i = 0;
  for(int i = 0; i<=255;i+=20){
    analogWrite(myLED, i); 
    delay(1000);
  }
};
