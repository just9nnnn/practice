#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int age = 0;
	printf("�������������:>");
	scanf("%d", &age);
	if (age < 8)
		printf("ͯ��\n");
	else if (8 <= age && age <= 18)
		printf("������\n");
	else if (18 < age && age <= 35)
		printf("����\n");
	else if (35 < age && age <= 60)
		printf("����\n");
	else
		printf("����\n");

	return 0;
}