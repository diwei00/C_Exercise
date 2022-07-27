#include <stdio.h>
#include <math.h>
//计算奇数起始的数
int oddNum(int n)
{
    int count = 0;
    int i = 1;
    while (1)
    {
        if (count == n)
        {
            return i;
        }
        i += 2;
        count++;
    }
}
int main()
{
    int n = 0;
    scanf_s("%d", &n);
    int sum = 0;
    int i = 0;
    for (i = 1; i < n; i++)
    {
        sum += i;
    }
    int flag = 0;
    int tmp = oddNum(sum);
    int sum2 = 0;
    while (1)
    {
        if (flag == 0)
        {
            printf("%d", tmp);
            flag = 1;
        }
        else
        {
            printf("+%d", tmp);
        }

        sum2 += tmp;
        tmp += 2;
        //计算结束的数
        if (sum2 == pow(n, 3))
        {
            break;
        }
    }

    return 0;
}