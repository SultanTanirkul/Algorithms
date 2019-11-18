#include "Merge_Sort_No_Sentinels.h"

void c_Algorithms_DS::MergeSort_NS(int* A, int len)
{
	MergeSort_NS(A, 0, len - 1);
}

void c_Algorithms_DS::MergeSort_NS(int * A, int p, int r)
{
	if (p < r)
	{
		int q = (p + r) / 2;
		MergeSort_NS(A, p, q);
		MergeSort_NS(A, q + 1, r);
		Merge_NS(A, p, q, r);
	}
}

void c_Algorithms_DS::Merge_NS(int* A, int p, int q, int r)
{
	// Determine max size of Left and Right array
	int n1 = q - p + 1;
	int n2 = r - q;

	// Create Left and Right Array
	int* L = new int[n1];
	int* R = new int[n2];

	// Fill the Left with numbers from main Array
	for (int i = 0; i < n1; i++)
	{
		L[i] = A[p + i];
	}

	// Fill the Right with numbers from main Array
	for (int j = 0; j < n2; j++)
	{
		R[j] = A[(q + 1) + j];
	}

	int k = 0;
	int i = 0;
	int j = 0;
	// Define the element of the last index to be the highest possible
	for (k = p; n1 > i && n2 > j; k++)
	{
		// L1 or L2 will always be greater that complement because INT_MAX is highest number
		A[k] = L[i] < R[j] ? L[i++] : R[j++];
	}

    while (n1 > i)
    {
        A[k++] = L[i++];
    }

    while (n2 > j)
    {
        A[k++] = R[j++];
    }
	// Delete heap allocated memory.
	delete[] L;
	delete[] R;
}