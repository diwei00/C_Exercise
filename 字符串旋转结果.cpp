#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Is_Same(char* str1, char* ps, char* str2)
{
	int i = 0;
	int len = strlen(str1);
	//×óĞı
	for (i = 0; i <= len; i ++ )
	{
		int j = 0;
		int k1 = i;
		int k2 = i;
		int p = 0;
		while (*(str1 + k1) != '\0')
		{
			ps[j] = *(str1 + k1);
			j++;
			k1++;
		}
		while (k2--)
		{
			
			ps[j] = str1[p];
			j++;
			p++;
		}
		if (strcmp(str2, ps) == 0)
		{
			return 1;
		}
		
	}
	//ÓÒĞı
	for (i = 0; i <= len; i++)
	{
		int j1 = len - i;
		int k = 0;
		int j2 = len - i;
		int p = 0;
		while (*(str1 + j1) != '\0')
		{
			ps[k] = *(str1 + j1);
			k++;
			j1++;
		}
		while (j2--)
		{
			ps[k] = *(str1 + p);
			k++;
			p++;
		}
		if (strcmp(str2, ps) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char str1[] = "AABCD";
	char str2[] = "BCDAA";
	int sz = sizeof(str1) / sizeof(str1[0]);
	char* ps = (char*)malloc(sizeof(char) * sz);
	memset(ps, 0, sizeof(char) * sz);
	int ret = Is_Same(str1, ps, str2);
	printf("%d", ret);
	free(ps);
	ps = NULL;

	return 0;
}