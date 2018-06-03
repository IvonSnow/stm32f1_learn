#include "led.h"
#include "usart.h"

void delay(void);

int main()
{

	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);// 设置中断优先级分组2
	Uart_Init(9600);	 //串口初始化为9600
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
