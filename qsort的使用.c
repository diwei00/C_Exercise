#include <stdio.h>
#include <stdlib.h>
typedef struct stu
{
	int age;
	char name[20];
	char sex[4];
}stu;
int cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp2(const void* e1, const void* e2)
{
	return ((stu*)e1)->age - ((stu*)e2)->age;
}

int main()
{

	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(int), cmp);

	stu arr2[3] = { {20,"wuhao","ÄÐ"},{18,"wuxi","Å®"},{16,"wu","ÄÐ"} };
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	qsort(arr2, sz2, sizeof(arr2[0]), cmp2);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}