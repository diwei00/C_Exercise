#include <stdio.h>
//int main()
//{
//    //暴力法
//    long long n, m;
//    scanf("%lld %lld", &n, &m);
//    //求最大公约数
//    long long max = n > m ? m : n;//假设n和m的较小值为最大公约数
//    while (1)
//    {
//        if (n % max == 0 && m % max == 0)
//        {
//            break;
//        }
//        max--;
//    }
//    //最小公倍数
//    long long min = n > m ? n : m; //假设n和m的较大值为最小公倍数
//    while (1)
//    {
//        if (min % n == 0 && min % m == 0)
//        {
//            break;
//        }
//        min++;
//    }
//    printf("%lld", min + max);
//    return 0;
//}
//

int main()
{
    long long n, m;
    scanf_s("%lld %lld", &n, &m);

    long long max = 0;
    long long min = 0;
    long long tmp = 0;

    long long a = n;
    long long b = m;

    //辗转相除法
    while (tmp = n % m)
    {
        n = m;
        m = tmp;
    }
    max = m;

    min = a * b / max;
    printf("%lld", min + max);
    return 0;
}