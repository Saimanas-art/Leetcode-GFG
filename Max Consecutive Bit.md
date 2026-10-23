## 01. Max Consecutive Bit

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/max-consecutive-one/1)

### Problem Description

**Task:** Given an array arr[] consisting of only 0’s and 1’s, return count of the maximum number of consecutive 1’s or 0’s present in the array.

#### Examples

##### Example 1

- **Input:**
```text
arr[] = [0, 1, 0, 1, 1, 1, 1]Output: 4Explanation: The maximum number of consecutive 1’s in the array is 4 from index 3-6.
```

##### Example 2

- **Input:**
```text
arr[] = [0, 0, 1, 0, 1, 0]Output: 2Explanation: The maximum number of consecutive 0’s in the array is 2 from index 0-1.
```

##### Example 3

- **Input:**
```text
arr[] = [0, 0, 0, 0]Output: 4Explanation: The maximum number of consecutive 0’s in the array is 4.
```

#### Constraints

- **1.** `1 ≤ arr.size() ≤ 10⁵⁰ ≤ arr[i] ≤ 1`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C)

- **Submitted:** 2026-10-23 18:18:20
- **Status:** Correct
- **Marks:** 0

```c
int maxConsecBits(int arr[], int n) {
    int max1 = 0;
    int count1 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count1++;
            if (count1 > max1) {
                max1 = count1;
            }
        } else {
            count1 = 0;
        }
    }

    int max0 = 0;
    int count0 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count0++;
            if (count0 > max0) {
                max0 = count0;
            }
        } else {
            count0 = 0;
        }
    }

    if (max1 > max0) {
        return max1;
    } else {
        return max0;
    }
}
```

#### Solution 2 (C)

- **Submitted:** 2026-10-23 18:18:07
- **Status:** Correct
- **Marks:** 2

```c
int maxConsecBits(int arr[], int n) {
    int max1 = 0;
    int count1 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count1++;
            if (count1 > max1) {
                max1 = count1;
            }
        } else {
            count1 = 0;
        }
    }

    int max0 = 0;
    int count0 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count0++;
            if (count0 > max0) {
                max0 = count0;
            }
        } else {
            count0 = 0;
        }
    }

    if (max1 > max0) {
        return max1;
    } else {
        return max0;
    }
}
```

*Generated on: 10/23/2026, 6:17:55 PM*