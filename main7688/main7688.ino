// DHT
#include "DHT.h"
#define DHTPIN A0

dht DHT;
  
int delayTime = 1000;
  
void setup(){   
  Serial.begin(9600);
  delay(300);  
  Serial.print("GO!!!");
}

void DHTfunc(){
  DHT.read11(dht_dpin);   //去library裡面找DHT.read11  
  Serial.print("Humidity = ");   
  Serial.print(DHT.humidity);   
  Serial.print("% ");   
  Serial.print("temperature = ");   
  Serial.print(DHT.temperature);   
  Serial.println("C ");   
}

void loop(){   
  DHTfunc(); 
  Serial.print("hi");
  delay(delayTime);
}  
