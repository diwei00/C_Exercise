#include <stdio.h>
void print(int a)
{
	int i = 0;
	printf("奇数位");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (a >> i) & 1);
	}
	printf("\n");
	printf("偶数位");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (a >> i) & 1);
	}
}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	print(a);
	return 0;
}