/*
file path: 
#include "C:\Users\Dell-pc\Desktop\imt\COTS\00_LIB\BIT_MATH.h"
*/


#ifndef BIT_MATH_H
#define BIT_MATH_H



#define   SET_BIT(VAR, BIT_NO)   VAR |= (1<<BIT_NO)         //sets a given bit
#define   CLR_BIT(VAR, BIT_NO)   VAR &= ~(1<<BIT_NO)        //clears a given bit
#define   TGL_BIT(VAR, BIT_NO)   VAR ^= (1<<BIT_NO)         //toggels a given bit

#define   GET_BIT(VAR, BIT_NO)   (VAR >> BIT_NO) & 1        //GETS state of a given bit

/*u can also use this if the above code caused u an error getting a bit state : */
//#define   GET_BIT(VAR, BIT_NO)   (VAR >> BIT_NO) & (1<<0)   //GETS state of a given bit (causes less errors)


#endif
