#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int age = 0;
	printf("�������������:>");
	scanf("%d", &age);
	if (age <= 8)
		printf("ͯ��\n");
	else if (age > 8 && age <= 18)
		printf("������\n");
	else if (age > 18 && age <= 35)
		printf("����\n");
	else if (age > 35 && age <= 60)
		printf("����\n");
	else
		printf("����\n");

	return 0;
}