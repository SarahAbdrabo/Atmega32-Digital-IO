/**********************************************************/
/*         Author       :   SARAH                         */
/*         Date         :   June 30 2022                  */
/*         Version      :   1.0V                          */
/*         Description  :   [Program.c]                   */
/**********************************************************/

/**********************************LIBERARY DIRECTIVES***********************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/**********************************************************/
/*  Gaurd to protect from being included more than once   */
/*                                                        */
/**********************************************************/

#ifndef _DIO_INTERFACE_H
#define _DIO_INTERFACE_H

/* function Prototypes */
void  DIO_voidSetPinDir    (u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Direction );
void  DIO_voidSetPinValue  (u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Value );
u8    DIO_u8GetPinValue    (u8 Copy_u8PORT, u8 Copy_u8PIN);     				    /*get value of pin*/
void  DIO_u8TogglePin      (u8 Copy_u8PORT, u8 Copy_u8PIN);
void  DIO_voidSetPortDir   (u8 Copy_u8PORT,u8 Copy_u8Direction  );
void  DIO_voidSetPortValue (u8 Copy_u8PORT,u8 Copy_u8Value );


/******Data type protection for functions Arguments*********/

#define   PORTA     0
#define   PORTB     1
#define   PORTC     2
#define   PORTD     3

#define   PIN0      0
#define   PIN1      1
#define   PIN2      2
#define   PIN3      3
#define   PIN4      4
#define   PIN5      5
#define   PIN6      6
#define   PIN7      7

#define   OUTPUT    1
#define   INPUT     0

#define   HIGH      1
#define   LOW       0

#endif   /* end of gaurd */