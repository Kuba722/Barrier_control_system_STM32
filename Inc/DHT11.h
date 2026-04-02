/*
 * DHT11.h
 *
 *  Created on: Dec 14, 2024
 *      Author: kubal
 */

#include<stdint.h>

#include "stm32l4xx_hal.h"

#ifndef INC_DHT11_H_
#define INC_DHT11_H_

#define DHT11_PORT GPIOB
#define DHT11_PIN GPIO_PIN_9

extern uint8_t RHI, RHD, TCI, TCD, SUM;
extern float tCelsius, tFahrenheit, RH;

void microDelay (uint16_t delay);
uint8_t DHT11_Start (void);
uint8_t DHT11_Read (void);






#endif /* INC_DHT11_H_ */
