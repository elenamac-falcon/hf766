/*
Make an LED blink every second
*/
void setup(){
pinMode(2, OUTPUT); // define led as output (connected to D2)
}
void loop(){
digitalWrite(2, HIGH); // LED is on
delay(15); // wait 1 s (1000 ms)
digitalWrite(2, LOW); // LED is off
delay(15); // wait 1 s (1000 ms)
}
