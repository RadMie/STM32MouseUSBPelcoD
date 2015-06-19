/**********************************************************************************
 **										USART									 **
 **********************************************************************************/


#include "usart.h"
#include "stm32f10x.h"
#include "stm32f10x_conf.h"

//inicjalizacja wszystkich usartów
void all_usart_init(void) {

	usart_1_init();
	usart_2_init();
	usart_3_init();
	usart_4_init();
	usart_5_init();

}

//inicjalizacja USART 1
void usart_1_init() {

	GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOA | RCC_APB2Periph_USART1,ENABLE);

	//PA9 - Tx , PA10 - Rx
	  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_Init(GPIOA, &GPIO_InitStructure);

	  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_Init(GPIOA, &GPIO_InitStructure);

	  USART_InitStructure.USART_BaudRate = USART1_SPEED;
	  USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	  USART_InitStructure.USART_StopBits = USART_StopBits_1;
	  USART_InitStructure.USART_Parity = USART_Parity_No;
	  USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	  USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;

	  USART_Init(USART1, &USART_InitStructure);
	  USART_ITConfig(USART1, USART_IT_RXNE, ENABLE);
	  USART_ITConfig(USART1, USART_IT_TXE, ENABLE);
	  USART_ClearFlag(USART1,USART_FLAG_TC);
	  USART_Cmd(USART1, ENABLE);

}

//inicjalizacja USART 2
void usart_2_init() {

	GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	RCC_APB1PeriphClockCmd( RCC_APB2Periph_GPIOA | RCC_APB1Periph_USART2,ENABLE);

	//PA2 - Tx , PA3 - Rx
	  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_Init(GPIOA, &GPIO_InitStructure);

	  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_Init(GPIOA, &GPIO_InitStructure);

	  USART_InitStructure.USART_BaudRate = USART2_SPEED;
	  USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	  USART_InitStructure.USART_StopBits = USART_StopBits_1;
	  USART_InitStructure.USART_Parity = USART_Parity_No;
	  USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	  USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;

	  USART_Init(USART2, &USART_InitStructure);
	  USART_ITConfig(USART2, USART_IT_RXNE, ENABLE);
	  USART_ITConfig(USART2, USART_IT_TXE, ENABLE);
	  USART_ClearFlag(USART2,USART_FLAG_TC);
	  USART_Cmd(USART2, ENABLE);

}

//inicjalizacja USART 3
void usart_3_init() {

	GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	RCC_APB1PeriphClockCmd( RCC_APB2Periph_GPIOB | RCC_APB1Periph_USART3,ENABLE);

	//PB10 - Tx , PB11 - Rx
	  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_Init(GPIOB, &GPIO_InitStructure);

	  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_Init(GPIOB, &GPIO_InitStructure);

	  USART_InitStructure.USART_BaudRate = USART3_SPEED;
	  USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	  USART_InitStructure.USART_StopBits = USART_StopBits_1;
	  USART_InitStructure.USART_Parity = USART_Parity_No;
	  USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	  USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;

	  USART_Init(USART3, &USART_InitStructure);
	  USART_ITConfig(USART3, USART_IT_RXNE, ENABLE);
	  USART_ITConfig(USART3, USART_IT_TXE, ENABLE);
	  USART_ClearFlag(USART3,USART_FLAG_TC);
	  USART_Cmd(USART3, ENABLE);

}

//inicjalizacja USART 4
void usart_4_init() {

	GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	RCC_APB1PeriphClockCmd( RCC_APB2Periph_GPIOB | RCC_APB1Periph_UART4,ENABLE);

	//PC10 - Tx , PC11 - Rx
	  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_Init(GPIOC, &GPIO_InitStructure);

	  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_Init(GPIOC, &GPIO_InitStructure);

	  USART_InitStructure.USART_BaudRate = USART4_SPEED;
	  USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	  USART_InitStructure.USART_StopBits = USART_StopBits_1;
	  USART_InitStructure.USART_Parity = USART_Parity_No;
	  USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	  USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;

	  USART_Init(UART4, &USART_InitStructure);
	  USART_ITConfig(UART4, USART_IT_RXNE, ENABLE);
	  USART_ITConfig(UART4, USART_IT_TXE, ENABLE);
	  USART_ClearFlag(UART4,USART_FLAG_TC);
	  USART_Cmd(UART4, ENABLE);

}

//inicjalizacja USART 5
void usart_5_init() {

	GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	RCC_APB1PeriphClockCmd( RCC_APB2Periph_GPIOD | RCC_APB2Periph_GPIOC | RCC_APB1Periph_UART5,ENABLE);

	//PC12 - Tx , PD2 - Rx
	  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_Init(GPIOC, &GPIO_InitStructure);

	  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_Init(GPIOD, &GPIO_InitStructure);

	  USART_InitStructure.USART_BaudRate = USART5_SPEED;
	  USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	  USART_InitStructure.USART_StopBits = USART_StopBits_1;
	  USART_InitStructure.USART_Parity = USART_Parity_No;
	  USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	  USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;

	  USART_Init(UART5, &USART_InitStructure);
	  USART_ITConfig(UART5, USART_IT_RXNE, ENABLE);
	  USART_ITConfig(UART5, USART_IT_TXE, ENABLE);
	  USART_ClearFlag(UART5,USART_FLAG_TC);
	  USART_Cmd(UART5, ENABLE);

}

//wysy³anie ³añcucha znaków na USART 1
void usart_1_print(const char *c)
{
	while (*c) {
		while (USART_GetFlagStatus(USART1, USART_FLAG_TC) == RESET){}
		USART_SendData( USART1, *c);
		c++;
	}
}
//wysy³anie ³añcucha znaków na USART 2
void usart_2_print(const char *s) {

	while (*s) {
		while (USART_GetFlagStatus(USART2, USART_FLAG_TC) == RESET){}
				USART_SendData( USART2, *s);
				s++;
	}
}

void usart_3_print(const char *d) {

	while (*d) {
		while (USART_GetFlagStatus(USART3, USART_FLAG_TXE) == RESET){}
				USART_SendData( USART3, *d);
				d++;
	}
}
