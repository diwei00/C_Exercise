#include <stdio.h>
#include <string.h>
bool detectCapitalUse(char* word) 
{
    int len = strlen(word);
    int count = 0;
    int count2 = 0;
    int i = 0;
    //统计字母个数
    for (i = 0; i < len; i++)
    {
        if (word[i] >= 65 && word[i] <= 90 && word[0] >=65 && word[0] <= 90)
        {
            count++;
        }
        else if (word[i] >= 97 && word[i] <= 122)
        {
            count2++;
        }
        else
        {
            break;
        }
    }
    //根据题目条件来写
    if (count == len || count2 == len || count + count2 == len && count == 1)
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
    char str[] = "eetcodKe";
    if (detectCapitalUse(str))
    {
        printf("olk");
    }

    return 0;
}