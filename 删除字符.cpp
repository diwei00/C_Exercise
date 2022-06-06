
#include <stdio.h>
#include <string.h>
void Delchar1(char* str, char* ret)
{
	
	int len = strlen(str);
	int i = 0;
	int j = 0;
	while (str[i] != '\0')
	{
		int index = 0;
		if (str[i] == 'c' && str[i + 1] == 'h')
		{
			j = i;
			while (str[index] != '\0')
			{
				index = j + 2;

				str[j] = str[index];
				index++;
				j++;
			}

 	}
		if (str[i] == 'c' && str[i + 1] == 'h')
		{
			;
		}
		else
		{
			i++;
		}
	}
}
void Delchar2(char* str, char* ret, char* tmp)
{
	int i = 0;
	int j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ret[0])
		{
			tmp[j] = str[i];
			j++;
		}
		else
		{
			if (str[i + 1] == ret[1])
			{
				i++;
			}
			else
			{
				tmp[j] = str[i];
				j++;
			}
		}
		i++;
	}
	//拷贝回原数组
	int len = strlen(tmp);	
  	for (i = 0; i < len; i++)
	{

        str[i] = tmp[i];
	}
	//只拷贝了字符，结尾添加‘\0’
	str[i] = '\0';
}
int main()
{
	char str[100] = { 0 };
	gets_s(str);
	char ret[3] = { 0 };
	gets_s(ret);
  	char tmp[100] = { 0 };
	/*Delchar1(str, ret);*/
	Delchar2(str, ret, tmp);
 	printf("%s\n", tmp);
	printf("%s", str);
	return 0;
}



