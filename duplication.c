int removeDuplicates(int *nums, int narr){
    if(narr > 1 && nums[0] != nums[narr-1]){
    int i;
    int count = 0;
    for(i = 1; i < narr; i++){
        if(nums[i] > nums[count]){
            nums[count+1] = nums[i];
            count++;
        }
    }
    return count+1;
    }else
        return 1;
}

