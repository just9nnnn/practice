#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	char possword[20] = { 0 };
	int i = 1;
	char ture[] = { "SQeggs" };
	for (i = 1; i < 4; i++)
	{
		printf("����������:>");
		scanf("%s", &possword);
		if (strcmp(possword, ture) == 0)
		{
			printf("��֤��...\n");
			Sleep(200);
			printf("������ȷ\n");
			Sleep(200);
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("��֤��...\n");
			Sleep(200);
			printf("�������\n");
			Sleep(200);
		}
		if (i == 4)
			printf("����������Σ�����������\n");
	}

	return 0;
}