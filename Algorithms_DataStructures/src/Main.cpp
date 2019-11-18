#include <iostream>
//#include "Sorting/Selection_Sort/Selection_Sort.h"
#include "Sorting/Merge_Sort/Merge_Sort.h"
#include "Sorting/Merge_Sort/Merge_Sort_No_Sentinels.h"

int main()
{
	const unsigned int len = 100;
	int A[len] = { 66, 90, 99, 97, 46, 14, 73, 93, 13, 5, 68, 39, 32, 20, 29, 77, 86, 36, 17, 49, 89, 74, 7, 78, 45, 12, 65, 48, 52, 33, 21, 59, 53, 70, 35, 94, 88, 87, 42, 24, 8, 30, 72, 23, 31, 26, 4, 38, 50, 81, 9, 10, 56, 92, 76, 16, 25, 75, 19, 98, 83, 2, 3, 67, 84, 91, 58, 64, 18, 40, 69, 62, 79, 11, 1, 22, 41, 61, 60, 71, 63, 95, 51, 44, 54, 37, 57, 80, 34, 6, 47, 55, 85, 27, 96, 82, 28, 43, 100, 15 };
	c_Algorithms_DS::MergeSort_NS(A, len);

	for (int i = 0; i < len; i++) {
		std::cout << A[i] << std::endl;
	}
	return 0;
}