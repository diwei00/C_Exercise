#include <stdio.h>
void Connect(char* str1, char* str2)
{
	char* p1 = str1;
	char* p2 = str2;
	while (*p1 != '\0')
	{
		p1++;
	}
	while (*p2 != '\0')
	{
		*p1++ = *p2++;
		
	}
	*p1 = '\0';
}
int main()
{

	char str1[10] = "abcd";
	char str2[] = "efgh";
	Connect(str1, str2);
	printf("%s", str1);
	return 0;
}