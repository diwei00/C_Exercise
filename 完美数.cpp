#include <stdio.h>
bool checkPerfectNumber(int num) 
{
    int i = 0;
    int sum = 0;
    //���Ӳ���������ֵ�һ��
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
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
    int num = 0;
    scanf_s("%d", &num);
    int tmp = checkPerfectNumber(num);
    if (tmp)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
	return 0;
}