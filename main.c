#include "led.h"

void delay(void);

int main()
{
	Led0_Init();
	while(1){
		Led0_Blink();
		delay();
	}
	return 0;
}

void delay(void)
{
	int i;
	for(i=0;i<1000000;i++);
}
