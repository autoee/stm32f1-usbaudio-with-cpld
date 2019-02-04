#include "led.h"

//��ʼ��������pos������PA0(��ɫ)��PA14(��ɫ)Ϊ�����.��ʹ���������ڵ�ʱ��


//�޸ļ����Լ�����PCB		    
//��ʼ��PA1-PA4���ӵ���ɫLED
void LED_Init(void)
{ 
	GPIO_InitTypeDef  GPIO_InitStructure;

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;		 //IO���ٶ�
		
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4;	//LED :PA1-4
	GPIO_Init(GPIOA, &GPIO_InitStructure);					 //LED: PORT A

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;	//RESET: PB0
	GPIO_Init(GPIOB, &GPIO_InitStructure);		//RESET: PORT B

}
 
