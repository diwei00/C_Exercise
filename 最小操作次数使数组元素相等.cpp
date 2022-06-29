#include <stdio.h>
#include <stdlib.h>
int cmp(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}
//����˼ά
//��׷ǰ�������   ��Ч��  ��׷ǰ��ǰ����
//��Ч��һ����һ������1�������Ϊ��С������
int minMoves(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int sum = 0;
    int i = 0;
    for (i = 1; i < numsSize; i++)
    {
        sum += nums[i] - nums[0];
    }
    return sum;


}
int main()
{

    int arr[] = { 1,1000000000 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = minMoves(arr, sz);
    printf("%d", ret);
    return 0;
}