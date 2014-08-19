/*
	Copyright 2012-2014 Benjamin Vedder	benjamin@vedder.se

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

/*
 * hw.h
 *
 *  Created on: 12 apr 2014
 *      Author: benjamin
 */

#ifndef HW_H_
#define HW_H_

#include "conf_general.h"

#ifdef HW_VERSION_40
#include "hw_40.h"
#elif defined HW_VERSION_R2
#include "hw_r2.h"
#elif defined HW_VERSION_BW
#include "hw_bw.h"
#elif defined HW_VERSION_PL
#include "hw_pl.h"
#else
#error "No hardware version defined"
#endif

// Functions
void hw_init_gpio(void);
void hw_setup_adc_channels(void);
void hw_setup_servo_outputs(void);

#endif /* HW_H_ */
