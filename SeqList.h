#pragma once
#define ListSize 200

typedef int DataType;		/*Ԫ�����Ͷ���Ϊ����*/

typedef struct SeqList {
	DataType list[ListSize];	//����Ԫ�ص�����
	int length;					//����
}SeqList;

void InitList(SeqList* L);	/*��ʼ�����Ա�*/

int ListEmpty(SeqList L);	/*�ж����Ա��Ƿ�Ϊ��*/

int GetElem(SeqList L, int i, DataType* e);	/*�������Ա��е�i��Ԫ��*/

int InsertList(SeqList* L, int i, DataType e);/*��˳���ĵ�i��λ�ò���Ԫ��e*/

int DeleteList(SeqList* L, int i, DataType* e);/*ɾ��˳���ĵ�i��Ԫ�أ�������Ԫ��e��ֵ*/

int ListLength(SeqList L);		/*�����Ա�ĳ���*/

void ClearList(SeqList* L);	/*���˳���*/