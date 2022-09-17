#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d",&m, &n);
	int count = 0;
	int i = 1;
	int a = 1;
	for (i = 1; i <= 32; i++)
	{
		int ret1 = m & a;
		int ret2 = n & a;
		if (ret1 != ret2)
		{
			count++;
		}
		a = a << 1;
	}
	printf("%d " ,count);
	return 0;
}