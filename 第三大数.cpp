#include <stdio.h>
#include <stdlib.h>
int cmp(const void* e1, const void* e2)
{
    return *(long int*)e2 - *(long int*)e1;
}
void swap(int* a,int* b)
{
    long int tmp = *a;
    *a = *b;
    *b = tmp;
}
int thirdMax(int* nums, int numsSize) {
    //���������������ð�������Ž���

    /*qsort(nums, numsSize, sizeof(int), cmp);*/

    int count = 0;
    int i = 0;
    for (i = 0; i < numsSize - 1; i++)
    {
        int j = 0;
        for (j = 0; j < numsSize - 1 - i; j++)
        {
            if (nums[j] < nums[j + 1])
            {
                swap(&nums[j], &nums[j + 1]);
            }
        }
    }
    for (i = 0; i < numsSize; i++)
    {
        if (i + 1 <= numsSize - 1)
        {
            if (nums[i] > nums[i + 1])
            {
                count++;
            }
            //�ҵ��ڶ���������
            if (count == 2)
            {
                return nums[i + 1];
            }
        }
    }
    //û�е��������ݣ����������
    return nums[0];

}
int main()
{

    int arr[] = {3,2,1};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = thirdMax(arr, sz);
    printf("%d", ret);
    return 0;
}