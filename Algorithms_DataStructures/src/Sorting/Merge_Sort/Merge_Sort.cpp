#include "Merge_Sort.h"

void c_Algorithms_DS::MergeSort(int* A, int len)
{
	MergeSort(A, 0, len - 1);
}

void c_Algorithms_DS::MergeSort(int * A, int p, int r)
{
	if (p < r)
	{
		int q = (p + r) / 2;
		MergeSort(A, p, q);
		MergeSort(A, q + 1, r);
		Merge(A, p, q, r);
	}
}

void c_Algorithms_DS::Merge(int* A, int p, int q, int r)
{
	// Determine max size of Left and Right array
	int n1 = q - p + 1;
	int n2 = r - q;

	// Create Left and Right Array
	int* L = new int[n1 + 1];
	int* R = new int[n2 + 1];

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
	// Define the element of the last index to be the highest possible
	L[n1] = INT_MAX;
	R[n2] = INT_MAX;

	for (int k = p, i = 0, j = 0; k < r + 1; k++)
	{
		// L1 or L2 will always be greater that complement because INT_MAX is highest number
		A[k] = L[i] < R[j] ? L[i++] : R[j++];
	}

	// Delete heap allocated memory.
	delete[] L;
	delete[] R;
}