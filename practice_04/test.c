#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int input = 0;
	printf("�㱻���˿���\n");
	printf("�Ƿ�ʼ������(0\\1):>");
	scanf("%d", &input);
	if (input == 0)
		printf("����ڵģ�\n");
	else
	{
		int i = input;
		while (i < 1000)
		{
			printf("Ŭ������!:%d\n", i);
			i++;
		}
		if (i = 1000)
		{
			printf("�ɹ����ף�\n");
		}
	}
	return 0;
}