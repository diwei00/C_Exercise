#include <stdlib.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int j = 0;
    int k = 0;
    if (n == 0)
    {
        return;
    }
    if (m == 0)
    {
        while (j < n)
        {
            nums1[k++] = nums2[j++];
        }
        return;
    }
    int* pa = (int*)malloc(sizeof(int) * m);
    int i = 0;
    for (i = 0; i < m; i++)
    {
        pa[i] = nums1[i];
    }

    int index = 0;
    while (j < n && index < m)
    {
        if (nums2[j] < pa[index])
        {
            nums1[k++] = nums2[j++];
        }
        else
        {
            nums1[k++] = pa[index++];
        }
    }

    while (j < n)
    {
        nums1[k++] = nums2[j++];
    }
    while (index < m)
    {
        nums1[k++] = pa[index++];
    }
}

int main()
{

    int arr1[] = { 4,0,0,0,0,0 };
    int arr2[] = { 1,2,3,5,6 };
    merge(arr1, 6, 1, arr2, 5, 5);
    return 0;
}