#include <stdio.h>
//int main()
//{
//    //������
//    long long n, m;
//    scanf("%lld %lld", &n, &m);
//    //�����Լ��
//    long long max = n > m ? m : n;//����n��m�Ľ�СֵΪ���Լ��
//    while (1)
//    {
//        if (n % max == 0 && m % max == 0)
//        {
//            break;
//        }
//        max--;
//    }
//    //��С������
//    long long min = n > m ? n : m; //����n��m�Ľϴ�ֵΪ��С������
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

    //շת�����
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