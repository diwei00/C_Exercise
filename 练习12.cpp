#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include <stdio.h>
#include <string.h>
char* my_strncat(char* dest, const char* src, int n)
{
	char* tmp = dest;
	assert(dest && src);
	while (*dest != '\0')
	{
		dest++;
	}
	while (n--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return tmp;
}
char* my_strncpy(char* dest, const char* src, int n)
{
	assert(dest && src);
	char* tmp = dest;
	int len = strlen(dest);
	while (n--)
	{
		*dest++ = *src++;
	}
	if (n > len)
	{
		*dest = '\0';
	}
	return tmp;
}
int main()
{

	char str1[10] = "aaa";
	char str2[] = "bbbbb";
	char* ret = my_strncpy(str1, str2, 5);
	/*char* ret = my_strncat(str1, str2, 3);*/
	printf("%s", ret);

	return 0;
}