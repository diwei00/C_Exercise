#include <stdio.h>
//解法1
bool hasAlternatingBits(int n)
{
    int i = 0;
    int arr[32] = { 0 };
    for (i = 0; i < 32; i++)
    {
        arr[i] = (n >> i) & 1;
    }
    for (i = 31; i > 0; i--)
    {
        if (arr[i] != 0)
        {
            break;
        }
    }
    int left = 0;
    int right = 1;
    while (right <= i)
    {
        if (arr[left] != arr[right])
        {
            left++;
            right++;
        }
        else
        {
            return false;
        }
    }
    return true;
}

//解法二
bool hasAlternatingBits2(int n)
{
    while (n)
    {
        int tmp = (n & 1);
        n >>= 1;
        if (tmp == (n & 1))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n = 0;
    scanf_s("%d", &n);
    hasAlternatingBits2(n);
    if (hasAlternatingBits(n))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}