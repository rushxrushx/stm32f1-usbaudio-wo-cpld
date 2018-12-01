#ifndef __LED_H
#define __LED_H	 
#include "sys.h"

//
//pos机板载LED灯驱动
//
#define LED0 PAout(0)// PA0
#define LED1 PAout(14)// PA14	

void LED_Init(void);//初始化

		 				    
#endif
