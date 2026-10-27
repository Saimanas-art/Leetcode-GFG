/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {

    int *arr=(int*)malloc(numsSize*sizeof(int));
    int posindex=0;
    int negindex=1;

    for(int i=0;i<numsSize;i++){
        if(nums[i]<0){
            arr[negindex]=nums[i];
            negindex+=2;
        }
        else{
            arr[posindex]=nums[i];
            posindex+=2;
        }
    }
    *returnSize =numsSize;
    return arr;


    
}