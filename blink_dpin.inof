/**
* ______________________________________________________
* @file    blink.ino
* @project control framework/cfw
* @author  Mustafa Kemal GILOR <mustafagilor@gmail.com>
* @date    12.08.2019
* 
* @brief   
* Basic blink example using control framework.
*
* @copyright (c) 2019 M. Kemal GILOR
* 
* This work is licensed under the terms of the MIT license.  
* For a copy, see <https://opensource.org/licenses/MIT>.
*______________________________________________________
*/

#include "cfw/digital_output_pin.hpp"

// Declare an output pin. Note that the pin is not initialized
// in this constructor, which means the pin has not been set as output
// yet. To do that, call .init() function in setup, or call constructor
// with cfw::init tag.
cfw::digital_output_pin led(LED_BUILTIN /*, cfw::init{} */);

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  led.init();
}

// the loop function runs over and over again forever
void loop() {
  led.setStateHigh(); // same as `digitalWrite(LED_BUILTIN, HIGH);`
  delay(1000);    
  digitalWrite(led, LOW); // `same as led.setStateLow();`
  delay(1000);                       // wait for a second
}
