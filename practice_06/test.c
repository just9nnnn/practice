#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int brr[10] = { 'a','b','c','d','e','f','g','h','i','j'};
	int x = 0;
	int y = 0;
	while (x < 10,y < 10)
	{
	 printf("%d",arr[x]);
	 x++;
	 printf("%c ", brr[y]);
	 y++;
	}
	
	return 0;
}