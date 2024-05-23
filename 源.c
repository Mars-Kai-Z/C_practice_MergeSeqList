#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>			/*包含输入/输出头文件*/
#include "SeqList.h"		/*包含顺序表的基本运算*/
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
	
	for (i = 1; i <= sizeof(a) / sizeof(a[0]); i++)	/*将数组a中得元素插入到顺序表A中*/
	{
		if (InsertList(&A, i , a[i - 1]) == 0) {/*插入的位置从i开始*/
			printf("位置不合法！");
			return;
		}
	}

	for (i = 1; i <= sizeof(b) / sizeof(b[0]); i++)	/*将数组a中得元素插入到顺序表A中*/
	{
		if (InsertList(&B, i, b[i - 1]) == 0) {/*插入的位置从i开始*/
			printf("位置不合法！");
			return;
		}
	}

	/*	for (i = 1; i <= A.length; i++)	//i需要到L.length，因为在GetElem函数中赋值的是List[i-1]
	{
		flag = GetElem(A, i, &e);
		if (flag == 1) {
			printf("%4d", e);
		}
	}
	printf("\n");

	for (i = 1; i <= B.length; i++)	//i需要到L.length，因为在GetElem函数中赋值的是List[i-1]
	{
		flag = GetElem(B, i, &e);
		if (flag == 1) {
			printf("%4d", e);
		}
	}
	printf("\n");
	*/

	printf("\n");
	printf("将顺序表A和B中的元素合并得到C：\n");
	MergeList(A, B, & C);

	for (i = 1; i <= C.length; i++)	/*i需要到L.length，因为在GetElem函数中赋值的是List[i-1]*/
	{
		flag = GetElem(C, i, &e);
		if (flag == 1) {
			printf("%4d", e);
		}
	}


	return 0;
}
