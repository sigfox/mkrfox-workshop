#include <SigFox.h>
void setup() {
  if (!SigFox.begin()) {
    Serial.println("Unable to init the Atmel ATA8520 Sigfox chipset");
    return;
  }
  SigFox.debug();
  short valA = 7700;
  //short valB = 128;
  //float valC = 654.32;
  SigFox.beginPacket();
  SigFox.write(valA);
  //SigFox.write(valB);
  //SigFox.write(valC);
  SigFox.endPacket();
}  

void loop(){}
