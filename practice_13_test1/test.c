#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", &password);
	char tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ������(Y/N):>");
	int ch = getchar();
	if (ch == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("ȷ��ʧ��\n");
	return 0;
}