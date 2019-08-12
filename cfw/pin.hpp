/**
* ______________________________________________________
* @file    cfw/pin.hpp
* @project control framework/cfw
* @author  Mustafa Kemal GILOR <mustafagilor@gmail.com>
* @date    12.08.2019
* 
* @brief   
* Definition of `pin` structure in `cfw` namespace.
*
* @copyright (c) 2019 M. Kemal GILOR
* 
* This work is licensed under the terms of the MIT license.  
* For a copy, see <https://opensource.org/licenses/MIT>.
*______________________________________________________
*/

#pragma once

namespace cfw{

  /**
   * @brief Tag struct for controller constructors
   * that allow initialization at construction time
   */
  struct init{};
    /**
   * @brief Represents a pin on chip.
   */
  struct pin{
    /**
     * @brief Pin index type
     */
    using pin_index_t = unsigned char;
    /**
     * @brief Pin mode type
     */
    using pin_mode_t  = unsigned char;
    /**
     * @brief Construct a new pin object
     * 
     * @param    pin_index           Index of the pin on chip
     */
    pin(pin_index_t pin_index)
      : index(pin_index)
    {}

    /**
     * @brief Cast operator to integral pin type.
     * This allows this struct (and inheriting) to be used
     * in functions like digitalWrite(..) and pinMode(..) without
     * any explicit cast and member access.
     */
    operator pin_index_t () const {
      return index;
    }
  protected:
    /**
     * @brief Set operation mode of the pin.
     * 
     * @param    mode        Desired mode        
     */
    inline void setMode(pin_mode_t mode){
      pinMode(*this, mode);
    }
    /**
     * @brief Sets the pin as output. This allows
     * writing to the pin, if pin supports output.
     */
    inline void setAsOutput(){
      setMode(OUTPUT);
    }
    /**
     * @brief Sets the pin as input. This restricts
     * writing to the pin and allows read-only access.
     */
    inline void setAsInput(){
      setMode(INPUT);
    }
    /**
     * @brief Sets the pin as input, and enables input pullup
     * resistor, and default value for the pin will be high (or analog max).
     */
    inline void setAsInputPullup(){
      setMode(INPUT_PULLUP);
    }
  private:
      unsigned char index;
  };
}