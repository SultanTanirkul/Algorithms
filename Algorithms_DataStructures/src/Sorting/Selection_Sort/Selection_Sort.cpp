#include "Selection_Sort.h"


void c_Algorithms_DS::SelectionSort(int* A, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		// Variable to hold index of smallest number
		int min_i = i;
		// Find smallest integer
		for (int j = i; j < len; j++) {
			if (A[min_i] > A[j]) {
				min_i = j;
			}
		}
		swap(&A[min_i], &A[i]);
	}
}

// Utility Function for swapping the two elements
void c_Algorithms_DS::swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}