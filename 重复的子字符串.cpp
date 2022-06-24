#include <stdio.h>
#include <string.h>
bool repeatedSubstringPattern(char* s)
{
    int n = strlen(s);
    for (int i = 1; i < n; ++i)
    {
        //原串长度一定是字串长度的倍数，结合下面的break找字串
        if (n % i == 0)
        {
            bool flag = true;
            //遍历原字符串
            for (int j = i; j < n; ++j) 
            {
                if (s[j] != s[j - i])
                {
                    flag = false;
                    break;
                }
            }
            //for循环结束且没进入if语句即全部一样
            if (flag) 
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    char str[] = "abaaacabaaac";
    if (repeatedSubstringPattern(str))
    {
        printf("dvkj");
    }

    return 0;
}