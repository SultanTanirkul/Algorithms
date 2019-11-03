#include <iostream>
void SelectionSort(int * A, int len)
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
		// Swap
		int min = A[min_i];
		A[min_i] = A[i];
		A[i] = min;
	}
}



int main()
{
	int A[5] = { 2,5,1,3,4 };
	SelectionSort(A, 5);

	for (int i = 0; i < 5; i++) {
		std::cout << A[i] << std::endl;
	}
}