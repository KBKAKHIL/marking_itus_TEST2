// Particle Code //

// This #include statement was automatically added by the Particle IDE.
#include <InternetButton.h>

#include "InternetButton.h"

InternetButton b = InternetButton();


void setup() {

b.begin();
Particle.function("start", smiley);


}

void loop() {


}

int smiley(String cmd) {
if(cmd == "on") {
b.ledOn(2,255,255,255);
b.ledOn(10,255,255,255);
b.ledOn(4,255,255,255);
b.ledOn(5,255,255,255);
b.ledOn(6,255,255,255);
b.ledOn(7,255,255,255);
b.ledOn(8,255,255,255);
}
}
