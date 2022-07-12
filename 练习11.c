#include <stdio.h>
#include <assert.h>
int my_strcmp(const char* s1, const char* s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
		
	}

	return *s1 - *s2;
}
int my_strstr(char* s1, char* s2)
{
	char* p = s1;
	char* str2 = s2;
	char* str1 = s1;
	while (*p != '\0')
	{
		str1 = p;
		str2 = s2;
		while (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		if (*str2 == '\0')
		{
			return 0;
		}
		p++;

	}
	return -1;
}
void* my_memcpy(void* dest, const void* sorc, int count)
{
	assert(dest && sorc);
	void* tmp = dest;
	while (count--)
	{
		*(char*)dest = *(char*)sorc;
		(char*)dest += 1;
		(char*)sorc += 1;
	}
	return tmp;
}
void* my_memmove(void* dest, const void* src, int count)
{
	assert(dest && count);
	void* tmp = dest;
	if (src < dest)
	{
		//从后向前拷贝
		while (count--)
		{
			(*((char*)dest + count)) = (*((char*)src + count));

		}
	}
	else
	{
		//从前向后拷贝
		while (count--)
		{
			*(char*)dest = *(char*)src;
			(char*)dest += 1;
			(char*)src += 1;
		}
	}
	return tmp;
	
}
int main()
{
	char str1[] = "kkabcddddc";
	int sz = sizeof(str1);
	char str2[] = "abcdef";
	/*int ret = my_strcmp(str1, str2);*/
	int ret2 = my_strstr(str1, str2);
	char str[50] = { 0 };
	void* tmp = my_memcpy(str, str1, sz);
	void* tmp2 = my_memmove(str2 + 1, str2 + 3, sizeof(char) * 3);
	/*printf("%s", (char*)tmp);
	printf("%d" , ret2);*/
	printf("%s", str2);

	return 0;
}