#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int k = 7;//��ҪѰ�ҵ���
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//Ҫ��Ѱ������
	int sz = sizeof(arr) / sizeof(arr[0]);//�����е�Ԫ�ظ���
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (mid < k - 1)
		{
			left = mid + 1;
		}
		else if (mid > k - 1)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��������:%d", mid + 1);
			break;
		}
	}
	if (left > right)
	{
		printf("�޷��ҵ�\n");
	}
	return 0;
}