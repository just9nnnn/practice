#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	printf("����һ�������ж��Ƿ�Ϊ����:>");
	scanf("%d", &a);
	if (0 == a % 2)
		printf("NO");
	else
		printf("YES");
	return 0;
}