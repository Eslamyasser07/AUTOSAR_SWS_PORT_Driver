/*
 * PORT_STD_TYPES.h
 *
 * Created: 1/29/2020 12:28:41 AM
 *  Author: Eslam Yasser
 */ 


#ifndef PORT_STD_TYPES_H_
#define PORT_STD_TYPES_H_


typedef enum
{
	PORT_PIN_IN,
	PORT_PIN_OUT
	
}Port_PinDirectionType;

typedef enum
{
	PORTA_PIN0,
	PORTA_PIN1,
	PORTA_PIN2,
	PORTA_PIN3,
	PORTA_PIN4,
	PORTA_PIN5,
	PORTA_PIN6,
	PORTA_PIN7,

	PORTB_PIN0,
	PORTB_PIN1,
	PORTB_PIN2,
	PORTB_PIN3,
	PORTB_PIN4,
	PORTB_PIN5,
	PORTB_PIN6,
	PORTB_PIN7,

	PORTC_PIN0,
	PORTC_PIN1,
	PORTC_PIN2,
	PORTC_PIN3,
	PORTC_PIN4,
	PORTC_PIN5,
	PORTC_PIN6,
	PORTC_PIN7,

	PORTD_PIN0,
	PORTD_PIN1,
	PORTD_PIN2,
	PORTD_PIN3,
	PORTD_PIN4,
	PORTD_PIN5,
	PORTD_PIN6,
	PORTD_PIN7
	
}Port_PinType;

typedef struct
{
	Port_PinType Pin;
	Port_PinDirectionType Direction;
	
}Port_ConfigType;

#endif /* PORT_STD_TYPES_H_ */