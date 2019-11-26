#include "BubbleSort.h"

#include "iostream"

void c_Algorithms_DS::BubbleSort(int * A, int len)
{
	int min = 0;

    for(int i = 0; i < len - 1; i++){
        //A ripple
        for(int j = len - 1; j > i; --j)
        {
            // swap continuesly
            if(A[j] < A[j - 1]){
                min = A[j - 1];
                A[j - 1] = A[j];
                A[j] = min;
            }
        }
    }
}