#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int money = 0;
	scanf("%d", &money);
	int empty = money;//��ƿ��
	int total = money;//��������
	while (empty >= 2)
	{
		total += empty / 2;
		empty = (empty / 2) + (empty % 2);//ÿ�λ���ƿ����һ�룬�������������Ŀ�ƿ�ֿ��Ի�һƿ
	}
	printf("%d", total);
	return 0;
}