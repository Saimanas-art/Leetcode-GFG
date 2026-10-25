int missingNumber(int* nums, int numsSize) {
    int totalsum=((numsSize*numsSize)+numsSize)/2;
    int arrsum=0;
    for(int i=0;i<numsSize;i++){
        arrsum+=nums[i];

    }

    return (totalsum-arrsum);
    
}