#ifndef USART_H_
#define USART_H_

void USART_init(unsigned long Baud);
void USART_send_data(unsigned char data);
unsigned char USART_receive_data(void);
void USART_send_string(char *ptr);

#endif