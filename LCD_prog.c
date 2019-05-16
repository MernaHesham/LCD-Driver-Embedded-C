/*
 * LCD_prog.c
 *
 *  Created on: May 11, 2019
 *      Author: Merna
 */

#include "lib/STD_TYPES.h"
#include "lib/BIT_MATH.h"
#include <avr/delay.h>
#include "lib/DIO_interface.h"
#include "LCD_config.h"
#include "LCD_interface.h"
#include "LCD_private.h"

void LCD_vidInit(void)
{

	//following the data sheet
	/* Dealy to ensure the initialization of LCD driver */
	_delay_ms(30);
	/* Function Set command */
	LCD_vidSendCommand(LCD_FUNC_SET_8BIT);
	_delay_ms(1);
	LCD_vidSendCommand(LCD_DIS_ON_CURS_ON);
	_delay_ms(1);
	LCD_vidSendCommand(LCD_HOME);
	_delay_ms(15);
	LCD_vidSendCommand(LCD_CLR);
	_delay_ms(15);
	LCD_vidSendCommand(LCD_ENTRY_MODE);
	_delay_ms(2);
}

void LCD_vidSendCommand(u8 u8CMDcopy){

	/* Reset RS pin */
	DIO_vidSetPinVal(LCD_CTRL_PORT, LCD_RS, DIO_LOW);

	/* Reset R/w */
	DIO_vidSetPinVal(LCD_CTRL_PORT, LCD_RW, DIO_LOW);

	/* Set enable pin to high */
	DIO_vidSetPinVal(LCD_CTRL_PORT, LCD_E, DIO_HIGH);

	/* load command on data port */
	DIO_vidSetPortVal(LCD_DATA_PORT, u8CMDcopy);

	/* reset enable pin to low */
	DIO_vidSetPinVal(LCD_CTRL_PORT, LCD_E, DIO_LOW);

	/* set pulse delay */
	_delay_ms(5);

	/* set enable to high again */
	DIO_vidSetPinVal(LCD_CTRL_PORT, LCD_E, DIO_HIGH);

	_delay_ms(10);
}

void LCD_vidSendChar(u8 u8Charcopy){

	/* Reset RS pin */
	DIO_vidSetPinVal(LCD_CTRL_PORT, LCD_RS, DIO_HIGH);

	/* Reset R/w */
	DIO_vidSetPinVal(LCD_CTRL_PORT, LCD_RW, DIO_LOW);

	/* Set enable pin to high */
	DIO_vidSetPinVal(LCD_CTRL_PORT, LCD_E, DIO_HIGH);

	/* load command on data port */
	DIO_vidSetPortVal(LCD_DATA_PORT, u8Charcopy);

	/* reset enable pin to low */
	DIO_vidSetPinVal(LCD_CTRL_PORT, LCD_E, DIO_LOW);

	/* set pulse delay */
	_delay_ms(5);

	/* set enable to high again */
	DIO_vidSetPinVal(LCD_CTRL_PORT, LCD_E, DIO_HIGH);

	_delay_ms(10);
}
