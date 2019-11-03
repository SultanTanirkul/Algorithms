#include <iostream>
#include "Sorting/Selection_Sort/Selection_Sort.h"
int main()
{
	int A[5] = { 2,5,1,3,4 };
	c_Algorithms_DS::SelectionSort(A, 5);

	for (int i = 0; i < 5; i++) {
		std::cout << A[i] << std::endl;
	}
}