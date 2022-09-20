#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int money = 0;
	scanf("%d", &money);
	int empty = money;//空瓶数
	int total = money;//总饮料数
	while (empty >= 2)
	{
		total += empty / 2;
		empty = (empty / 2) + (empty % 2);//每次换空瓶数的一半，如果有两个多余的空瓶又可以换一瓶
	}
	printf("%d", total);
	return 0;
}