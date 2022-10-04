#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define Maxsize 10


typedef struct SeqList//定义顺序表
{
	int arr[Maxsize];
	int length;
}SeqList;

void InitList(SeqList* A)//初始化顺序表
{
	int i;
	for (i = 0; i < Maxsize; i++)
	{
		A->arr[i] = 0;
	}
	A->length = 0;
}

void InputList(SeqList* A)//向顺序表中随机存入数据
{
	int i = 0;
	while (i < Maxsize)//到达数组的最长长度就停止输入数据
	{
		A->arr[i] = rand() % 10000;
		A->length++;
		i++;
	}
}

_Bool ListDelete(SeqList* A, int* MinNum)//删除数表中的最小数并带回
{
	if (A->length == 0)
		return false;
	int i = 0;
	int minplace = i;
	for(i = 1; i < Maxsize; i++)
	{
		if (A->arr[minplace] > A->arr[i])
		{
			minplace = i;//找到最小元素的位置
		}
	}

	*MinNum = A->arr[minplace];
	if (minplace != (A->length) - 1)//最小元素不为最后一个元素,删除后其位置由最后一个元素补上
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
	printf("删除的最小值是:%d\n", MinNum);
	return 0;
}