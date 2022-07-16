/**********************************************************/
/*         Author       :   SARAH                         */
/*         Date         :   June 30 2022                  */
/*         Version      :   1.0V                          */
/*         Description  :   [Program.c]                   */
/**********************************************************/

/**********************************LIBERARY DIRECTIVES***********************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
/***********************************DIO COMPONENT DIRECTIVES*****************************************/
#include "DIO_interface.h"
#include "DIO_private.h"
/***********************************Function Implementation******************************************/
void  DIO_voidSetPinDir    (u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Direction ){
	/******Data type protection for functions Arguments*********/   //u8 is already unsigned its value is >= 0
	if ( (Copy_u8PORT <4)  && (Copy_u8PIN < 8)){
		if (Copy_u8Direction == OUTPUT){
			switch (Copy_u8PORT){
				case PORTA  :    SET_BIT(DDRA_REG, Copy_u8PIN); break;
				case PORTB  :    SET_BIT(DDRB_REG, Copy_u8PIN); break;
				case PORTC  :    SET_BIT(DDRC_REG, Copy_u8PIN); break;
				case PORTD  :    SET_BIT(DDRD_REG, Copy_u8PIN); break;
			}
		
	    }
		else if (Copy_u8Direction == INPUT){
			switch (Copy_u8PORT){
				case PORTA  :    CLR_BIT(DDRA_REG, Copy_u8PIN); break;
				case PORTB  :    CLR_BIT(DDRB_REG, Copy_u8PIN); break;
				case PORTC  :    CLR_BIT(DDRC_REG, Copy_u8PIN); break;
				case PORTD  :    CLR_BIT(DDRD_REG, Copy_u8PIN); break;
			}
			
		}
		else{/*                   nothing                            */}
	}
	else {/*                      nothing                             */}
	
}
void  DIO_voidSetPinValue  (u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Value ){
	if ( (Copy_u8PORT <4)  && (Copy_u8PIN < 8)){
		if (Copy_u8Value == HIGH){
			switch(Copy_u8PORT){
				case PORTA  :     SET_BIT(PORTA_REG, Copy_u8Value); break;
				case PORTB  :     SET_BIT(PORTB_REG, Copy_u8Value); break;
				case PORTC  :     SET_BIT(PORTC_REG, Copy_u8Value); break;
				case PORTD  :     SET_BIT(PORTD_REG, Copy_u8Value); break;
			}
		}
		else if (Copy_u8Value == LOW){ 
			switch(Copy_u8PORT){
				case PORTA   :    CLR_BIT(PORTA_REG, Copy_u8Value); break;
				case PORTB   :    CLR_BIT(PORTB_REG, Copy_u8Value); break;
				case PORTC   :    CLR_BIT(PORTC_REG, Copy_u8Value); break;
				case PORTD   :    CLR_BIT(PORTD_REG, Copy_u8Value); break;
			}
		}
		else {/*                 nothing                             */}
	}
	else {/*                      nothing                             */}
}
u8    DIO_u8GetPinValue    (u8 Copy_u8PORT, u8 Copy_u8PIN);{
	
	
	return 0;
}
void  DIO_u8TogglePin      (u8 Copy_u8PORT, u8 Copy_u8PIN){
	
}
void  DIO_voidSetPortDir   (u8 Copy_u8PORT,u8 Copy_u8Direction  ){
	if(Copy_u8PORT < 4){
		switch (Copy_u8PORT) {
			case PORTA : DDRA_REG = Copy_u8Direction; break;
			case PORTB : DDRB_REG = Copy_u8Direction; break;
			case PORTC : DDRC_REG = Copy_u8Direction; break;
			case PORTD : DDRD_REG = Copy_u8Direction; break;
		}
	}
	else{/*   nothing      */}
	
}
void  DIO_voidSetPortValue (u8 Copy_u8PORT,u8 Copy_u8Value ){
	if(Copy_u8PORT < 4){
		switch (Copy_u8PORT) {
			case PORTA : PORTA_REG = Copy_u8Value; break;
			case PORTB : PORTB_REG = Copy_u8Value; break;
			case PORTC : PORTC_REG = Copy_u8Value; break;
			case PORTD : PORTD_REG = Copy_u8Value; break;
		}
	}else {/* do nothing */}
}
