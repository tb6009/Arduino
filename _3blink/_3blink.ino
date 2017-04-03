
int pin1 = 5;
int pin2 = 6;
int pin3 = 9;

int Time = 1000;

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(pin1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(Time);              // wait for a second
  digitalWrite(pin1, LOW);    // turn the LED off by making the voltage LOW
  delay(Time);              // wait for a second

  digitalWrite(pin2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(Time);              // wait for a second
  digitalWrite(pin2, LOW);    // turn the LED off by making the voltage LOW
  delay(Time); 

  digitalWrite(pin3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(Time);              // wait for a second
  digitalWrite(pin3, LOW);    // turn the LED off by making the voltage LOW
  delay(Time); 
}
