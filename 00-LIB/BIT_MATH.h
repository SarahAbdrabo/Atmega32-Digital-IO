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




/*****************************************************************/
/****************************TASK*********************************/


/*                         1. circular shift                     */
#define   SET_BIT(VAR, BIT_NO)   VAR |= (1<<BIT_NO)  



/*                2. SET High Nibble  ie: 1111 XXXX              */



/*                2. SET LOW Nibble  ie: XXXX 1111                */



/*                2. CLR High Nibble  ie: 0000 XXXX               */



/*                2. CLR LOW Nibble  ie: XXXX 0000                */


/*                2. TGL High Nibble  ie: YYYY XXXX               */



/*                2. TGL LOW Nibble  ie: XXXX YYYY                */


#endif