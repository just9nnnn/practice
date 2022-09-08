#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	for (a = 100; a <= 200; a++)
	{
		int b = 0;
		int test = 1;
		for (b = 2; b < a; b++)
		{
			if (a % b == 0)
			{
				test = 0;
				break;
			}
			
		}	
		if (test == 1)
		{
			printf("%d ", a);
		}
	}
	return 0;
}