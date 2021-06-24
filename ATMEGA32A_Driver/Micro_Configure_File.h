/*
 * Micro_Configure_File.h
 *
 * Created: 6/24/2021 12:23:01 AM
 *  Author: Mostafa Mahmoud
 */ 


#ifndef MICRO_CONFIGURE_FILE_H_
#define MICRO_CONFIGURE_FILE_H_

#include "Standart_Types.h"
#include "Macros.h"

#define CPU_F	(1000000UL) /* The Frequency of Internal RC Oscillator */
#define PORT_MAX (4)
#define PIN_MAX  (8) 
 
typedef union{
	vuint8 Data;
	struct {
		vuint8 Bit0:1;
		vuint8 Bit1:1;
		vuint8 Bit2:1;
		vuint8 Bit3:1;
		vuint8 Bit4:1;
		vuint8 Bit5:1;
		vuint8 Bit6:1;
		vuint8 Bit7:1;
	}BIT;
}REG;

#endif /* MICRO_CONFIGURE_FILE_H_ */