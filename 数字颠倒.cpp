#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* reverseStr(long long int n)
{
    char* pa = (char*)malloc(sizeof(char) * 100);
    memset(pa, '\0', sizeof(char) * 100);
    if (n == 0)
    {
        pa[0] = '0';
        return pa;
    }
    int index = 0;
    while (n)
    {
        pa[index++] = (n % 10) + '0';
        n /= 10;
    }
    return pa;
}
int main()
{
    long long int n = 0;
    scanf_s("%lld", &n);
    char* ret = reverseStr(n);
    printf("%s", ret);
    free(ret);
    ret = NULL;
    return 0;
}