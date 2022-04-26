#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

bool containsDuplicate(int* nums, int numsSize){
    if(numsSize == 1)
        return false;
    qsort(nums,numsSize,sizeof(int),cmpfunc);
    
    for(int i = 0; i < numsSize-1; i++){
        if(nums[i] == nums[i+1])
            return true;
    }
    return false;
}
