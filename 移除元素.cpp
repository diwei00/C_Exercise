
#include <stdio.h>
int removeElement(int* nums, int numsSize, int val) 
{
    //������������
    //�Ѳ���ȵ����ֶ��Ƶ�����ǰ�棬ֻ��ӡǰ�������
    int left = 0;

    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            nums[left] = nums[i];
            left++;
        }
    }
    return left;

}


int main()
{
    int arr[] = { 3,2,2,3,3,5 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = removeElement(arr, sz, 3);
    int i = 0;
    for (i = 0; i < ret; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}