# STM32F103-USBAudio-Async
async UAC1.0 demo for STM32F103Rx

一般来说大家没条件购买TAS1020进行实验，Rush将程序移植到大家最熟悉的STM32平台，即付宝蓝牙POS上。

声卡参数

USB2.0 FullSpeed，UAC1.0

标准CD音质，由于stm32f103系列硬件限制无法支持更大的数据包

DAC播放使用stm32f103内部PLL时钟，关闭MCLK输出，尽量保证有音能响qwq

UAC1.0用异步反馈方式

测试支持win8.1，理论支持win7/8/10全系列，WinXP兼容性未知。

测试支持WASAPI event，逻辑分析仪实测精密播放。


感谢正点原子提供的例程，以及ST提供的例程
