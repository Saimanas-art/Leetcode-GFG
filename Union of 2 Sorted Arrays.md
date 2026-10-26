## 01. Union of 2 Sorted Arrays

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1)

### Problem Description

**Task:** Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements in the union of the two arrays in sorted order. Union of two arrays can be defined as the set containing distinct elements that are present in either of the arrays.Examples:Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]Output: [1, 2, 3, 4, 5, 6, 7]Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.Input: a[] = [2, 2, 3, 4, 5], b[] = [1, 1, 2, 3, 4]

#### Examples

##### Example 1

- **Output:**
```text
[1, 2]
```
- **Explanation:** Distinct elements including both the arrays are: 1 2.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n + m)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-26 23:27:02
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int i=0;
        int j=0;
        vector <int> arr;
        
        while (i < a.size() && j < b.size()) {
                    
                    if (i > 0 && a[i] == a[i - 1]) {
                        i++;
                        continue;
                    }
                    
                    if (j > 0 && b[j] == b[j - 1]) {
                        j++;
                        continue;
                    }

                    if (a[i] < b[j]) {
                        arr.push_back(a[i]);
                        i++;
                    }
                    else if (b[j] < a[i]) {
                        arr.push_back(b[j]);
                        j++;
                    }
                    else { 
                        arr.push_back(a[i]);
                        i++;
                        j++;
                    }
                }
        
        if(i<a.size()){
            while(i<a.size()){
                if(a[i]!=arr[arr.size()-1]){
                    arr.push_back(a[i]);
                    i++;
                }
                else{
                    i++;
                }
            }
        }
        else if(j<b.size()){
            while(j<b.size()){
                if(b[j]!=arr[arr.size()-1]){
                    arr.push_back(b[j]);
                    j++;
                }
                else{
                    j++;
                }
            }
        }
        return arr;
    }
    
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-26 23:25:02
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int i=0;
        int j=0;
        vector <int> arr;
        
        while (i < a.size() && j < b.size()) {
                    
                    if (i > 0 && a[i] == a[i - 1]) {
                        i++;
                        continue;
                    }
                    
                    if (j > 0 && b[j] == b[j - 1]) {
                        j++;
                        continue;
                    }

                    if (a[i] < b[j]) {
                        arr.push_back(a[i]);
                        i++;
                    }
                    else if (b[j] < a[i]) {
                        arr.push_back(b[j]);
                        j++;
                    }
                    else { 
                        arr.push_back(a[i]);
                        i++;
                        j++;
                    }
                }
        
        if(i<a.size()){
            while(i<a.size()){
                if(a[i]!=arr[arr.size()-1]){
                    arr.push_back(a[i]);
                    i++;
                }
                else{
                    i++;
                }
            }
        }
        else if(j<b.size()){
            while(j<b.size()){
                if(b[j]!=arr[arr.size()-1]){
                    arr.push_back(b[j]);
                    j++;
                }
                else{
                    j++;
                }
            }
        }
        return arr;
    }
    
};
```

*Generated on: 10/26/2026, 11:26:35 PM*