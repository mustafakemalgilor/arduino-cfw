/**
* ______________________________________________________
* @file    cfw/digital_output_pin.hpp
* @project control framework/cfw
* @author  Mustafa Kemal GILOR <mustafagilor@gmail.com>
* @date    12.08.2019
* 
* @brief   
* Definition of `digital_output_pin` structure in `cfw` namespace.
*
* @copyright (c) 2019 M. Kemal GILOR
* 
* This work is licensed under the terms of the MIT license.  
* For a copy, see <https://opensource.org/licenses/MIT>.
*______________________________________________________
*/

#pragma once

#include "output_pin.hpp"
#include "digital_state.hpp"

namespace cfw{
  /**
   * @brief A digital output pin, which can be set to digital values,
   * named high and low.  
   */
  struct digital_output_pin : public output_pin{
    using pin_state_t = unsigned char;
    using output_pin::output_pin;

    inline void setStateHigh(){
      setState(digital_state::HI());
    }
    inline void setStateLow(){
      setState(digital_state::LO());
    }
    inline void setState(digital_state state){
      digitalWrite(*this, state);
    }
  };
}