/*
 * PORT.h
 *
 * Created: 1/29/2020 12:21:34 AM
 *  Author: Eslam Yasser
 */ 


#ifndef PORT_H_
#define PORT_H_

#include "PORT_STD_TYPES.h"
#include "DIO_HW.h"
#include "Data_Types.h"

/*
	Service Name	: Port_Init
	Description		: Initializes the Port Driver module.	
	Parameters		: Pointer to configuration set.
	Return value	: None
*/
void Port_Init				( const Port_ConfigType* ConfigPtr );


/*
	Service Name	: Port_SetPinDirectionx
	Description		: Sets the port pin direction.	
	Parameters		: Port Pin ID number - Port Pin Direction.
	Return value	: None
*/
void Port_SetPinDirection	( Port_PinType Pin, Port_PinDirectionType Direction );




#endif /* PORT_H_ */