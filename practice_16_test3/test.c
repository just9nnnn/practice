#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int k = 7;//需要寻找的数
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//要搜寻的数组
	int sz = sizeof(arr) / sizeof(arr[0]);//数组中的元素个数
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，这个数是:%d", mid + 1);
			break;
		}
	}
	if (left > right)
	{
		printf("无法找到\n");
	}
	return 0;
}