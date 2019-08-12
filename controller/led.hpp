#pragma once

#include "../cfw/digital_output_pin.hpp"

namespace controller{

    /**
     * @brief A controller for light emitting diode (LED)
     * 
     */
    struct digital_led : private cfw::digital_output_pin{

        using digital_output_pin::digital_output_pin;
        using digital_output_pin::init;
        using digital_output_pin::auto_init;

        inline void on(){ 
            setStateHigh();
        }

        inline void off(){ 
            setStateLow();    
        }

        inline void blink(int delay_ms){
            on(); 
            delay(delay_ms / 2);
            off();
            delay(delay_ms / 2);
        }
    };

}

