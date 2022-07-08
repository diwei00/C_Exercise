#include <stdio.h>
bool isPrimeNumber(int n)
{
    //1不是质数
    if (n < 2)
    {
        return false;
    }
    int i = 0;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int countPrimeSetBits(int left, int right) 
{
    int returnCount = 0;
    int i = 0;
    for (i = left; i <= right; i++)
    {
        int count = 0;
        int j = 0;
        //二进制位1的个数
        for (j = 0; j < 32; j++)
        {
            if (((i >> j) & 1) == 1)
            {
                count++;
            }
        }
        if (isPrimeNumber(count))
        {
            returnCount++;
        }
    }
    return returnCount;
}

int main()
{
    int ret = countPrimeSetBits(6, 11);
    printf("%d", ret);

    return 0;
}