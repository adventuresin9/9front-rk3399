# 9front-rk3399
experimental 9front kernel fo rthe rockchip rk3399

Tested on the RockPro64

What works;
the 4 a53 cores
UART



The 2 a72 cores are not turned on.  There also seems to be an issue of a stuck interrupt when the reset button on the RockPro64 is pressed.  The board will restart, and if the kernel is loaded again, /dev/sysstat  will show millions of interrupts on cpu0.

For u-boot
load kernel to 0x02000000
load plan9.ini to 0x01900000

This kernel is also a test of modified mmu code.  This runs 42 bit virtual addresses instead of 34 bit.
