#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fib(int i)// �ݹ飺Ч�ʵ���
{
	if (i < 3)
		return 1;
	else
		return Fib(i - 1) + Fib(i - 2);
}
//int Fib(int i)// ��������������ʺ�
//{
//	int m = 1;
//	int n = 1;
//	int t = 1;
//	while (i > 2)
//	{
//		t = m + n;
//		m = n;
//		n = t;
//		i--;
//	}
//	return t;
//}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d",Fib(a));
	return 0;
}