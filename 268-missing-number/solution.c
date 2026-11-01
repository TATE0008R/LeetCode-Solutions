// 0 ms | 9.4 MB
int missingNumber(int* nums, int numsSize) {
    int expectedsum = (numsSize * (numsSize + 1)) / 2;
    int actualsum = 0;

    for(int i=0;i<numsSize;i++){
        actualsum += nums[i];
    }

    return expectedsum - actualsum;
}