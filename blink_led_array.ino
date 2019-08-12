/**
* ______________________________________________________
* @file    blink_array.ino
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

#include "controller/led.hpp"
#include "controller/controller_array.hpp"

using led = controller::digital_led;

// Declare an arary of digital leds.
controller::controller_array<led, 2> leds(14, 15);

// the setup function runs once when you press reset or power the board
void setup() {
    leds.init(); // initializes all leds 
}

// the loop function runs over and over again forever
void loop() {
  // Loop over led array
  for(auto & led : leds){
    led.blink(1000);
  }
}
