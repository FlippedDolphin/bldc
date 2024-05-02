/*
	Copyright 2016 Benjamin Vedder	benjamin@vedder.se

	This file is part of the VESC firmware.

	The VESC firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    The VESC firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef HW_CHEAP_FOCER_2_NO_LIMITS_H_
#define HW_CHEAP_FOCER_2_NO_LIMITS_H_

#define CFOC_IS_V10
#define DISABLE_HW_LIMITS

#define CURRENT_SHUNT_RES		0.005

#include "hw_Cheap_FOCer_2_core.h"

#undef	HW_NAME
#define HW_NAME                 "cFc2_5"

#undef BMI160_SDA_GPIO
#undef BMI160_SDA_PIN
#undef BMI160_SCL_GPIO
#undef BMI160_SCL_PIN

#endif /* HW_CHEAP_FOCER_2_NO_LIMITS_H_ */
