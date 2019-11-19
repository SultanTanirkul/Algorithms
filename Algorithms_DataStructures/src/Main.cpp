#include <iostream>

#include "sorting/selection_sort/selection_sort.h"
#include "sorting/merge_sort/merge_sort.h"
#include "sorting/merge_sort/merge_sort_no_sentinels.h"
#include "sorting/insertion_sort/insertionsort.h"
#include "sorting/Insertion_Sort/RInsertionSort.h"
#include "Searching/BinarySearch/BinarySearch.h"
#include "Searching/LinearSearch/LinearSearch.h"

// Exercises
#include "Exercises/2.3-7.h"

#include "Utils.h"

int main()
{
	const unsigned int len = 100;
	// Unsorted Array to be sorted
	int A[len] = { 
		           66, 90, 99, 97, 46, 14, 73, 93, 13, 5,
		           68, 39, 32, 20, 29, 77, 86, 36, 17, 49,
		           89, 74, 7, 78, 45, 12, 65, 48, 52, 33,
		           21, 59, 53, 70, 35, 94, 88, 87, 42, 24,
		           8, 30, 72, 23, 31, 26, 4, 38, 50, 81,
		           9, 10, 56, 92, 76, 16, 25, 75, 19, 98,
		           83, 2, 3, 67, 84, 91, 58, 64, 18, 40,
		           69, 62, 79, 11, 1, 22, 41, 61, 60, 71,
		           63, 95, 51, 44, 54, 37, 57, 80, 34, 6,
		           47, 55, 85, 27, 96, 82, 28, 43, 100, 15 
	             };
	// Sorted array to validate Algorithm
	int B[len] = { 
		           1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
		           11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
				   21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
				   31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
				   41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
				   51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
				   61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
				   71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
				   81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
				   91, 92, 93, 94, 95, 96, 97, 98, 99, 100 
	             };

	int testA[16]{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };

	bool exists = c_Algorithms_DS::sumExists(A, len, 51);

	std::cout << exists << std::endl;

	return 0;
}