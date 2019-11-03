
# Selection Sort
## The algorithm
`
Selection-Sort(A)
    for j = 1 to A.length - 1
        min_idx = j
        for i = j to A.length
            if A[min_idx] > A[j]
                min_idx = j
        Swap A[j] with A[min_idx]
`