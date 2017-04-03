
int sensorPin00 = A0;   
int sensorPin01 = A1;
int sensorPin02 = A2;
int sensorPin03 = A3;

 
int ledPin = 13;      
int sensorValue00 = 0; 
int sensorValue01 = 0; 
int sensorValue02 = 0; 
int sensorValue03 = 0;  

void setup() {

  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  sensorValue00 = analogRead(sensorPin00);
  sensorValue01 = analogRead(sensorPin01);
  sensorValue02 = analogRead(sensorPin02);
  sensorValue03 = analogRead(sensorPin03);

  Serial.print(sensorValue00);
  Serial.print("\t");
  Serial.print(sensorValue01);
  Serial.print("\t");
  Serial.print(sensorValue02);
  Serial.print("\t");
  Serial.print(sensorValue03);
  Serial.println("\t");

delay(3000);
}

