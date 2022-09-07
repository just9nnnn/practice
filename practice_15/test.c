#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	do
	{
		i++;
		if (4 == i)
			continue;
		else if (8 == i)
			break;
		printf("%d ", i);
	} while (i < 11);
	return 0;
}