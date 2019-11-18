#include "Utils.h"

// Utility Function for swapping the two elements
void c_Algorithms_DS::swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

bool c_Algorithms_DS::checkIfEquals(int* A, int* B, int len)
{
	for (int i = 0; i < len; i++)
	{
		// if at least one is not equal then return false
		// otherwise they are equal
		if (A[i] != B[i])
		{
			return false;
		}
	}
	return true;
}