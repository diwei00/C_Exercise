#include <stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int arr[100] = { 0 };//Ͱ��ʼ��
	int tmp = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &tmp);
		arr[tmp]++;//������ÿ�������ڶ�Ӧ�±��¼Ӽ�
	}
	int find = 0;
	scanf_s("%d", &find);
	printf("%d", arr[find]);

	return 0;
}