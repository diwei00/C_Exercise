#include <stdio.h>
#define SWAPBIT(a) a = (((a & 0x555555) << 1) + ((a & 0xaaaaaa) >> 1))
//�ֱ�ȡ������λ��ż��λ����λ�����
//����λ������ص�

int main()
{
	int a = 10;
	SWAPBIT(a);
	printf("%d", a);
	return 0;
}