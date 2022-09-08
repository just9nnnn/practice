#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    system("shutdown -s -t 60");
    char arr[20] = { 0 };
    char brr[20] = "我是猪";
    int test = 0;
    int i = 1;
    printf("输入三次\"我是猪\"取消关机:\n");
again:
    scanf("%s", &arr);
    if ((strcmp(arr, brr)) == 0)
    {
        while (1)
        {
            for (; i <= 3;)
            {
                if (i == 3)
                {
                    system("shutdown -a");
                    break;
                }
                i++;
                goto again;
            }
            break;
        }
    }
    else
    {
        printf("输入错误，重新输入:>");
        goto again;
    }
    printf("嘻嘻");
    Sleep(3000);
    return 0;
}