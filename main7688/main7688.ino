
#include <dht.h>   
  
#define dht_dpin A0 //定義訊號要從Pin A0 進來  
  
dht DHT;
int PowerPin = 13;

int delayTime = 1000;
  
void setup(){   
  Serial.begin(9600);   
  pinMode(PowerPin,HIGH);
  Serial.print("GO!!!");
}

//bool DHTfunc(){
//  DHT.read11(dht_dpin);   //去library裡面找DHT.read11  
//  Serial.print("Humidity = ");   
//  Serial.print(DHT.humidity);   
//  Serial.print("% ");   
//  Serial.print("temperature = ");   
//  Serial.print(DHT.temperature);   
//  Serial.println("C "); 
//  return 1;  
//}

void loop(){   
  //if (!DHTfunc())Serial.print("DHT fails!!"); 
  Serial.print("hi");
  delay(delayTime);
}  
