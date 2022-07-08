#include <stdio.h>
int max(int a, int b)
{
    return a > b ? a : b;
}
int binaryGap(int n) 
{
    //很巧妙的方法
    int i = 0;
    //用p记录
    int p = -1;
    int index = 0;
    for (i = 1; i < 32; i++)
    {
        if (n & 1 == 1)
        {
            if (p != -1)
            {
                index = max(index, i - p);
            }
            p = i;
        }
        n >>= 1;
    }
    return index;

}
int main()
{
    int ret = binaryGap(22);
    printf("%d", ret);
    return 0;
}