#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int arr[10] = { 0 };
    int i = 0;
    int max = 0;
    int count = 0;
    for (i = 0; i < 10; i++)
    {
        printf("请输入10个数:>");
        scanf("%d", &arr[i]);
        count++;
        printf("第%d个数\n",count);
    }
    max = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("max = %d",max);
    return 0;
}