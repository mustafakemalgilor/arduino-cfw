/**
* ______________________________________________________
* @file    cfw/digital_input_pin.hpp
* @project control framework/cfw
* @author  Mustafa Kemal GILOR <mustafagilor@gmail.com>
* @date    12.08.2019
* 
* @brief   
* Definition of `digital_input_pin` structure in `cfw` namespace.
*
* @copyright (c) 2019 M. Kemal GILOR
* 
* This work is licensed under the terms of the MIT license.  
* For a copy, see <https://opensource.org/licenses/MIT>.
*______________________________________________________
*/

#pragma once

#include "input_pin.hpp"
#include "digital_state.hpp"

namespace cfw{
    struct digital_input_pin : public input_pin{

        using input_pin::input_pin; // Use parent's constructor

        /**
         * @brief Read current state of the pin.
         * 
         * @return digital_state Digital state of the pin (high or low)
         */
        inline digital_state getState() const{
            return digital_state{(unsigned char)digitalRead(*this)};
        }

    }; //< struct digital_input_pin
} //< namespace cfw