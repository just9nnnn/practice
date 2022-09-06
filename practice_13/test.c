#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	while (a <= 10)
	{
		a++;
		if (a == 5)
			continue;
		else if (a == 9)
			break;
		printf("%d ",a);
	}
	return 0;
}