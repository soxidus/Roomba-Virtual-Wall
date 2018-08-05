#include <IRremoteESP8266.h>
#include <IRsend.h>


IRsend irsend (D3) ;

void setup()
{ irsend.enableIROut(38); // 38 kHz Träger
}

void loop()
{ irsend.mark(1000); // 1 ms Mark
  irsend.space(1000); // 1 ms Space
}
