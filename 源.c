#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>			/*��������/���ͷ�ļ�*/
#include "SeqList.h"		/*����˳���Ļ�������*/
#include "MergeList.h"

int main()
{
	int i;
	int flag;
	DataType a[] = { 8,17,17,25,29 };
	DataType b[] = { 3,9,21,21,26 ,57 };
	DataType e;

	SeqList A, B, C;

	InitList(&A);
	InitList(&B);
	InitList(&C);
	
	for (i = 1; i <= sizeof(a) / sizeof(a[0]); i++)	/*������a�е�Ԫ�ز��뵽˳���A��*/
	{
		if (InsertList(&A, i , a[i - 1]) == 0) {/*�����λ�ô�i��ʼ*/
			printf("λ�ò��Ϸ���");
			return;
		}
	}

	for (i = 1; i <= sizeof(b) / sizeof(b[0]); i++)	/*������a�е�Ԫ�ز��뵽˳���A��*/
	{
		if (InsertList(&B, i, b[i - 1]) == 0) {/*�����λ�ô�i��ʼ*/
			printf("λ�ò��Ϸ���");
			return;
		}
	}

	/*	for (i = 1; i <= A.length; i++)	//i��Ҫ��L.length����Ϊ��GetElem�����и�ֵ����List[i-1]
	{
		flag = GetElem(A, i, &e);
		if (flag == 1) {
			printf("%4d", e);
		}
	}
	printf("\n");

	for (i = 1; i <= B.length; i++)	//i��Ҫ��L.length����Ϊ��GetElem�����и�ֵ����List[i-1]
	{
		flag = GetElem(B, i, &e);
		if (flag == 1) {
			printf("%4d", e);
		}
	}
	printf("\n");
	*/

	printf("\n");
	printf("��˳���A��B�е�Ԫ�غϲ��õ�C��\n");
	MergeList(A, B, & C);

	for (i = 1; i <= C.length; i++)	/*i��Ҫ��L.length����Ϊ��GetElem�����и�ֵ����List[i-1]*/
	{
		flag = GetElem(C, i, &e);
		if (flag == 1) {
			printf("%4d", e);
		}
	}


	return 0;
}
