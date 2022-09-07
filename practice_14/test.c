#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i < 11; i++)
	{
		if (4 == i)
			continue;
		else if (8 == i)
			break;
		printf("%d ", i);
	}
	return 0;
}