#include <stdio.h>
#include <string.h>
int main()
{
	char str1[] = "wuhao";
	char str2[] = "wuxiaaaaa";
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	char* tmp = str1;
	char* tmp2 = str2;
	
	while (*tmp != '\0')
	{
		tmp++;
	}
	while (*tmp2 != '\0')
	{
		*tmp = *tmp2;
		tmp++;
		tmp2++;
	}
	*tmp = '\0';

	printf("%s", str1);


	return 0;
}