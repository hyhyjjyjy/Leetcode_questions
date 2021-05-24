int searchInsert(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize - 1;
    if (target > nums[right])
        return right + 1;
    if (target < nums[left])
        return 0;
    while (left != right) {
        if (target == nums[(left + right) / 2])
            return (left + right) / 2;
        else if (target < nums[(left + right) / 2])\
            right = (left + right) / 2;
        else {
            if (left == (left + right) / 2)
                return left + 1;
            left = (left + right) / 2;
        }
    }
    return right;
}