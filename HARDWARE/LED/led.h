#ifndef __LED_H
#define __LED_H	 
#include "sys.h"

//
//����LED������

#define LED0 PAout(1)
#define LED1 PAout(2)	
#define LED2 PAout(3)
#define LED3 PAout(4)

////�ͷ�CPLD��λ���ҵ�������ָʾ��
#define Gp_PLAY GPIO_SetBits(GPIOA, GPIO_Pin_4);GPIO_SetBits(GPIOB, GPIO_Pin_0);

//ʹ��CPLD��λ����Ϩ�𲥷�ָʾ��
#define Gp_STOP GPIO_ResetBits(GPIOA, GPIO_Pin_4);GPIO_ResetBits(GPIOB, GPIO_Pin_0);	

void LED_Init(void);//��ʼ��

		 				    
#endif
