/*
Light on an LED by touching a touch sensor
*/
const int pinLED = 2; // define a variable pinLed to pin 2
const int touch = 3; // define a variable touch to pin 3

void setup(){
pinMode(touch, INPUT); // define touch sensor as input
pinMode(pinLED, OUTPUT); // define led as output
}
void loop(){
if (digitalRead(touch)) { // if touch sensor is touched
digitalWrite(pinLED, HIGH); // LED is on
} else {
digitalWrite(pinLED, LOW); // LED is off
}
delay(10);
}
