int fanPin = 9; // select the input pin for the potentiometer

 
void setup() {
  Serial.begin(9600);
}

void loop(){
    
    for(int i = 0; i < 120; i++){
      analogWrite(fanPin, i);
      delay(3);
    }
    
    delay(50);
    
    for(int i = 120; i > 0; i--){
      analogWrite(fanPin, i);
      delay(3);
    }
    
    delay(50);
}
