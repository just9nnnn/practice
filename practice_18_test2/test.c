#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int test(int a)
{
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int input = 0;
    printf("����һ����ݣ��ж����Ƿ�������:>");
    scanf("%d", &input);
    int i = test(input);
    if (i == 1)
        printf("��");
    if (i == 0)
        printf("��");
    return 0;
}