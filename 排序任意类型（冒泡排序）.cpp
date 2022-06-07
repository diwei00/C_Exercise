#include <stdio.h>
typedef struct stu
{
	char name[20];
	int age;
	char six[4];
}stu;
int cmp(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
int cmp2(const void* e1, const void* e2)
{
	return ((stu*)e1)->age - ((stu*)e2)->age;
}
void swap(char* a, char* b, int width)
{
	while (width--)
	{
		char tmp = *a;
		*a = *b;
		*b = tmp;
		a++;
		b++;
	}
}
void bubble_sort(void* arr, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
			{
				swap((char*)arr + j * width, (char*)arr + (j + 1) * width, width);
			}
		}
	}
}
int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	stu arr2[] = { {"wuhao",20,"ÄÐ"},{"wuxi",18,"Å®"},{"wu",8,"ÄÐ"} , {"w",2,"ÎÞ"} };
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	bubble_sort(arr, sz, sizeof(int), cmp);
	bubble_sort(arr2, sz2, sizeof(arr2[0]), cmp2);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}