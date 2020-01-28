/*
 * PORT.c
 *
 * Created: 1/29/2020 12:21:53 AM
 *  Author: Eslam Yasser
 */ 

#include "PORT.h"

void Port_Init	( const Port_ConfigType* ConfigPtr )
{
	Port_SetPinDirection(ConfigPtr->Pin,ConfigPtr->Direction);
}

void Port_SetPinDirection	( Port_PinType Pin, Port_PinDirectionType Direction )
{
	Port_PinType PIN_NUM = Pin % 8;
	
	switch (Pin / 8)
	{
		case 0:
			DDRA_REG = (  (DDRA_REG & (~(1<<PIN_NUM)) ) | (Direction<<PIN_NUM)  );
		break;
		
		case 1:
			DDRB_REG = (  (DDRB_REG & (~(1<<PIN_NUM)) ) | (Direction<<PIN_NUM)  );
		break;
		
		case 2:
			DDRC_REG = (  (DDRC_REG & (~(1<<PIN_NUM)) ) | (Direction<<PIN_NUM)  );
		break;
		
		case 3:
			DDRD_REG = (  (DDRD_REG & (~(1<<PIN_NUM)) ) | (Direction<<PIN_NUM)  );
		break;
		
	}
}