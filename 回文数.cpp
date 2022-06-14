#include <stdio.h>
#include <math.h>
#include <stdlib.h>
bool isPalindrome(int x) {
    int* pa = (int*)malloc(sizeof(int) * 64);
    int sz = 0;
    int index = 0;
    int n = x;
    while (n)
    {
        pa[index++] = (n % 10);
        sz++;
        n = n / 10;
    }
    int sum = 0;
    int i = 0;
    int sz2 = sz;
    for (i = 0; i < sz; i++)
    {
        sum += (pa[i] * pow(10, --sz2));
    }
    if (sum == x)
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
    int n = 121;
    if (isPalindrome(n))
    {
        printf("aaa");
    }
    else
    {
        printf("bbb");
    }
    
    return 0;
}