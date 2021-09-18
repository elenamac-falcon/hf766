/*
Light on an LED by pressing on a button
*/
void setup(){
pinMode(3, INPUT); // define button as input (connected to D3)
pinMode(2, OUTPUT); // define led as output (connected to D2)
}
void loop(){
if (digitalRead(3)) { // if button is pressed
digitalWrite(2, HIGH); // LED is on
} else {
digitalWrite(2, LOW);
}
delay(10);
}
