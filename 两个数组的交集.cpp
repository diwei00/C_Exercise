#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void bubble_sort(int* arr, int sz)
{
    int i = 0;
    for (i = 0; i < sz - 1; i++)
    {
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* pa = (int*)malloc(sizeof(int) * (nums1Size > nums2Size ? nums1Size : nums2Size));
    memset(pa, 0, (nums1Size > nums2Size ? nums1Size : nums2Size));
    int sz = 0;
    int index = 0;
    bubble_sort(nums1, nums1Size);
    bubble_sort(nums2, nums2Size);
    *returnSize = 0;
    int i = 0;
    int j = 0;
    while (i < nums1Size && j < nums2Size)
    {
        if (nums1[i] == nums2[j])
        {
            pa[index++] = nums1[i];
            (*returnSize)++;
            i++;
            j++;
        }
        else
        {
            if (nums1[i] > nums2[j])
            {
                j++;
            }
            else
            {
                i++;

            }
        }
    }
    return pa;
}
int main()
{
    //排序，双指针法
    int arr1[] = { 1,2,2,1 };
    int sz1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = { 1,1 };
    int sz2 = sizeof(arr2) / sizeof(arr2[0]);
    //作用，确定开辟数组内的元素
    int r_sz = 0;
    int* pa = intersect(arr1, sz1, arr2, sz2, &r_sz);
    int i = 0;
    for (i = 0; i < r_sz; i++)
    {
        printf("%d ", pa[i]);
    }

    return 0;
}