#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char possword[20] = { 0 };
	printf("�����������:>");
	scanf("%s", &possword);
	int tmp = getchar();
	while ((tmp = getchar()) != '\n')
	{
		;
	}
	printf("����(Y/N)ȷ������:>");
	int ch = getchar();
	if (ch == 'Y')
		printf("��֤�ɹ�\n");
	else
		printf("��֤ʧ��\n");
	return 0;
}