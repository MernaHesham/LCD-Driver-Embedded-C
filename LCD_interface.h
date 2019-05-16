/*
 * LCD_interface.h
 *
 *  Created on: May 11, 2019
 *      Author: Merna
 */

#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

/***************************************************/
/**********************Public Macros****************/
/***************************************************/

/* LCD commands from Data sheet */
#define LCD_CLR						0x01
#define LCD_HOME 					0x02
#define LCD_ENTRY_MODE				0x06
#define LCD_DIS_OFF					0x08
#define LCD_DIS_ON_CURS_ON			0x0E
#define LCD_FUNC_RESET				0x30
#define LCD_FUNC_SET_8BIT			0x38
#define LCD_SET_CURSER				0x80
#define LCD_DISP_ON_CURS_BLINK		0x0F
#define LCD_DISP_ON_CURS_OFF		0x0C


/***************************************************/
/*******************Public functions****************/
/***************************************************/
void LCD_vidInit(void);
void LCD_vidSendCommand(u8 u8CMDcopy);
void LCD_vidSendChar(u8 u8Charcopy);
//goto location function
//write custom char function
//write string function


#endif /* LCD_INTERFACE_H_ */
