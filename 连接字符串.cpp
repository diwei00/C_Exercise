#include <stdio.h>
void Con_Str(char* str1, char* str2)
{
	
	char* tmp = str1;
	while (*tmp != '\0')
	{
		tmp++;
	}
	char* tmp2 = str2;
	while (*tmp2 != '\0')
	{
		*tmp = *tmp2;
		tmp++;
		tmp2++;
	}
	*(tmp) = '\0';
	
}
int main()
{
	char str1[20] = "wuhao";
	char str2[] = "wuxi";
	Con_Str(str1, str2);
	printf("%s", str1);
	return 0;
}