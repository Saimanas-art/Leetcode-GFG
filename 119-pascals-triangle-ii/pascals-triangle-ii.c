/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    int *arr = (int*)malloc((rowIndex+1)*sizeof(int));
    arr[0]=1;
    long long value=1;
    
    for(int i=1;i<=rowIndex;i++){
        value=value*(rowIndex-i+1);
        value=value/i;
        arr[i]=(int)value;
    }
    *returnSize=rowIndex+1;
    return arr;
    
}