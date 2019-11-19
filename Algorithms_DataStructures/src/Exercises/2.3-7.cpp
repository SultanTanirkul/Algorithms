#include "2.3-7.h"

/*
	Describe a O(n lg n)- time algorithm that, given a set S of n integers and another
	integer x, determines whether or not there exist two elements in S whose sum is 
	exactly x.
*/

bool c_Algorithms_DS::sumExists(int* A, int len, int x)
{
	MergeSort(A, len);

	int i = 0;
	int j = len - 1;

	while (i != j)
	{
		if (A[i] + A[j] == x)
			return true;
		else if (A[i] + A[j] > x)
			j = j - 1;
		else
			i = i + 1;
	}

	return false;
}