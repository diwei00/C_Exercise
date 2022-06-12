#include <stdio.h>
int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    int size = numsSize;
    int count_move = 0;
    for (i = 0; i < numsSize - count_move; i++)
    {
        int count = 0;
        int j = 0;
        for (j = i; j < numsSize - count_move; j++)
        {
            if (nums[j] == nums[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        count_move += (count - 1);
        if (count != 1)
        {
            int k = i;
            while (k + count < numsSize)
            {
                nums[k + 1] = nums[k + count];
                k++;
                
            }
        }

        size -= (count - 1);
    }
    return size;

}
int main()
{
    int arr[] = { 0,0,1,1,1,2,2,3,3,4 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = removeDuplicates(arr, sz);
    printf("%d", ret);
    return 0;
}