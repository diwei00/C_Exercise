#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Left_Rotate_Str(char* str, int n, char* ps, int k)
{
	int i = 0;
	int j = k;
	//�ȿ���k���������
	while (*(str + j) != '\0')
	{
		ps[i] = *(str + j);
		i++;
		j++;
	}
	int p = 0;
	//�ٿ���k֮ǰ������
	while (k--)
	{
		ps[i] = *(str + p);
		i++;
		p++;
	}


}
int main()
{
	char str[] = "ABCD";
	int sz = sizeof(str) / sizeof(str[0]);
	char* ps = (char*)malloc(sizeof(char) * sz);
	memset(ps, 0, sizeof(char) * sz);
	int k = 0;
	printf("%s\n", str);
	printf("������Ҫ��ת���ַ�����\n");
	scanf_s("%d", &k);
	Left_Rotate_Str(str, sz, ps, k);

	printf("%s", ps);
	free(ps);
	ps = NULL;
	return 0;
}