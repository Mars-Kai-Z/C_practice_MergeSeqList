#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include "SeqList.h"

void InitList(SeqList* L)
/*初始化线性表*/
{
	//for (int i = 0; i < ListSize - 1; i++) {
	//	L->list[i] = 0;
	//}
	L->length = 0;		//把线性表的长度设置为0
}

int ListEmpty(SeqList L)
/*判断线性表是否为空*/
{
	return(L.length == 0);
}

int GetElem(SeqList L, int i, DataType* e)
/*查找线性表中第i个元素*/
{
	if (i<1 || i>L.length)	//判断该序号是否合法
		return -1;
	*e = L.list[i - 1];		//将第i个元素的值赋值给e
	return 1;
}


int LocateElem(SeqList L, DataType e)
/*查找线性表中元素值为e的元素*/
{
	int i;
	for (i = 0; i < L.length; i++)
		if (L.list[i] == e)
			return (i + 1);
	return 0;
}


int InsertList(SeqList* L, int i, DataType e)
/*在顺序表的第i个位置插入元素e*/
{
	int j;
	if (i<1 || i>L->length + 1) {	//在插入元素前，判断插入位置是否合法
		printf("插入位置%d不合法!\n", i);
		return -1;
	}
	else if (L->length >= ListSize) {		//判断顺序表是否已满
		printf("顺序表已满，不能插入元素。\n");
		return 0;
	}
	else {
		for (j = L->length; j >= i; j--) {	//将第i个元素之后的元素依次往后移
			L->list[j] = L->list[j - 1];
		}
		L->list[i - 1] = e;					//把元素插入第i个位置
		L->length = L->length + 1;
		return 1;
	}
}



int DeleteList(SeqList* L, int i, DataType* e)
/*删除顺序表的第i个元素，并返回元素e的值*/
{
	int j;
	if (L->length <= 0) {
		printf("顺序表已空，不能进行删除！\n");
		return 0;
	}
	else if (i<1 || i>L->length) {
		printf("删除位置不合法！\n");
		return -1;
	}
	else {
		*e = L->list[i - 1];
		for (j = i; j <= L->length - 1; j++)
			/*将第i个元素之后的元素依次往前移*/
			L->list[j - 1] = L->list[j];
		L->length = L->length - 1;
		return *e;
	}
}


int ListLength(SeqList L)
/*求线性表的长度*/
{
	return L.length;
}


void ClearList(SeqList* L)
/*清空顺序表*/
{
	L->length = 0;
}