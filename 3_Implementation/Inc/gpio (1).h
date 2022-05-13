#ifndef GPIO_H
#define GPIO_H

#include "stm324xx.h"

void config_gpiox(GPIORegDef *gpiox, int pin, int mode, int speed);
void gpiox_set(GPIORegDef *gpiox, int pin);
void gpiox_clear(GPIORegDef *gpiox, int pin);
void gpiox_write(GPIORegDef *gpiox, int pin, int value);
void gpiox_toggle(GPIORegDef *gpiox, int pin);

#endif
