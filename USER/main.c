//USB�첽���� ʵ��  
//����֮�� rush ����,��������ԭ�ӳ���(st����)����޸�
#include "led.h"
//#include "delay.h"
//#include "key.h"
#include "sys.h"
#include "usart.h"	 
#include "usb_lib.h"
#include "hw_config.h"
#include "usb_pwr.h"	 
#include "i2splayer.h"
 	 
int main(void)
{
//set clock	 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA |RCC_APB2Periph_GPIOB | RCC_APB2Periph_GPIOC | RCC_APB2Periph_AFIO, ENABLE);
//set jtag
 	GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable, ENABLE);
 
//	delay_init();	    	 //��ʱ������ʼ��	  
	NVIC_Configuration(); 	 //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(115200);	 	//���ڳ�ʼ��
 	LED_Init();			     //LED�˿ڳ�ʼ��
//	KEY_Init();	 	
	LED0=1;//��Դָʾ��
  
	usb_all_init();	//USBӲ�����ʼ��  
 	USB_Init();	//USB������ʼ�� 
	DAC_INIT();
	   			   
	printf("USB Connecting...");	 
	while(1)
	{

		if(bDeviceState==CONFIGURED)//USB�������ˣ�
		{
			LED1=1;					 
		}else
		{
 			LED1=0;		 
		}   
		
	};  										    			    
}



