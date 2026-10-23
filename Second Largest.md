## 01. Second Largest

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/second-largest3735/1)

### Problem Description

**Task:** Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.Note: The second largest element should not be equal to the largest element.Examples:Input: arr[] = [12, 35, 1, 10, 34, 1]

#### Examples

##### Example 1

- **Output:**
```text
-1
```
- **Explanation:** The largest element of the array is 10 and the second largest element does not exist.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C)

- **Submitted:** 2026-10-23 17:50:52
- **Status:** Correct
- **Marks:** 0

```c
int getSecondLargest(int *arr, int n) {
    // code here
    int i=1;
    int max=arr[0];
    int Smax=0;
    while(i<n){
        if(arr[i]>max){
            Smax=max;
            max=arr[i];
            i++;
        }
        else if(arr[i]<max && arr[i]>Smax){
            Smax=arr[i];
            i++;
        }
        else{
            i++;
        }
    }
    if(Smax==max || Smax==0){
        return -1;
    }
    else{
        return Smax;
    }
}
```

#### Solution 2 (C)

- **Submitted:** 2026-10-23 17:34:52
- **Status:** Correct
- **Marks:** 2

```c
int getSecondLargest(int *arr, int n) {
    // code here
    int i=1;
    int max=arr[0];
    int Smax=0;
    while(i<n){
        if(arr[i]>max){
            Smax=max;
            max=arr[i];
            i++;
        }
        else if(arr[i]<max && arr[i]>Smax){
            Smax=arr[i];
            i++;
        }
        else{
            i++;
        }
    }
    if(Smax==max || Smax==0){
        return -1;
    }
    else{
        return Smax;
    }
}
```

*Generated on: 10/23/2026, 5:50:24 PM*