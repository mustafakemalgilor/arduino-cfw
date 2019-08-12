/**
* ______________________________________________________
* @file    cfw/digital_state.hpp
* @project control framework/cfw
* @author  Mustafa Kemal GILOR <mustafagilor@gmail.com>
* @date    12.08.2019
* 
* @brief   
* Definition of `digital_state` structure in `cfw` namespace.
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
   * @brief Represents digital state. It is a wrapper around primitive
   * state type (typically uint8_t), and provides a cast operator, so it
   * can be used like as if it is primitive type.
   * 
   * @note This type is defaulted to `low`, in case you would default-construct it.
   */
  struct digital_state{
  private:
    using primitive_type_t = unsigned char;
  public:
    /**
     * @brief Default constructor of the digital_state.
     * The value of the digital_state will be `low`.
     */
    digital_state() = default;

    /**
     * @brief Construct a digital state object from primitive type value.
     * 
     */
    explicit constexpr digital_state(primitive_type_t value)
      : value(value)
    {}

    /**
     * @brief Cast operator to primitive_type_t
     */
    operator primitive_type_t() const {
      return value;
    }
    /**
     * @brief High digital state (1).
     * Can be represented as ON, EXIST.
     */
    static constexpr digital_state HI() { return digital_state{(primitive_type_t)(1)}; }

    /**
     * @brief Low digital state (0).
     * Can be represented as OFF, ABSENT.
     */
    static constexpr digital_state LO() { return digital_state{(primitive_type_t)(0)}; }
    /**
     * @brief Returns whether digital state is high or not.
     */
    inline bool isHigh()  const { return *this == HI();}
    /**
     * @brief Returns whether digital state is low or not.
     */
    inline bool isLow()   const { return *this == LO();}
  private:
    /**
     * @brief The wrapped type.
     * Defaulted to `low`. 
     */
    primitive_type_t value = { LO() };
  };
}