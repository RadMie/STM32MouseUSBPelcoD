/********************************************************************************
 **								      RS-485	   							   **
 ********************************************************************************/

#include "rs485.h"
#include "stm32f10x.h"
#include "stm32f10x_conf.h"
#include "USART/usart.h"

void rs_485_init(void) {

	usart_3_init();

	//inicjalizacja rs-485-dir
	GPIO_InitTypeDef GPIO_InitStructure;
	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOB , ENABLE);

	GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_2;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOB, &GPIO_InitStructure);


}

void rs_485_dir_send() {

	GPIO_SetBits(GPIOB , GPIO_Pin_2);

}

void rs_485_dir_receiving() {

	GPIO_ResetBits(GPIOB , GPIO_Pin_2);

}



void rs_485_send_data(unsigned char Sync_Bajt , unsigned char Camera_Address_Bajt , unsigned char Command_1_Bajt , unsigned char Command_2_Bajt ,
		unsigned char Data_1_Bajt , unsigned char Data_2_Bajt , unsigned char Checksum_Bajt) {

	rs_485_dir_send();

	while (USART_GetFlagStatus(USART3, USART_FLAG_TXE) == RESET){}
		USART_SendData( USART3, Sync_Bajt);

		delay_ms1(5);
		while (USART_GetFlagStatus(USART3, USART_FLAG_TXE) == RESET){}
		USART_SendData( USART3, Camera_Address_Bajt);
		delay_ms1(5);

		while (USART_GetFlagStatus(USART3, USART_FLAG_TXE) == RESET){}
		USART_SendData( USART3, Command_1_Bajt);

		delay_ms1(5);
		while (USART_GetFlagStatus(USART3, USART_FLAG_TXE) == RESET){}
		USART_SendData( USART3, Command_2_Bajt);
		delay_ms1(5);

		while (USART_GetFlagStatus(USART3, USART_FLAG_TXE) == RESET){}
		USART_SendData( USART3, Data_1_Bajt);
		delay_ms1(5);

		while (USART_GetFlagStatus(USART3, USART_FLAG_TXE) == RESET){}
		USART_SendData( USART3, Data_2_Bajt);

		delay_ms1(5);
		while (USART_GetFlagStatus(USART3, USART_FLAG_TXE) == RESET){}
		USART_SendData( USART3, Checksum_Bajt);
	delay_ms1(5);


}
