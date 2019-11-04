
# Selection Sort
### Pseudo-Code
>Selection-Sort(A)\
    &emsp;for j = 1 to A.length - 1\
        &emsp;&emsp;min_idx = j\
        &emsp;&emsp;for i = j to A.length\
            &emsp;&emsp;if A[min_idx] > A[ij]\
                &emsp;&emsp;&emsp;min_idx = i\
    &emsp;Swap A[j] with A[min_idx]\

### Best-case and Worst-case running times
Running time for both cases is the same <b>theta(n*n) (quadratic)</b>.

### Loop Invariants
#### Initialization:
The loop invariants holds before the first loop iteration, when j = 1, because the subarray A[1 .. j - 1] is empty and therefore already sorted.
#### Maintenance:
The loops invariants holds after each iteration, because it works by finding the smallest element in A[j .. n - 1] and swapping it with A[j] where A[1 .. j - 1] is a sorted array.
#### Termination:
The loop terminates when j = n - 1 at which stage A[1 .. n - 1] is sorted, and the last element A[n] gets automatically sorted.