#include "led.h"

/**********************************
*Name: Led0_Init(void)
*Function: led init  PA8 
***********************************/
void Led0_Init(void)
{
	GPIO_InitTypeDef GPIOA_InitStruct;
	GPIO_InitTypeDef GPIOD_InitStruct;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOD, ENABLE);	 

	GPIOA_InitStruct.GPIO_Pin=GPIO_Pin_8;
	GPIOA_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIOA_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP;
	

	GPIOD_InitStruct.GPIO_Pin=GPIO_Pin_2;
	GPIOD_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIOD_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP;
	
	GPIO_Init(GPIOA, &GPIOA_InitStruct);
	GPIO_Init(GPIOD, &GPIOD_InitStruct);
	
	GPIO_SetBits(GPIOA, GPIO_Pin_8);
	GPIO_SetBits(GPIOD, GPIO_Pin_2);
}
/**********************************
*Name: Led0_Off
*Function: led on
***********************************/
void Led0_On(void)
{
	GPIO_ResetBits(GPIOA, GPIO_Pin_8);   
}

/**********************************
*Name: Led0_Off
*Function: led off
***********************************/
void Led0_Off(void)
{
	GPIO_SetBits(GPIOA, GPIO_Pin_8);		  
}

/**********************************
*Name: Led0_Blink
*Function:  Led0 Blink
***********************************/
void Led0_Blink(void)
{
	if ( GPIO_ReadOutputDataBit(GPIOA, GPIO_Pin_8) )
		GPIO_ResetBits(GPIOA, GPIO_Pin_8); 
	else
		GPIO_SetBits(GPIOA, GPIO_Pin_8);		
}
