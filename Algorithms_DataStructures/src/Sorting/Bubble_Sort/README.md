
# Merge Sort
### Pseudo-Code
```
Bubble-Sort(A)
    for i = 1 to A.length - 1
        for j = A.length downto i + 1
            if A[j] < A[j - 1]
                swap A[j] and A[j - 1]
```
### Best-case and Worst-case running times
All cases O(n^2)

### Loop Invariant
#### Inner Loop
```    
	Each iteration holds loop invariant like this: A left most element is the smallest in the subarray A[j..n] at the end of each iteration.
```
#### Outer loop
```
	Each iteration holds loop invariant like this: At the start of each iteration subarray A[1..i - 1] consists of all smallest elements originally in A[1..n] in sorted order. A[i..n] consists of n - i + 1 remaining elements in A[1..n]
```
#### Initialization:
#### Inner loop
```    
	Prior to first iteration, a left most element is simply A.length meaning j = n, and it is the only element in the subarray A[j..n], therefore, loop invariant holds.
```
#### Outer loop
```
	Prior to the first iteration, the subarrayh A[1..i-1] is empty. Therefore, we can say it is trivially consists of all smallest elements in sorted order.
```
#### Maintenance:
#### Inner loop
```
	To show that each iteration holds loop invariant, we have to simply say that A[j] of the subarray A[j..n] is the smallest element, and each iteration compares the smallest element of the subarray A[j] with A[j - 1]. The swap operation takes place if A[j] is smaller. At the end of the iteration we expand the subarray A[j..n] by doing j = j - 1 which hold the loop invariant.
```
#### Outer loop
```
	From inner loop invariant, it is proven that at the end of each iteration A[i] is the smallest element of the subarray A[i..n]. At the beginning of the outer for loop, we have that A[1..i - 1] consists of elements that are smaller than A[i..n], and in sorted order. Therefore, at the end of the inner for loop, we will have that subarray A[1..i] consists of elements smaller than A[i + 1..n] and in sorted order. So, at the end of the outer for loop, subarray A[1..i-1] will hold original loop invariant.
```
#### Termination:
#### Inner loop
```
	The loop terminates when j = i where i is the last element of the sorted subarray A[0..i]. According to loop invariant, i is the smallest element of subarray A[i..n] and A[i..n] has all elements originally in this subarray before entering the loop.
```
#### Outer loop
```
	The loop terminates when i = A.length when A[1..n] becomes sorted.
```