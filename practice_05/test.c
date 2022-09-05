#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(num1, num2) 
{
	int x= num1;
	int y= num2;
	int z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("输入两个数字求和:>");
	scanf("%d %d",&num1 ,&num2);
	int sum = Add(num1, num2);
	printf("%d\n", sum);
	return 0;
}