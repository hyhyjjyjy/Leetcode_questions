class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        pre = 0
        max = -10**5 - 1
        for i in range(len(nums)):
            if pre > 0:
                pre += nums[i]
            else:
                pre = nums[i]
            if pre > max:
                max = pre

        return max