#include <stdio.h>
#include <string.h>
void Del_Num(char* str, char* tmp)
{
	int index = 0;
	int len = strlen(str);
	int i = 0;
	for (i = 0; i <= len - 1; i++)
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			tmp[index] = str[i];
			index++;
		}
	}

}
int main()
{
	char str[100] = { 0 };
	char tmp[100] = { 0 };
	gets_s(str);
	Del_Num(str, tmp);
	printf("%s", tmp);


	return 0;
}