#include <stdio.h>
#define offsetof(StructType, MemberName) (size_t)&(((StructType *)0)->MemberName)
//��0����Ϊ��ʼλ�õ�ַ��ȡ��������Ա���õ��ó�Ա�ĵ�ַ��ǿתsize_t��
//����ʵ���������0��ƫ���������Եõ���ֱֵ�Ӿ��Ƕ��׵�ַ��ƫ������
struct s
{
	int a;
	char b;
	int c;
};
int main()
{
	struct s S;
	int ret = offsetof(struct s, c);
	printf("%d", ret);
	



	return 0;
}