/*
 * LCD_config.h
 *
 *  Created on: May 11, 2019
 *      Author: Merna
 */

#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_

//change this file according to your hardware connections to the LCD


/* Data PORT config,
 * Range: DIO_PORTA to DIO_PORTD */
#define LCD_DATA_PORT 	DIO_PORTC

/* Control PORT config,
 * Range: DIO_PORTA to DIO_PORTD */
#define LCD_CTRL_PORT	DIO_PORTD

/* Control Signals,
 * Range: DIO_PIN0 to DIO_PIN7 */
#define LCD_RS			DIO_PIN0
#define LCD_RW			DIO_PIN1
#define LCD_E			DIO_PIN2
#define LCD_Anode		DIO_PIN3
#define LCD_Cathod		DIO_PIN4


#endif /* LCD_CONFIG_H_ */
