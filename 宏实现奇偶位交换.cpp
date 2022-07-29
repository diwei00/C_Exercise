#include <stdio.h>
#define SWAPBIT(a) a = (((a & 0x555555) << 1) + ((a & 0xaaaaaa) >> 1))
//分别取出奇数位和偶数位，移位后相加
//利用位运算的特点

int main()
{
	int a = 10;
	SWAPBIT(a);
	printf("%d", a);
	return 0;
}