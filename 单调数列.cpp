#include <stdio.h>
bool isMonotonic(int* nums, int numsSize) {
    //ֻ��һ������
    if (numsSize == 1)
    {
        return true;
    }
    int flag = 0;
    int i = 0;
    for (i = 0; i < numsSize - 1; i++)
    {
        if (nums[i + 1] != nums[i])
        {
            //�ҵ�һ�鲻һ�����������ݱȽϣ�ȷ���õ������ǵݼ�
            if (nums[i + 1] > nums[i])
            {
                flag = 1;
                break;
            }
            else
            {
                break;
            }
        }
    }
    //����ȫ�����
    if (i == numsSize - 1)
    {
        return true;
    }
    if (flag == 1)
    {
        for (i = 1; i < numsSize - 1; i++)
        {
            if (nums[i + 1] < nums[i])
            {
                break;
            }

        }
        if (i == numsSize - 1)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    else
    {
        for (i = 1; i < numsSize - 1; i++)
        {
            if (nums[i + 1] > nums[i])
            {
                break;
            }
        }
        if (i == numsSize - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return true;


}

int main()
{
    int arr[] = { 9,9,9,9,9 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    if (isMonotonic(arr, sz))
    {
        printf("aaa");
    }

    return 0;
}