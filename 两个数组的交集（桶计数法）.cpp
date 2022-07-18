#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) 
{
    int* pa1 = (int*)malloc(sizeof(int) * 1001);
    memset(pa1, 0, sizeof(int) * 1001);
    int* pa2 = (int*)malloc(sizeof(int) * 1001);
    memset(pa2, 0, sizeof(int) * 1001);
    int* pa3 = (int*)malloc(sizeof(int) * 500);

    int i = 0;
    for (i = 0; i < nums1Size; i++)
    {
        pa1[nums1[i]]++;
    }
    for (i = 0; i < nums2Size; i++)
    {
        pa2[nums2[i]]++;
    }
    int index = 0;
    for (i = 0; i < 1001; i++)
    {
        if (pa1[i] != 0 && pa2[i] != 0)
        {
            pa3[index++] = i;
        }
    }
    *returnSize = index;
    return pa3;

}
int main()
{
    int arr1[] = { 1,2,3,5,6 };
    int arr2[] = { 2,3,6,9 };
    int sz1 = sizeof(arr1) / sizeof(arr2[0]);
    int sz2 = sizeof(arr2) / sizeof(arr2[0]);
    int num = 0;
    int* pa = intersection(arr1, sz1, arr2, sz2, &num);
    int i = 0;
    for (i = 0; i < num; i++)
    {
        printf("%d ", pa[i]);
    }

    return 0;
}