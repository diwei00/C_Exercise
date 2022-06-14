#include <stdio.h>
#include <stdlib.h>
int addDigits(int num) {
    if (num == 0)
    {
        return num;
    }
    int* pa = (int*)malloc(sizeof(int) * 80);
    int n = 0;
    int flag = 1;
    int sum = 0;
    //循环去计算各位之和，直到小于10就跳出
    while (sum >= 10 || sum == 0)
    {

        int sz = 0;
        int index = 0;
        if (flag == 1)
        {
            n = num;
        }
        else
        {
            n = sum;
            sum = 0;
        }

        while (n)
        {
            pa[index++] = (n % 10);
            sz++;
            n = n / 10;
        }
        int i = 0;
        for (i = 0; i < sz; i++)
        {
            sum += pa[i];
        }
        flag = 0;
    }
    return sum;

}
int main()
{
    int n = 38;
    int ret = addDigits(n);
    printf("%d", ret);
    return 0;
}