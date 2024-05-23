#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
#include "MergeList.h"
void MergeList(SeqList A, SeqList B, SeqList* C)
{
	int i, j, k;
	DataType e1, e2;
	i = 1; j = 1; k = 1;

	while (i <= A.length && j <= B.length)
	{
		GetElem(A, i, &e1);
		GetElem(B, j, &e2);
		
		if (e1 <= e2)
		{
			InsertList(C, k, e1);
			i++; k++;
		}
		else
		{
			InsertList(C, k, e2);
			j++;
			k++;
		}

		while (i<=A.length)
		{
			GetElem(A, i, &e1);
			InsertList(C, k, e1);
			i++;
			k++;
		}

		while (j <= B.length)
		{
			GetElem(B, j, &e2);
			InsertList(C, k, e2);
			j++;
			k++;
		}
		C->length = A.length + B.length;
	}
}