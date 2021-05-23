int removeDuplicates(int* nums, int numsSize){
    if (numsSize <= 1) {
        return numsSize;
    }
    int last_val = *nums;
    int correct_num_position = 1;
    for (int i = 1; i < numsSize; i++) {
        if (last_val == nums[i])
            continue;
        else {
            last_val = nums[i];
            nums[correct_num_position] = nums[i];
            correct_num_position++;
        }
    }
    return correct_num_position;
}