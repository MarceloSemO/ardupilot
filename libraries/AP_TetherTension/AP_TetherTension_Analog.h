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
#pragma once


#include <GCS_MAVLink/GCS.h>
#include <AP_HAL/AP_HAL.h>
#include <AP_Param/AP_Param.h>



class AP_TetherTension_Analog 
{
public:
    // constructor
    //~ AP_TetherTension_Analog();

    // update state
    void update(void);
    
    float get_tethertension(){
		// return _current_analog_voltage;
        return 0.2;
	}
	
    static const struct AP_Param::GroupInfo var_info[];


private:
    // pin for reading analog voltage
    // AP_HAL::AnalogSource *_voltage_analog_source;

    // float _current_analog_voltage;
   
};
