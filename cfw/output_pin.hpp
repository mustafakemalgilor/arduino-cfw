/**
* ______________________________________________________
* @file    cfw/output_pin.hpp
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

#include "pin.hpp"

namespace cfw{
  /**
   * @brief A @ref `pin`, which is designated as output.
   */
  struct output_pin : public pin {
  
    /**
     * @brief Construct a new output pin object
     * 
     * @param    pin_index      Index of the pin     
     */
    output_pin(char pin_index)
      : pin(pin_index)
    {}

    /**
     * @brief Construct and initialize new output pin object
     * 
     * @param    pin_index           Index of the pin
     */
    output_pin(char pin_index, init)
      : output_pin(pin_index)
    {
        init();
    }

    /**
     * @brief Initialize output pin.
     */
    inline void init(){
      setAsOutput();
    }
  };
}