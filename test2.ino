// Particle Code //

// This #include statement was automatically added by the Particle IDE.
#include <InternetButton.h>

#include "InternetButton.h"

InternetButton b = InternetButton();


void setup() {

b.begin();
Particle.function("at0", smileyat0);
Particle.function("at4", smileyat4);
Particle.function("at8", smileyat8);
Particle.function("at12", smileyat12);
Particle.function("at16", smileyat16);
Particle.function("at20", smileyat20);



}

void loop() {


}

int smileyat0(String cmd) {
if(cmd == "on") {
b.ledOn(1,255,255,0);
b.ledOn(11,255,255,0);
b.ledOn(3,255,255,0);
b.ledOn(9,255,255,0);
b.ledOn(4,255,255,0);
b.ledOn(5,255,255,0);
b.ledOn(6,255,255,0);
b.ledOn(7,255,255,0);
b.ledOn(8,255,255,0);
}else if (cmd == "off") {
b.allLedsOff();
}else {
return 1;
}
}

int smileyat4(String cmd) {
if(cmd == "on") {
b.ledOn(1,255,255,0);
b.ledOn(11,255,255,0);
b.ledOn(4,255,255,0);
b.ledOn(5,255,255,0);
b.ledOn(6,255,255,0);
b.ledOn(7,255,255,0);
b.ledOn(8,255,255,0);
}else if (cmd == "off") {
b.allLedsOff();
}else {
return 1;
}
}

int smileyat8(String cmd) {
if(cmd == "on") {
b.ledOn(1,255,255,0);
b.ledOn(11,255,255,0);

b.ledOn(5,255,255,0);
b.ledOn(6,255,255,0);
b.ledOn(7,255,255,0);

}else if (cmd == "off") {
b.allLedsOff();
}else {
return 1;
}
}

int smileyat12(String cmd) {
if(cmd == "on") {
b.ledOn(1,255,255,0);
b.ledOn(11,255,255,0);


b.ledOn(6,255,255,0);


}else if (cmd == "off") {
b.allLedsOff();
}else {
return 1;
}
}

int smileyat16(String cmd) {
if(cmd == "on") {
b.ledOn(1,255,255,0);
b.ledOn(11,255,255,0);


}else if (cmd == "off") {
b.allLedsOff();
}else {
return 1;
}
}

int smileyat20(String cmd) {
if(cmd == "on") {
b.ledOn(2,255,0,0);
b.ledOn(10,255,0,0);

b.ledOn(5,255,0,0);
b.ledOn(6,255,0,0);
b.ledOn(7,255,0,0);

}else if (cmd == "off") {
b.allLedsOff();
}else {
return 1;
}
}

