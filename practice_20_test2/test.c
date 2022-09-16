#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
exchange(int arr[10], int brr[10], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int ret = arr[i];
		arr[i] = brr[i];
		brr[i] = ret;
	}
}
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("请输入arr数组中的10个数:>");
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	int brr[10] = { 0 };
	printf("请输入brr数组中的10个数:>");
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &brr[i]);
	}
	exchange(arr, brr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("arr[%d] = %d ", i, arr[i]);
		printf("brr[%d] = %d", i, brr[i]);
		printf("\n");
	}
	return 0;
}
