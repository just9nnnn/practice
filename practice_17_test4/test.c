#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    system("shutdown -s -t 60");
    char arr[20] = { 0 };
    char brr[20] = "������";
    int test = 0;
    int i = 1;
    printf("��������\"������\"ȡ���ػ�:\n");
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
        printf("���������������:>");
        goto again;
    }
    printf("����");
    Sleep(3000);
    return 0;
}