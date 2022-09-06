#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct man
{
	char name[20];
	int age;
	char sex[5];
	char tell[50];
};
int main()
{
	struct man ls = { "SQ eggs", 23, "male","13600008714" };
	printf("姓名:%s 年龄:%d 性别:%s 电话:%s",ls.name, ls.age, ls.sex, ls.tell);
	return 0;
}