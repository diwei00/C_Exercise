#include <string.h>
#include <stdio.h>
//双指针法遍历字符串
int countSegments(const char* s) {
    const char* str = s;
    const char* str2 = s;
    int count = 0;
    int count2 = 0;
    while (*str != '\0')
    {
        //单词第一个字母就加，然后跳过整个单词，
        if (*str != ' ')
        {
            count++;
        }
        str2 = str;
        count2 = 0;
        //负责计算每个单词的个数
        while (*str2 != ' ' && *str2 != '\0')
        {
            count2++;
            str2++;
        }
        if (*str != ' ')
        {
            //如果是字母就跳过整个字母
            str += count2;
        }
        else
        {
            //如果有多个空格，就往后找不是空格的字母
            str++;
        }


    }
    return count;

}
int main()
{
    int ret = countSegments("Hello, my name is John");
    printf("%d", ret);

	return 0;
}