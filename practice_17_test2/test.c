#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("�����������������Լ��:>");
	scanf("%d %d", &a, &b);
	while (0 != a % b)
	{
		int c = a % b;
		a = b;
		b = c;

	}
	printf("���Լ��Ϊ:%d", b);
	return 0;
}