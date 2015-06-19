#ifndef __USART_H
#define __USART_H

void all_usart_init(void);
void usart_1_init(void);
void usart_2_init(void);
void usart_3_init(void);
void usart_4_init(void);
void usart_5_init(void);
void usart_1_print(const char *c);
void usart_2_print(const char *s);
void usart_3_print(const char *d);



//prêdkoœci usart
//#define USART1_SPEED	2400
//#define USART1_SPEED	4800
#define USART1_SPEED	9600
//#define USART1_SPEED	14400
//#define USART1_SPEED	19200
//#define USART1_SPEED	28800
//#define USART1_SPEED	38400
//#define USART1_SPEED	57600
//#define USART1_SPEED	115200

//#define USART2_SPEED	2400
//#define USART2_SPEED	4800
//#define USART2_SPEED	9600
//#define USART2_SPEED	14400
//#define USART2_SPEED	19200
//#define USART2_SPEED	28800
//#define USART2_SPEED	38400
//#define USART2_SPEED	57600
#define USART2_SPEED	115200

//#define USART3_SPEED	2400
//#define USART3_SPEED	4800
#define USART3_SPEED	9600
//#define USART3_SPEED	14400
//#define USART3_SPEED	19200
//#define USART3_SPEED	28800
//#define USART3_SPEED	38400
//#define USART3_SPEED	57600
//#define USART3_SPEED	115200

//#define USART4_SPEED	2400
//#define USART4_SPEED	4800
//#define USART4_SPEED	9600
//#define USART4_SPEED	14400
//#define USART4_SPEED	19200
//#define USART4_SPEED	28800
//#define USART4_SPEED	38400
//#define USART4_SPEED	57600
#define USART4_SPEED	115200

//#define USART5_SPEED	2400
//#define USART5_SPEED	4800
//#define USART5_SPEED	9600
//#define USART5_SPEED	14400
//#define USART5_SPEED	19200
//#define USART5_SPEED	28800
//#define USART5_SPEED	38400
//#define USART5_SPEED	57600
#define USART5_SPEED	115200


#endif /* __USART_H */
