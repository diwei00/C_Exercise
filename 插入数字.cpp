<<<<<<< HEAD
#include <stdio.h>
void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void Bubble_Sort(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}
void Print(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}
}
void Inter_Num(int* arr, int n, int x)
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		if (arr[i] > x)
		{
			break;
		}
	}
	int j = 0;
	for (j = n - 1; j >= i; j--)
	{
		arr[j] = arr[j - 1];
	}
	arr[i] = x;
}
int main()
{
	int arr[10] = { 9,8,4,2,7,5,1,3,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_Sort(arr, sz - 1);
	Inter_Num(arr, sz,0);
	Print(arr, sz);
	return 0;
}

