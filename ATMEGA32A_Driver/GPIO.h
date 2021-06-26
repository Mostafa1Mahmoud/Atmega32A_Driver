/*
 * GPOI.h
 *
 * Created: 6/24/2021 12:41:51 AM
 *  Author: Mostafa Mahmoud
 */ 


#ifndef GPOI_H_
#define GPOI_H_

#include "Micro_Configure_File.h"

#define GPIOA ((volatile GPIO*)(0x39))
#define GPIOB ((volatile GPIO*)(0x36))
#define GPIOC ((volatile GPIO*)(0x33))
#define GPIOD ((volatile GPIO*)(0x30))

typedef struct{
	REG PIN;
	REG DDR;
	REG PORT;
}GPIO;

extern volatile GPIO* GPIOS_REG[PORT_MAX];

typedef enum {
		INPUT,
		OUTPUT
}PIN_DIR;

typedef enum {
	DISABLE,
	ENABLE	
}PIN_CON;

typedef enum {
	LOW,
	HIGH
}PIN_MODE;

typedef enum {
	RET_NOT_OK,
	RET_OK
}GPIO_RET;

typedef enum {
	PORTA,
	PORTB,
	PORTC,
	PORTD
}GPIO_PORTS;

typedef enum{
	PIN0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7
}PINS;

typedef enum{
	INPUT_FLOAT_POINT,
	INPUT_PULLUP,
	OUTPUT_HIGH,
	OUTPUT_LOW
}GPIO_MODE;

GPIO_RET GPIO_PIN_DIR(GPIO_PORTS ,PINS ,PIN_DIR );

GPIO_RET GPIO_PIN_MODE(GPIO_PORTS ,PINS ,PIN_MODE);

PIN_DIR GPIO_PIN_READ_DIR(GPIO_PORTS ,PINS);

GPIO_RET GPIO_PULLUP_CONFIG(GPIO_PORTS ,PINS ,PIN_CON);

PIN_MODE GPIO_DIGITAL_READ(GPIO_PORTS ,PINS);

GPIO_RET GPIO_PIN_CONFIG(GPIO_PORTS ,PINS ,GPIO_MODE);


#endif /* GPOI_H_ */