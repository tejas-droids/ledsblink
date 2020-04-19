#include <ledsblink.h>


ledsblink leds(2,3,4,5,6);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  leds.on();
  delay(500);
  leds.off();
  delay(500);
  // put your main code here, to run repeatedly:

}
