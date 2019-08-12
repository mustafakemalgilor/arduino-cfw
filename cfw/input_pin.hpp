/**
* ______________________________________________________
* @file    cfw/input_pin.hpp
* @project control framework/cfw
* @author  Mustafa Kemal GILOR <mustafagilor@gmail.com>
* @date    12.08.2019
* 
* @brief   
* Definition of `input_pin` structure in `cfw` namespace.
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
   * @brief A @ref `pin`, which is designated as input.
   */
  struct input_pin : public pin{

    /**
     * @brief Construct a new input pin object
     * 
     * @param    pin_index           Index of the pin
     */
    input_pin(char pin_index)
      : pin(pin_index)
    {}

    /**
     * @brief Construct and initialize new input pin object
     * 
     * @param    pin_index           Index of the pin
     */
    input_pin(char pin_index, auto_init)
      : input_pin(pin_index)
    {
        init();
    }

    /**
     * @brief Initialize input pin.
     */
    inline void init(){
      setAsInput();
    }
  };
}