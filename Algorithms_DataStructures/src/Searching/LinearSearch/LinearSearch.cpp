#include "LinearSearch.h"

	int c_Algorithms_DS::LinearSearch(int * A, int len, int v)
	{
		for (int i = 0; i < len; i++)
		{
			if (A[i] == v)
			{
				return i;
			}
		}

		return -1;
	}