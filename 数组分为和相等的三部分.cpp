#include <stdio.h>
bool canThreePartsEqualSum(int* arr, int arrSize) {
    int sum = 0;
    int count2 = 0;
    int i = 0;
    for (i = 0; i < arrSize; i++)
    {
        if ((sum += arr[i]) == 0)
        {
            count2++;
        }
    }
    //不能整除直接返回假
    if (sum % 3 != 0)
    {
        return false;
    }
    int sum2 = (sum / 3);

    int count = 0;
    int sum3 = 0;
    for (i = 0; i < arrSize; i++)
    {
        sum3 += arr[i];
        if (sum3 == sum2)
        {
            sum3 = 0;
            count++;
            //count只要等于3，后面就算有数字，和也为0
            if (count == 3)
            {
                break;
            }
        }
    }
    if (count == 3)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int arr[] = { 0,2,1,-6,6,7,9,-1,2,0,1 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    if (canThreePartsEqualSum(arr, sz))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    return 0;
}