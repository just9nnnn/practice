#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define Add(x , y) ((x)+(y))
int test()
{
	static int a = 1;
	a++;
	printf("%d ",a);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;

	}
	int m = 10;
	int n = 20;
	printf("\nsum=%d",Add(m , n));
	return 0;
}