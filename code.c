/*
 * Blink with variable 
 * 
 * Turns an LED on for one second, then off for one second, repeatedly.
 * But the interval increases each time by 1 more second.
 * 
 * created on Feb 2025
 * by Liya G.
 */

 const int PIN_5 = 5;
 int blinkTime = 1000; // set variable to 1000
 
 void setup() {
   // initialize digital pin LED_BUILTIN as an output.
   pinMode(PIN_5, OUTPUT); 
 }
 
 void loop() {
   digitalWrite(PIN_5, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(blinkTime);   // wait for length of variable blinkTime
   digitalWrite(PIN_5, LOW);   // turn the LED off by making the voltage LOW
   delay(blinkTime);   // wait for a second
 
   blinkTime = blinkTime + 1000; // add 1 second (or 1000) to variable blinkTime
 }