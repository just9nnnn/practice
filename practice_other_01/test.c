#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
void menu()
{
    printf("#############################\n");
    printf("#############################\n");
    printf("###��ѡ������Ҫ���еĲ���:###\n");
    printf("#########1.��ʱ�ػ�.#########\n");
    printf("#########2.ȡ���ػ�.#########\n");
    printf("#########3.ע������.#########\n");
    printf("#########4.��������.#########\n");
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
        printf("����������ѡ��:>");
        scanf("%d", &input);
        if (1 == input)
        {
            printf("������������ػ�\n:>");
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
            printf("ѡ�����������ѡ��!!!");
            Sleep(1500);
            system("cls");
        }
    }
    return 0;
}