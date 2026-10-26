int majorityElement(int* nums, int numsSize) {
    int count=0;
    int element;
    for(int i=0;i<numsSize;i++){
        if(count==0){
            count=1;
            element=nums[i];
        }
        else if(nums[i]==element){
            count++;
        }
        else{
            count--;
        }

    }
    return element;
    
}