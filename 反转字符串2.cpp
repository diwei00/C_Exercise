#include <string.h>
#include <stdio.h>
char* reverseStr(char* s, int k) {
    int len = strlen(s);
    char* str = s;
    int tmp = 0;
    int count = 0;
    int right = 0;
    //控制结束条件
    while (*(str + tmp + 1) != '\0')
    {
        int left = 2 * k * count;
        right = left + k - 1;
        tmp = right;
        //更据题目进行右区间的修者
        if (len - left < k)
        {
            right = len - 1;
            //控制结束条件
            tmp = right;

        }
        if (len - left < 2 * k && len - left >= k)
        {
            right = left + k - 1;
            tmp = right;
        }
        while (left < right)
        {
            char tmp2 = s[left];
            s[left] = s[right];
            s[right] = tmp2;
            left++;
            right--;
        }
      
        count++;
    }
    return s;
}
int main()
{
    char str[] = "abcdefg";
    char* ret = reverseStr(str, 2);
    printf("%s", ret);


	return 0;
}