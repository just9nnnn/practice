#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int search(int brr[], int s, int i)
{
	int left = 0;
	int right = s - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (brr[mid] < i)
		{
			left = mid + 1;
		}
		else if (brr[mid] > i)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int input = 0;
	printf("ѡ������Ҫ���ҵ���:>");
	scanf("%d", &input);
	int cmp = search(arr, sz, input);
	if (cmp == -1)
	{
		printf("�Ҳ���");
	}
	else
	{
		printf("��������±�Ϊ:%d",cmp);
	}
	return 0;
}