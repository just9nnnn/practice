#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int input = 0;
	int a = 158;
	printf("��һ����:>");
	while (158 != input)
	{
		scanf("%d", &input);
		if (158 < input)
		{
			printf("̫����\n");
		}
		else if (158 > input)
		{
			printf("̫С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
	return 0;
}