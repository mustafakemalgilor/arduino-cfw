/**
* ______________________________________________________
* @file    cfw/digital_io_pin.hpp
* @project control framework/cfw
* @author  Mustafa Kemal GILOR <mustafagilor@gmail.com>
* @date    12.08.2019
* 
* @brief   
* Definition of `digital_io_pin` structure in `cfw` namespace.
*
* @copyright (c) 2019 M. Kemal GILOR
* 
* This work is licensed under the terms of the MIT license.  
* For a copy, see <https://opensource.org/licenses/MIT>.
*______________________________________________________
*/

#pragma once

#include "digital_input_pin.hpp"
#include "digital_output_pin.hpp"

namespace cfw{
    struct digital_io_pin : public digital_input_pin, public digital_output_pin{
    digital_io_pin(char pin_index)
      : digital_input_pin(pin_index),
        digital_output_pin(pin_index)
    {}
    /**
     * @brief Initialize I/O pin.
     */
    inline void init(){
      // Here we explicitly call output_pin's init function
      // in order to resolve ambiguity.
      output_pin::init();
    }
  };
}