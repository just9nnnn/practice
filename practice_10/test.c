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
	printf("1: ����:%s ����:%d �Ա�:%s �绰:%s\n",ls.name, ls.age, ls.sex, ls.tell);
	printf("2: ����:%s ����:%d �Ա�:%s �绰:%s\n",(*pls).name, (*pls).age, (*pls).sex, (*pls).tell );
	printf("3: ����:%s ����:%d �Ա�:%s �绰:%s\n",pls->name, pls->age, pls->sex, pls->tell);
	return 0;
}