#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void findSingleDog(int* arr, int n, int* p1, int* p2)
{
	int flag = 1;
	int* pa = (int*)malloc(sizeof(int) * 100);
	memset(pa, 0, sizeof(int) * 100);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		pa[arr[i]]++;
	}
	for (i = 0; i < 100; i++)
	{
		if (pa[i] == 1 && flag == 1)
		{
			*p1 = i;
			flag = 0;
		}
		if (pa[i] == 1)
		{
			*p2 = i;
		}
	}
	free(pa);
	pa = NULL;
}
int main()
{
	int arr[] = { 9,2,5,2,6,8,6,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int p1 = 0;
	int p2 = 0;
	findSingleDog(arr, sz, &p1, &p2);
	printf("%d %d", p1, p2);



	return 0;
}