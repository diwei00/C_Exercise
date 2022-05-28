#include <stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int arr[100] = { 0 };//桶初始化
	int tmp = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &tmp);
		arr[tmp]++;//计数，每个数字在对应下标下加加
	}
	int find = 0;
	scanf_s("%d", &find);
	printf("%d", arr[find]);

	return 0;
}