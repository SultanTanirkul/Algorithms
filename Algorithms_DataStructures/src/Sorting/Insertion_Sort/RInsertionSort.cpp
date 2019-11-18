#include "RInsertionSort.h"

void c_Algorithms_DS::RecursiveInsertionSort(int* A, int len)
{
	if (len > 0) {
		RecursiveInsertionSort(A, len - 1);

		int key = A[len - 1];

		int j = len - 2;

		while (j >= 0 && key < A[j])
		{
			A[j + 1] = A[j];
			j = j - 1;
		}

		A[j + 1] = key;
	}
}