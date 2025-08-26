int minimumOperations(int* nums, int numsSize) {
    int i, sum = 0;

    for(i=0;i<numsSize;i++){
        if((nums[i] + 1) % 3 == 0 || (nums[i] - 1) % 3 == 0){
            sum += 1;
        }
    }

    return sum;
}