/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *result = malloc(2 * sizeof(int));
    int i = 0;
    int l = 0;
    *returnSize = 2;
    while (i < numsSize - 1) {
        l = i + 1;
        while (l < numsSize) {
            if ((nums[i] + nums[l]) == target) {
                result[0] = i;
                result[1] = l;
                return result;
                break;
            }
            l++;
        }
        i ++;
    }
    return result;
}