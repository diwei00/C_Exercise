
//bug´úÂë

#include <stdio.h>
#include <string.h>
int main()
{
	char str[20] = { 0 };
	gets_s(str);
	char str_[20] = { 0 };
	gets_s(str_);
	int len1 = strlen(str);
	int len2 = strlen(str_);
	int count = 0;
	int i = 0;
	for (i = 0; i <= len1 - len2 ; i++)
	{
		int j = 0;
		int k = i;
		for (j = 0; j < len2; j++)
		{
			if (str[k] == str_[j])
			{
				k++;
			}
			else
			{
				break;
			}
		}
		if (j == len2)
		{
			count++;
		}

	}
	printf("%d", count);
	

	return 0;
}


