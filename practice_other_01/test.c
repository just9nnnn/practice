#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
void menu()
{
    printf("#############################\n");
    printf("#############################\n");
    printf("###请选择你想要进行的操作:###\n");
    printf("#########1.定时关机.#########\n");
    printf("#########2.取消关机.#########\n");
    printf("#########3.注销电脑.#########\n");
    printf("#########4.重启电脑.#########\n");
    printf("####[Written by SQ eggs.]####\n");
    printf("#############################\n");
}
int main()
{
    char arr[20] = "shutdown -s -t ";
    char brr[20] = "shutdown -a";
    char crr[20] = "shutdown -l";
    char drr[20] = "shutdown -r";
    char a[5] = { 0 };
    int input = 0;
    while (1)
    {
        menu();
        printf("请输入数字选择:>");
        scanf("%d", &input);
        if (1 == input)
        {
            printf("请输入多少秒后关机\n:>");
            scanf("%s", &a);
            system(strcat(arr, a));
            break;
        }
        else if (2 == input)
        {
            system(brr);
            break;
        }
        else if (3 == input)
        {
            system(crr);
            break;
        }
        else if (4 == input)
        {
            system(drr);
            break;
        }
        else
        {
            printf("选择错误请重新选择!!!");
            Sleep(1500);
            system("cls");
        }
    }
    return 0;
}