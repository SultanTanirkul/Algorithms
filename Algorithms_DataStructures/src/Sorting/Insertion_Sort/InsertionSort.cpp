#include "InsertionSort.h"

void c_Algorithms_DS::InsertionSort(int * A, int len)
{
	for (int i = 1; i < len; i++)
	{
		int key = A[i];

		int j = i - 1;

		while (j >= 0 && A[j] > key)
		{
			A[j + 1] = A[j];
			j = j - 1;
		}
		A[j + 1] = key;
	}
}