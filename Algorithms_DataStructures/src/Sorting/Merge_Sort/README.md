
# Merge Sort
### Pseudo-Code
```
Merge-Sort(A, p, r)
    if p < r
        q = (p + r) / 2
        Merge-Sort(A, p, q)
        Merge-Sort(A, q + 1, r)
        Merge(A, p, q, r)
```
```
Merge(A, p, q, r)
    n1 = q - p + 1
    n2 = r - q
    Allocate L[n1 + 1] and R[n2 + 1]
    for i = 1 to n1
        L[i] = A[p + i - 1]
    for j = 1 to n2
        R[j] = A[p + j]
    L[n1 + 1] = ∞
    R[n2 + 1] = ∞
    i = 1
    j = 1
    for k = p to r
        if L[i] <= R[j]
            A[k] = L[i]
            i = i + 1;
        else A[k] = R[j]
            j = j + 1
```
### Best-case and Worst-case running times
All cases O(n log n)

### Loop Invariant
    At the start of each iteration of the for loop, the subarray A[p .. k - 1] contains the k - p smallest elements of L[1 .. n1 + 1] and R[1 .. n2 + 1] in sorted order. Moreover, L[i] and R[j] are the smallest elements of their arrays that have not been copied back into A.
#### Initialization:
    Prior to the first iteration of the loop, we have k = p, so that the subarray A[p .. k - 1] is empty. This empty subarray contains the k - p smallest elements of L and R, and since  i = j = 1, both L[i] and R[j] are the smallest elements of their arrays that nave been copied back into A.
#### Maintenance:
    To see that each iteration maintains the loop invariant, let us first suppose that L[i] <= R[j]. Then L[i] is the smallest element not yet sopied back into A. Because A[p .. k - 1] contains the k - p smallest elements, after copying L[i] into A[k], the subarray[p .. k] will contain the k - p + 1 smallest elements. Incrementing k (in the for loop update) and i reestablishes the loop invariant for the next iteration. if instead L[i] > R[j], then similar actions to above will be made but within 'else' statement.
#### Termination:
    At termination, k = r + 1. By the loop invariant, the subarray A[p .. k - 1], which is A[p..r], contains the k - p = r - p + 1 smallest elements of L[1 .. n1 + 1] and R[1 .. n2 + 1], in sorted order. The arrays L and R together contain n1 + n2 +2 = r - p + 3 elements. All but the two largest have been copied back into A, and these two largest elements are the sentinels
