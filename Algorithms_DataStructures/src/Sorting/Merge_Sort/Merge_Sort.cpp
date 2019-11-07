#include "Merge_Sort.h"

void c_Algorithms_DS::MergeSort(int* A, int len)
{
	int p = 0,
		r = len - 1,
		q = r/2;

	MergeSort(A, p, q);
	MergeSort(A, q + 1, r);
	Merge(A, p, q, r);
}

void c_Algorithms_DS::MergeSort(int * A, int p, int q)
{
	if (p > q)
	{
		MergeSort(A, p, (p + q)/2);
		MergeSort(A, (p + q) / 2 + 1, q);
		Merge(A, p, (p + q) / 2, q);
	}
}

void c_Algorithms_DS::Merge(int* A, int p, int q, int r)
{
	int i = 0, 
		j = 0, 
		k = p;
	int n1 = q - p + 1;
	int n2 = r - q + 1;

	int* L = new int[n1];
	int* R = new int[n2];

	for (int m = 0; m < n1; m++)
	{
		L[m] = A[p + m + 1];
	}

	for (int m = 0; m < n2; m++)
	{
		R[m] = A[p + m];
	}

	while (i < n1 && j < n2)
	{
		if (L[i] > R[j]) {
			A[k] = R[j];
			j++;
		}
		else
		{
			A[k] = L[i];
			i++;
		}
		k++;
	}

	while (i < n1)
	{
		A[k++] = L[i++];
	}

	while (j < n2)
	{
		A[k++] = L[j++];
	}

	delete[] L;
	delete[] R;
}