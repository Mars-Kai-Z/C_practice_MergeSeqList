#pragma once
#define ListSize 200

typedef int DataType;		/*元素类型定义为整型*/

typedef struct SeqList {
	DataType list[ListSize];	//数据元素的类型
	int length;					//长度
}SeqList;

void InitList(SeqList* L);	/*初始化线性表*/

int ListEmpty(SeqList L);	/*判断线性表是否为空*/

int GetElem(SeqList L, int i, DataType* e);	/*查找线性表中第i个元素*/

int InsertList(SeqList* L, int i, DataType e);/*在顺序表的第i个位置插入元素e*/

int DeleteList(SeqList* L, int i, DataType* e);/*删除顺序表的第i个元素，并返回元素e的值*/

int ListLength(SeqList L);		/*求线性表的长度*/

void ClearList(SeqList* L);	/*清空顺序表*/