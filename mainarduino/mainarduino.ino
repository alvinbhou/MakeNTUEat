#include <LiquidCrystal.h>//使用LiquidCrystal Library 
#include <dht.h>                 //使用DHT11 Library
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  //初始設定LCD顯示器的介面   
#define dht_dpin 7 //定義訊號要從Pin 12 進來  

dht DHT;
  
int delayTime = 1000;
  
void setup(){   
  Serial.begin(9600);
  lcd.begin(16, 2);  // 設定LCD有2列16欄 
  delay(300);
  analogWrite(A0,50);
  Serial.println("GO!!!");
  //lcd.println("test");
}

void DHTfunc(){
  DHT.read11(dht_dpin);   //去library裡面找DHT.read11  
  int h = DHT.humidity;
  int t = DHT.temperature;
  Serial.print("Humidity = ");   
  Serial.print(h);   
  Serial.print("% ");   
  Serial.print("temperature = ");   
  Serial.print(t);   
  Serial.println("C ");
  lcd.setCursor(0, 0); //將游標設定在第一行第一個位置(column 0, line 1)  
     lcd.print("Humidity:");       
     lcd.print(h, 1);       
     lcd.print("%");       
     lcd.setCursor(0, 1);       
     lcd.print("Tempure:");       
     lcd.print(t, 1);       
     lcd.print("oC");     // 無法顯示度，只好用小寫的O表示  
}

//void lcdfunc(){
//  lcd.setCursor(0, 0); //將游標設定在第一行第一個位置(column 0, line 1)  
//     lcd.print("Humidity:");       
//     lcd.print((float)DHT.humidity, 1);       
//     lcd.print("%");       
//     lcd.setCursor(0, 1);       
//     lcd.print("Tempure:");       
//     lcd.print((float)DHT.temperature, 1);       
//     lcd.print("oC");     // 無法顯示度，只好用小寫的O表示       
//     return;
//}

void loop(){   
  DHTfunc(); 
  //lcdfunc();
  delay(delayTime);
}  
