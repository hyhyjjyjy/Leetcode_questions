class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int minSum = INT_MAX / 2;
        int size = nums.size();
        for (int i = 0; i < size - 2; i++) {
            int left = i + 1;
            int right = size - 1;
            while (left < right) {
                int sum = nums[i] + nums[right] + nums[left];
                if (abs(sum - target) < abs(minSum - target))
                    minSum = sum;
                if (sum == target)
                    return target;
                else if (sum < target)
                    left++;
                else
                    right--;
            }
        }


        return minSum;
    }
};