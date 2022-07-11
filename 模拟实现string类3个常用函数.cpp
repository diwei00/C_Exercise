#include <stdio.h>
#include <assert.h>
int my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;

}
#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* dest, const char* sour)
{
	assert(dest && sour);
	char* ret = dest;
	while (*sour != '\0')
	{
		*dest++ = *sour++;
	}
	*dest = *sour;
	return ret;
}
#include <stdio.h>
#include <assert.h>
char* my_strcat(char* dest, const char* sour)
{
	assert(dest && sour);
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*sour != '\0')
	{
		*dest++ = *sour++;
	}
	*dest = '\0';
	return ret;
}
int main()
{
	char str1[20] = "www";
	char str[] = "abcdef";
	char* ret = my_strcat(str1, str);
	printf("%s", ret);

	return 0;
}