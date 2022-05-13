#ifndef STM324XX_H
#define STM324XX_H

/* RCC Registers */
#define RCC_BASE_ADDR		0x40023800

/* GPIO Registers */
#define GPIOA_BASE_ADDR		0x40020000
#define GPIOB_BASE_ADDR		0x40020400
#define GPIOC_BASE_ADDR		0x40020800
#define GPIOD_BASE_ADDR		0x40020C00
#define GPIOE_BASE_ADDR		0x40021000
#define GPIOF_BASE_ADDR		0x40021400
#define GPIOG_BASE_ADDR		0x40021800
#define GPIOH_BASE_ADDR		0x40021C00
#define GPIOI_BASE_ADDR		0x40022000
#define GPIOJ_BASE_ADDR		0x40022400
#define GPIOK_BASE_ADDR		0x40022800

#define PIN_0			0
#define PIN_1			1
#define PIN_2			2
#define PIN_3			3
#define PIN_4			4
#define PIN_5			5
#define PIN_6			6
#define PIN_7			7
#define PIN_8			8
#define PIN_9			9
#define PIN_10			10
#define PIN_11			11
#define PIN_12			12
#define PIN_13			13
#define PIN_14			14
#define PIN_15			15

#define GPIO_INPUT              0x00000000 /* Input Floating Mode */
#define GPIO_OUTPUT_PP          0x00000001 /* Output Push Pull Mode */
#define GPIO_OUTPUT_OD          0x00000011 /* Output Open Drain Mode */
#define GPIO_AF_PP              0x00000002 /* Alternate Function Push Pull Mode */
#define GPIO_AF_OD              0x00000012 /* Alternate Function Open Drain Mode */
#define GPIO_ANALOG             0x00000003 /* Analog Mode */

#define GPIO_SPEED_LOW    	0x00000000 /* IO works at 2 MHz, please refer to the product datasheet */
#define GPIO_SPEED_MED		0x00000001 /* range 12,5 MHz to 50 MHz, please refer to the product datasheet */
#define GPIO_SPEED_HIGH   	0x00000002 /* range 25 MHz to 100 MHz, please refer to the product datasheet  */
#define GPIO_SPEED_VERY_HIGH    0x00000003 /* range 50 MHz to 200 MHz, please refer to the product datasheet  */

typedef struct
{
	unsigned int MODER;
	unsigned int OTYPER;
	unsigned int OSPEEDR;
	unsigned int PUPDR;
	unsigned int IDR;
	unsigned int ODR;
	unsigned int BSRR;
	unsigned int LCKR;
	unsigned int AFRL;
	unsigned int AFRH;
} GPIORegDef;

#define GPIOD			((GPIORegDef *) GPIOD_BASE_ADDR)
#define GPIOA			((GPIORegDef *) GPIOD_BASE_ADDR)
typedef struct
{
	unsigned int CR;
	unsigned int PLLCFGR;
	unsigned int CFGR;
	unsigned int CIR;
	unsigned int AHB1RSTR;
	unsigned int AHB2RSTR;
	unsigned int AHB3RSTR;
	unsigned int : 32;
	unsigned int APB1RSTR;
	unsigned int APB2RSTR;
	unsigned int : 32;
	unsigned int : 32;
	unsigned int AHB1ENR;
	unsigned int AHB2ENR;
	unsigned int AHB3ENR;
	unsigned int : 32;
	unsigned int APB1ENR;
	unsigned int APB2ENR;
	unsigned int : 32;
	unsigned int : 32;
	unsigned int AHB1LPENR;
	unsigned int AHB2LPENR;
	unsigned int AHB3LPENR;
	unsigned int : 32;
	unsigned int APB1LPENR;
	unsigned int APB2LPENR;
	unsigned int : 32;
	unsigned int : 32;
	unsigned int BDCR;
	unsigned int CSR;
	unsigned int : 32;
	unsigned int SSCGR;
	unsigned int PLLI2SCFGR;
} RCCRegDef;

#define RCC			((RCCRegDef *) RCC_BASE_ADDR)

/* External Interrupt Registers */
#define	EXTI_BASE_ADDR		0x40013C00

#define GPIO_IT_RISING		0x00001100 /* Ext Int with Rising edge trigger detection */
#define GPIO_IT_FALLING		0x00002100 /* Ext Int Falling edge trigger detection */
#define GPIO_IT_RISING_FALLING	0x00003100 /* Ext Int Rising/Falling edge trigger detection */
#define GPIO_EVT_RISING		0x00001200 /* Ext Event Rising edge trigger detection */
#define GPIO_EVT_FALLING	0x00002200 /* Ext Event Falling edge trigger detection */
#define GPIO_EVT_RISING_FALLING	0x00003200 /* Ext Event Rising/Falling edge trigger detection */
#define GPIO_SWT_INT		0x00003300 /* Ext Event Rising/Falling edge trigger detection */

typedef struct
{
	unsigned int IMR;
	unsigned int EMR;
	unsigned int RTSR;
	unsigned int FTSR;
	unsigned int SWIER;
	unsigned int PR;
} EXTIRegDef;

#define EXTI			((EXTIRegDef *) EXTI_BASE_ADDR)

#endif
