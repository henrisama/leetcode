#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j, aux;

    int* indices = (int*) malloc(2 * sizeof(int));


    for(i=1;i<numsSize;i++){
        for(j=i-1; j>=0;j--){
            if(target - nums[i] == nums[j]){
                indices[0] = j;
                indices[1] = i;
                break;
            }
        }
    }

    *returnSize = 2;

    return indices;
}