#ifndef __I2C_H_
#define __I2C_H_

#include "fsl_common.h"
#include "robot_io.h"
#include "fsl_gpio.h"

#define I2C_WR	0		/* Ð´¿ØÖÆbit */
#define I2C_RD	1		/* ¶Á¿ØÖÆbit */

/****************************************I2C Pin Define*******************************************/
#define I2C_SCL_0()						GPIO_PinWrite(I2C_SCL_PORT,I2C_SCL_PIN,0);
#define I2C_SCL_1()						GPIO_PinWrite(I2C_SCL_PORT,I2C_SCL_PIN,1);

#define I2C_SDA_0()						GPIO_PinWrite(I2C_SDA_PORT,I2C_SDA_PIN,0);
#define I2C_SDA_1()						GPIO_PinWrite(I2C_SDA_PORT,I2C_SDA_PIN,1);

#define I2C_SDA_READ()        GPIO_PinRead(I2C_SDA_PORT,I2C_SDA_PIN)

static void i2c_Delay(void);

void i2c_Start(void);

void i2c_Stop(void);

void i2c_SendByte(uint8_t _ucByte);

uint8_t i2c_ReadByte(void);

uint8_t i2c_WaitAck(void);

void i2c_Ack(void);

void i2c_NAck(void);

void i2c_GPIO_Config(void);

void i2c_SDA_Output(void);

void i2c_SDA_Input(void);

uint8_t i2c_CheckDevice(uint8_t _Address);


#endif
