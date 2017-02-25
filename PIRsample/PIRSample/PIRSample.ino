const int PIRSensor = 2;
const int ledPin = 13;

int sensorValue = 0;

void setup(){
  pinMode(PIRSensor,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  sensorValue = digitalRead(PIRSensor);
  Serial.print(sensorValue);
  Serial.print("\n");
  if (sensorValue == HIGH) {    
    digitalWrite(ledPin, HIGH);
    Serial.print("yes\n");
  }

  else {
    digitalWrite(ledPin, LOW);
  }

}

