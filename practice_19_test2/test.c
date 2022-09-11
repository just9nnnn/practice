#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fac(int i)
{
	if (i <= 0)
		return 1;
	else
		return i * Fac(i - 1);
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d",Fac(a));
	return 0;
}