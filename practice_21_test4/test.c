#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int a = 1;
	for (a = 1; a < 100000; a++)
	{
		int n = 0;
		int cmp = a;
		while (cmp)
		{
			cmp = cmp / 10;
			n++;
		}
		cmp = a;
		int sum = 0;
		int ret = 0;
		while (cmp)
		{
			ret = pow(cmp % 10, n);
			sum += ret;
			cmp = cmp / 10;
		}
		if (sum == a)
		{
			printf("%d ", a);
		}
	}
	return 0;
}