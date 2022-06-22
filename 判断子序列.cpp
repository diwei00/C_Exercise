#include <string.h>
bool isSubsequence(char* s, char* t) {
    int len1 = strlen(s);
    int len2 = strlen(t);
    int left1 = 0;
    int left2 = 0;
    //同时遍历两个字符串，双指针法
    while (left1 < len1 && left2 < len2)
    {
        if (s[left1] == t[left2])
        {
            left1++;
            left2++;
        }
        else
        {
            left2++;
        }

    }
    if (left1 == len1)
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
    char s[] = "abc";
    char t[] = "ahbgdc";

    isSubsequence(s, t);
	return 0;
}