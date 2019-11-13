#include <iostream>
//#include "Sorting/Selection_Sort/Selection_Sort.h"
#include "Sorting/Merge_Sort/Merge_Sort.h"

int main()
{
	const unsigned int len = 6;
	int A[len] = {2,5,4,3,5,2 };
	c_Algorithms_DS::MergeSort(A, len);

	for (int i = 0; i < len; i++) {
		std::cout << A[i] << std::endl;
	}
	std::cin.get();
	return 0;
}