//ALIENTEK 即付宝POS机 STM32开发板实验51
//USB异步声卡 实验  
//数码之家 rush 制作修改
#include "led.h"
#include "delay.h"
//#include "key.h"
#include "sys.h"
#include "usart.h"	 
#include "usb_lib.h"
#include "hw_config.h"
#include "usb_pwr.h"	 

#include "i2splayer.h"


 	 
int main(void)
{	 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA |RCC_APB2Periph_GPIOB | RCC_APB2Periph_GPIOC | RCC_APB2Periph_AFIO, ENABLE);
 	GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable, ENABLE);//JTAG->SWD
 
	delay_init();	    	 //延时函数初始化	  
	NVIC_Configuration(); 	 //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uart_init(115200);	 	//串口初始化
 	LED_Init();			     //LED端口初始化
//	KEY_Init();	 	
  
	//USB配置
	usb_all_init();  
 	USB_Init();	 
	DAC_INIT();
//	LED0=1;

	   			   
 //	printf("USB Connecting...");	 
	while(1)
	{
/*		if(bDeviceState==CONFIGURED)//USB连接上了？
		{
			LED0=1;							 
			//printf("USB Connected"); 
		}else
		{
 			LED0=0;							
			//printf("USB DisConnected");	 
		}	    
		LED1=!LED1;
*/
//		delay_ms(500);

		
	};  										    			    
}



