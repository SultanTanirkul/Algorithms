
# Selection Sort
### Pseudo-Code
>Selection-Sort(A)\
    &emsp;for j = 1 to A.length - 1\
        &emsp;&emsp;min_idx = j\
        &emsp;&emsp;for i = j to A.length\
            &emsp;&emsp;if A[min_idx] > A[j]\
                &emsp;&emsp;&emsp;min_idx = j\
    &emsp;Swap A[j] with A[min_idx]\