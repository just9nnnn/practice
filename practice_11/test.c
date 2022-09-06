#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int age = 0;
	printf("请输入你的年龄:>");
	scanf("%d", &age);
	if (age < 8)
		printf("童年\n");
	else if (8 <= age && age <= 18)
		printf("青少年\n");
	else if (18 < age && age <= 35)
		printf("青年\n");
	else if (35 < age && age <= 60)
		printf("中年\n");
	else
		printf("老年\n");

	return 0;
}