#include <stdio.h>
#include <stdlib.h>
int findRepeatNumber(int* nums, int numsSize)
{
    int* arr = (int*)malloc(sizeof(int) * numsSize);
    int index = 0;
    int i = 0;
    //�Ȱѵ�һ���������ȥ
    arr[index++] = nums[0];
    int sz_arr = 1;//��¼����
    for (i = 1; i < numsSize; i++)
    {
        int j = 0;
        for (j = 0; j < sz_arr; j++)
        {
            if (nums[i] != arr[j])
            {
                ;
            }
            else
            {
                //��ͬ��ֱ�ӷ���
                return nums[i];
            }
        }
        //��������û���ظ������֣���������
        arr[index++] = nums[i];
        sz_arr++;
    }
    free(arr);
    arr = NULL;
    //û���ظ������ݷ���-1
    return -1;
}
int main()
{
    int arr[] = { 1,2,3,4,5,5,3,6,9,8 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = findRepeatNumber(arr, sz);
    printf("%d", ret);
    return 0;
}