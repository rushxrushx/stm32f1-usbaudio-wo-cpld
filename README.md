# STM32F103-USBAudio (without CPLD)

This is an async usb audio 1.0 demo for STM32F103. I2s clocks is generate internally using stm32's pll. No CPLD needed.
because of small 512byte PMA memory ,it can only support CD quality audio format.
Test support windows8 and debian9,winxp is not recommaded.

usb audio 1.0 异步声卡，无需CPLD版本
仅支持CD音质，硬件决定无法提升到更高音质
测试支持win8.1，不建议用WinXP。
测试支持WASAPI event，逻辑分析仪实测无损播放。
感谢正点原子提供的例程，以及ST提供的例程
