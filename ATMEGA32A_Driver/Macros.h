/*
 * Macros.h
 *
 * Created: 6/24/2021 12:20:21 AM
 *  Author: Mostafa Mahmoud
 */ 


#ifndef MACROS_H_
#define MACROS_H_

#define SET_BIT(REG,BIT)			((REG) |=  (1 << (BIT)))
#define CLEAR_BIT(REG,BIT)			((REG) &= ~(1 << (BIT)))
#define TOGGLE_BIT(REG,BIT)			((REG) ^=  (1 << (BIT)))
#define IS_BIT_SET(REG,BIT)			((REG)  &  (1 << (BIT)))
#define IS_BIT_CLEAR(REG,BIT)	   !((REG)  &  (1 << (BIT)))

#endif /* MACROS_H_ */