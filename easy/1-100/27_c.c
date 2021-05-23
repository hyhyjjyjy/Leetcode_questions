int removeElement(int* nums, int numsSize, int val){
    int store_pos = 0;
    int move_pos = 0;
    if (numsSize == 0)
        return 0;
    if (numsSize == 1)
        if (nums[0] == val)
            return 0;
        else
            return 1;
    
    while (move_pos < numsSize) {
        if (nums[move_pos] == val) {
            move_pos++;
        }
        else {
            nums[store_pos] = nums[move_pos];
            store_pos++;
            move_pos++;
        }
    }

    return store_pos;


}