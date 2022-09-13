#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[2][2] = { {1,2},{3} };
	int brr[][4] = { {1,2},{3,4},{5,6} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int m = 0;
	int n = 0;
	for (m = 0; m < 3; m++)
	{
		for (n = 0; n < 4; n++)
		{
			printf("%d ",brr[m][n]);
		}
		printf("\n");
	}
	return 0;
}