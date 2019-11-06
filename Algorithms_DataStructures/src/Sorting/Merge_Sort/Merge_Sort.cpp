#include "Merge_Sort.h"
#include "iostream"
#include "array"
void c_Algorithms_DS::MergeSort(int* A, int len)
{
	std::array<int, 10> hello = { 1,2,3,4,5 };
	int begin = 0, mid = len/2, end = len;

	MergeSort(A, begin, mid, ceil(len/2));
	MergeSort(A, mid + 1, end, len/2);
	Merge(A, begin, mid, end, len);
}

void c_Algorithms_DS::MergeSort(int * A, int p, int q, int len)
{
	int begin = p, mid = q / 2, end = q;
	if (len < 2) {
		return;
	}
	else {
		MergeSort(A, begin, mid, ceil(len/2));
		MergeSort(A, mid + 1, end, len/2);
		Merge(A, begin, mid, end, len);
	}
}

void c_Algorithms_DS::Merge(int * A, int p, int q, int r, int len)
{
	for (int i = 0; i < len/2; i++) 
	{
		if (A[i] < A[p + i]) 
		{
			swap1((int*)A[i], (int*)A[p+1]);
		}
	}
}

// Utility Function for swapping the two elements
void c_Algorithms_DS::swap1(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}