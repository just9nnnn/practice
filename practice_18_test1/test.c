#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int test(int a)
{
    int b = 1;
    for (b = 2; b < a;)
    {
        if (a % b != 0)
        {
            b++;
        }
        else
        {
            return 0;
            break;
        }
    }
    if (a == b)
        return 1;
}
int main()
{
    int input = 0;
    printf("输入一个数，判断它是否是素数:>");
    scanf("%d", &input);
    int i = test(input);
    if (i == 1)
        printf("是");
    if (i == 0)
        printf("否");
    return 0;
}