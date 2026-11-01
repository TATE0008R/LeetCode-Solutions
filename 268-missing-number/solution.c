// 351 ms | 9.4 MB
int missingNumber(int* nums, int numsSize) {
    for(int i=0;i<=numsSize;i++){
        int found = 0;
        for(int j=0;j<numsSize;j++){
            if(i == nums[j]){
                found = 1;
                break;
            }
        }
        if(!found){
            return i;
        }
    }
    return -1;
}