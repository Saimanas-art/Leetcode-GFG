void rotate(int* nums, int numsSize, int k) {

    k=k%numsSize;
    int arr[numsSize];

    for(int i=0;i<k;i++){
        arr[i]=nums[numsSize-k+i];
    }
    for(int i=k;i<numsSize;i++){
        arr[i]=nums[i-k];
    }
    for(int i=0;i<numsSize;i++){
        nums[i]=arr[i];
    }
    
}