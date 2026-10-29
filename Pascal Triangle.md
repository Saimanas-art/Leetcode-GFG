## 01. Pascal Triangle

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/pascal-triangle0652/1)

### Problem Description

**Task:** Given a positive integer n, return the n^th row of pascal's triangle.Pascal's triangle is a triangular array of the binomial coefficients formed by summing up the elements of previous row.Examples:Input: n = 4

#### Examples

##### Example 1

- **Output:**
```text
[1]
```
- **Explanation:** 1^st row of pascal's triangle is [1].

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (2)

#### Solution 1 (C)

- **Submitted:** 2026-10-29 20:19:15
- **Status:** Correct
- **Marks:** 0

```c
int* nthRowOfPascalTriangle(int n) {
    // code here
    int *arr = (int*)malloc(n*sizeof(int));
    arr[0]=1;
    long long value=1;
    
    for(int i=1;i<n;i++){
        value=value*(n-i);
        value=value/i;
        arr[i]=(int)value;
    }
    return arr;
    
}
```

#### Solution 2 (C)

- **Submitted:** 2026-10-29 20:18:51
- **Status:** Correct
- **Marks:** 4

```c
int* nthRowOfPascalTriangle(int n) {
    // code here
    int *arr = (int*)malloc(n*sizeof(int));
    arr[0]=1;
    long long value=1;
    
    for(int i=1;i<n;i++){
        value=value*(n-i);
        value=value/i;
        arr[i]=(int)value;
    }
    return arr;
    
}
```

*Generated on: 10/29/2026, 8:18:41 PM*