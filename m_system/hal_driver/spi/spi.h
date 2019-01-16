
#ifndef __SPI_H
#define __SPI_H

#include "stm32l0xx_hal.h"

#define SPI1_CLK_GPIO		GPIOE
#define SPI1_CLK_PIN		GPIO_PIN_13

//#define SX127X2_CLK_GPIO		GPIOB
//#define SX127X2_CLK_PIN		GPIO_PIN_13


#define SPI1_MOSI_GPIO	GPIOE
#define SPI1_MOSI_PIN		GPIO_PIN_15

//#define SX127X2_MOSI_GPIO	GPIOB
//#define SX127X2_MOSI_PIN		GPIO_PIN_14


#define SPI1_MISO_GPIO	GPIOE
#define SPI1_MISO_PIN		GPIO_PIN_14

//#define SX127X2_MISO_GPIO	GPIOB
//#define SX127X2_MISO_PIN		GPIO_PIN_15


#define SPI1_CS_GPIO		GPIOE
#define SPI1_CS_PIN		GPIO_PIN_12

//#define SX127X2_CS_GPIO		GPIOB
//#define SX127X2_CS_PIN		GPIO_PIN_12


#define SPI1_SETSCK	(SPI1_CLK_GPIO->BSRR = (SPI1_CLK_PIN))
#define SPI1_CLRSCK	(SPI1_CLK_GPIO->BRR = (SPI1_CLK_PIN))
#define SPI1_SETMOSI (SPI1_MOSI_GPIO->BSRR = (SPI1_MOSI_PIN))
#define SPI1_CLRMOSI (SPI1_MOSI_GPIO->BRR = (SPI1_MOSI_PIN))
#define SPI1_GETMISO	HAL_GPIO_ReadPin(SPI1_MISO_GPIO, SX127X1_MISO_PIN)
#define SPI1_SETCS	(SPI1_CS_GPIO->BSRR = (SPI1_CS_PIN))
#define SPI1_CLRCS	(SPI1_CS_GPIO->BRR = (SPI1_CS_PIN))

//#define SPI2_SETSCK	(SX127X2_CLK_GPIO->BSRR = (SX127X2_CLK_PIN))
//#define SPI2_CLRSCK	(SX127X2_CLK_GPIO->BRR = (SX127X2_CLK_PIN))
//#define SPI2_SETMOSI (SX127X2_MOSI_GPIO->BSRR = (SX127X2_MOSI_PIN))
//#define SPI2_CLRMOSI (SX127X2_MOSI_GPIO->BRR = (SX127X2_MOSI_PIN))
//#define SPI2_GETMISO	HAL_GPIO_ReadPin(SX127X2_MISO_GPIO, SX127X2_MISO_PIN)
//#define SPI2_SETCS	(SX127X2_CS_GPIO->BSRR = (SX127X2_CS_PIN))
//#define SPI2_CLRCS	(SX127X2_CS_GPIO->BRR = (SX127X2_CS_PIN))

void spi1_cs(uint8_t selected);
void spi1_xfer(uint8_t *pTxData, uint8_t *pRxData, uint8_t bytes); 
int32_t spi1_read(uint8_t *pTxData, uint8_t *pRxData, uint8_t bytes);
#endif


