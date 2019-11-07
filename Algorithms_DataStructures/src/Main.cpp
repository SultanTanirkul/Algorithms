#include <iostream>
//#include "Sorting/Selection_Sort/Selection_Sort.h"
#include "Sorting/Merge_Sort/Merge_Sort.h"

int main()
{
	const unsigned int len = 5;
	int A[len] = { 5,4,3,2,1 };
	c_Algorithms_DS::MergeSort(A, len);

	for (int i = 0; i < len; i++) {
		std::cout << A[i] << std::endl;
	}
	return 0;
}