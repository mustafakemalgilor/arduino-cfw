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

#include "controller/led.hpp"

using led = controller::digital_led;

// Declare a digital led.
led onboard_led(LED_BUILTIN);

// the setup function runs once when you press reset or power the board
void setup() {
    onboard_led.init();
}

// the loop function runs over and over again forever
void loop() {
  onboard_led.blink(1000); // blink led
}
