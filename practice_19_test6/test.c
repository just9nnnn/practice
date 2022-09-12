#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
double Pow(int n, int k)
{
	if (k > 0)
		return n * Pow(n, k - 1);
	else if (k == 0)
		return 1;
	else
		return 1.0 / (Pow(n, -k));
}
int main()
{
	int n = 0;
	int k = 0;
	printf("你想求_的_次方?:>");
	scanf("%d %d", &n, &k);
	printf("%d的%d次方是%lf", n, k, Pow(n, k));
	return 0;
}