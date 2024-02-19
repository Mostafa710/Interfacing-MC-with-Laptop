#include "USART.h"
#include "LCD.h"

int main(void)
{
	unsigned char data,counter=0;
	USART_init(9600);
	LCD_init();
    while(1)
    {
		data = USART_receive_data();
		counter++;
		if(counter == 17)
		{
			LCD_move_cursor(2,1);
		}
		else if(counter == 33)
		{
			counter = 1;
			LCD_clear_screen();
		}
		LCD_send_char(data);
    }
}