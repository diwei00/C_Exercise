#include <stdio.h>
typedef struct stu
{
	char name[10];
	int math;
	int eng;
	int c_lan;
	int computer;
}stu;
int main()
{

	stu PS[5] = { {"wuhao",10,20,30,48},{"yang",2,3,5,10},{"guamg",5,6,9,8},{"dsf",6,8,7,12},{"aa",5,6,3,16} };
	int Sum = 0;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		int sum = 0;
		printf("%s", PS[i].name);
		sum += PS[i].c_lan + PS[i].eng + PS[i].computer + PS[i].math;
		Sum += sum;
		printf("\t%d\n", sum / 4);	
	}
	printf("所有同学期中成绩：\n");
	printf("%lf", (double)Sum / 5);

	return 0;
}