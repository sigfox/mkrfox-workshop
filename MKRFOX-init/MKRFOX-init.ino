/*
  Retrieve MKRFOX board informations needed for registration:
    * Sigfox ID
    * Sigfox PAC
*/

#include <SigFox.h>

void setup() {
  Serial.begin(9600);
  while (!Serial) {};

  if (!SigFox.begin()) {
    Serial.println("Unable to init the Atmel ATA8520 Sigfox chipset");
    return;
  }
  SigFox.debug();

  String ID = SigFox.ID();
  String PAC = SigFox.PAC();

  // Display module informations
  Serial.println("MKRFOX1200 informations");
  Serial.print("ID\t");
  Serial.println(SigFox.ID());
  Serial.print("PAC\t");
  Serial.println(SigFox.PAC());

  Serial.println("Register your board on https://buy.sigfox.com/activate");
}

void loop()
{
}
