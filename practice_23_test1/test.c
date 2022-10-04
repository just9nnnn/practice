#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define Maxsize 10


typedef struct SeqList//����˳���
{
	int arr[Maxsize];
	int length;
}SeqList;

void InitList(SeqList* A)//��ʼ��˳���
{
	int i;
	for (i = 0; i < Maxsize; i++)
	{
		A->arr[i] = 0;
	}
	A->length = 0;
}

void InputList(SeqList* A)//��˳����������������
{
	int i = 0;
	while (i < Maxsize)//�������������Ⱦ�ֹͣ��������
	{
		A->arr[i] = rand() % 10000;
		A->length++;
		i++;
	}
}

_Bool ListDelete(SeqList* A, int* MinNum)//ɾ�������е���С��������
{
	if (A->length == 0)
		return false;
	int i = 0;
	int minplace = i;
	for(i = 1; i < Maxsize; i++)
	{
		if (A->arr[minplace] > A->arr[i])
		{
			minplace = i;//�ҵ���СԪ�ص�λ��
		}
	}

	*MinNum = A->arr[minplace];
	if (minplace != (A->length) - 1)//��СԪ�ز�Ϊ���һ��Ԫ��,ɾ������λ�������һ��Ԫ�ز���
	{
		A->arr[minplace] = A->arr[(A->length) - 1];
		A->arr[(A->length) - 1] = 0;
		A->length--;
		return true;
	}
	else
	{
		A->length--;
		return true;
	}

}
int main(void)
{
	srand((unsigned int)time(NULL));
	SeqList A;
	InitList(&A);
	InputList(&A);
	int MinNum;
	ListDelete(&A, &MinNum);
	printf("ɾ������Сֵ��:%d\n", MinNum);
	return 0;
}