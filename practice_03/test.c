#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int input = 0;
	printf("���Ϊ��Ϊ��ʦ��\n");
	printf("�������ѧϰ��(1/0)");
	scanf(" %d", &input);
	if (input == 1)
		printf("����!\n");
	else
		printf("��û��ѡ��\n");
	return 0;
}