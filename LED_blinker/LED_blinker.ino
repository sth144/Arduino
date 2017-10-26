/* Author: Sean Hinds
 * Title: LED blinker
 * Date: 10/25/17
 * Description: This simple proof-of-concept sketch will cause an LED wired to pin 13 on the controller to blink.
 */

void setup() {

  // Wire the LED to pin 13 using a breadboard. Be sure to put a 330 ohm resister between the voltage source and the LED
  
  // This sketch sets pin 13 as the output
  pinMode(13, OUTPUT);
  
}

void loop() {
  
  int i = 0; 
  while (i < 10) {
    digitalWrite(13, HIGH);   // apply 5 volts to pin 13
    delay(1000);              // leave LED on for 1 second
    digitalWrite(13, LOW);    // remove voltage from pin 13
    delay(500);               // rest for 0.5 seconds
    i++;                      
  }

}
