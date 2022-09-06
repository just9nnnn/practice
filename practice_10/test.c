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
	struct man* pls = &ls;
	printf("1: 姓名:%s 年龄:%d 性别:%s 电话:%s\n",ls.name, ls.age, ls.sex, ls.tell);
	printf("2: 姓名:%s 年龄:%d 性别:%s 电话:%s\n",(*pls).name, (*pls).age, (*pls).sex, (*pls).tell );
	printf("3: 姓名:%s 年龄:%d 性别:%s 电话:%s\n",pls->name, pls->age, pls->sex, pls->tell);
	return 0;
}