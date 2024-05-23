#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include "SeqList.h"

void InitList(SeqList* L)
/*��ʼ�����Ա�*/
{
	//for (int i = 0; i < ListSize - 1; i++) {
	//	L->list[i] = 0;
	//}
	L->length = 0;		//�����Ա�ĳ�������Ϊ0
}

int ListEmpty(SeqList L)
/*�ж����Ա��Ƿ�Ϊ��*/
{
	return(L.length == 0);
}

int GetElem(SeqList L, int i, DataType* e)
/*�������Ա��е�i��Ԫ��*/
{
	if (i<1 || i>L.length)	//�жϸ�����Ƿ�Ϸ�
		return -1;
	*e = L.list[i - 1];		//����i��Ԫ�ص�ֵ��ֵ��e
	return 1;
}


int LocateElem(SeqList L, DataType e)
/*�������Ա���Ԫ��ֵΪe��Ԫ��*/
{
	int i;
	for (i = 0; i < L.length; i++)
		if (L.list[i] == e)
			return (i + 1);
	return 0;
}


int InsertList(SeqList* L, int i, DataType e)
/*��˳���ĵ�i��λ�ò���Ԫ��e*/
{
	int j;
	if (i<1 || i>L->length + 1) {	//�ڲ���Ԫ��ǰ���жϲ���λ���Ƿ�Ϸ�
		printf("����λ��%d���Ϸ�!\n", i);
		return -1;
	}
	else if (L->length >= ListSize) {		//�ж�˳����Ƿ�����
		printf("˳������������ܲ���Ԫ�ء�\n");
		return 0;
	}
	else {
		for (j = L->length; j >= i; j--) {	//����i��Ԫ��֮���Ԫ������������
			L->list[j] = L->list[j - 1];
		}
		L->list[i - 1] = e;					//��Ԫ�ز����i��λ��
		L->length = L->length + 1;
		return 1;
	}
}



int DeleteList(SeqList* L, int i, DataType* e)
/*ɾ��˳���ĵ�i��Ԫ�أ�������Ԫ��e��ֵ*/
{
	int j;
	if (L->length <= 0) {
		printf("˳����ѿգ����ܽ���ɾ����\n");
		return 0;
	}
	else if (i<1 || i>L->length) {
		printf("ɾ��λ�ò��Ϸ���\n");
		return -1;
	}
	else {
		*e = L->list[i - 1];
		for (j = i; j <= L->length - 1; j++)
			/*����i��Ԫ��֮���Ԫ��������ǰ��*/
			L->list[j - 1] = L->list[j];
		L->length = L->length - 1;
		return *e;
	}
}


int ListLength(SeqList L)
/*�����Ա�ĳ���*/
{
	return L.length;
}


void ClearList(SeqList* L)
/*���˳���*/
{
	L->length = 0;
}