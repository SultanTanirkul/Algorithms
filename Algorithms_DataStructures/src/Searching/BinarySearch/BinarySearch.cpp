#include "BinarySearch.h"

 int c_Algorithms_DS::BinarySearch(int* A, int len, int v)
{
	int p = 0;
	int r = len - 1;

	for (int i = 0; i < len; len = len / 2) {
		int q = (p + r) / 2;

		if (A[q] == v)
		{
			return q;
		}
		else if (v > A[q])
		{
			p = q + 1;
		}
		else
		{
			r = q - 1;
		}
	}
	return -1;
}