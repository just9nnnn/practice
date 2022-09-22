#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int cmp_int(const void*e1, const void*e2)
{
	return *(int*)e1 - *(int*)e2;
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp( (char*)base + j * width , (char*)base + (j + 1) * width ) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width , width);
			}
		}
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test()
{
	int arr[] = {9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}

int main()
{
	test();
	return 0;
}