#include <SoftwareSerial.h>
SoftwareSerial mySerial(4, 5); // Arduino RX:4, TX:5

int band = 9600;



void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(band);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }
  mySerial.begin(band);
}
void loop() // run over and over
{
  if (mySerial.available())
    Serial.write(mySerial.read());
  if (Serial.available())
    mySerial.write(Serial.read());
}
