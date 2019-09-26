/*
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
 
// TetherTension sensor for AWEsome project. Code adapted from AP_WindVane_Analog
#include "AP_TetherTension_Analog.h"
// adc input channel of pixhawk 4 with 3.3 V
// #define PIXHAWK4_ADC33V_CHANNEL 14

//extern const AP_HAL::HAL& hal;


// constructor

//~ AP_TetherTension_Analog::AP_TetherTension_Analog(void) 
//~ {
    //~ _voltage_analog_source = hal.analogin->channel(ANALOG_INPUT_NONE);
//~ }

const AP_Param::GroupInfo AP_TetherTension_Analog::var_info[] = {
    // @Param: _TYPE
    // @DisplayName: RPM type
    // @Description: What type of RPM sensor is connected
    // @Values: 0:None,1:PX4-PWM,2:AUXPIN
    // @User: Standard
    // AP_GROUPINFO("_TYPE",    0, AP_TetherTension_Analog, 0, 0),
    
    // AP_GROUPEND
};
    
    
void AP_TetherTension_Analog::update(void)
{
    // _voltage_analog_source->set_pin(PIXHAWK4_ADC33V_CHANNEL);
    // _current_analog_voltage = _voltage_analog_source->voltage_average();
	// hal.console->printf("[%u %.3f] ",
	// 	  (unsigned)PIXHAWK4_ADC33V_CHANNEL, (double)_current_analog_voltage);
}



