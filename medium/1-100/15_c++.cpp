class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> retList;
        int n = nums.size();
        if (n < 3)
            return {};
        for (int i = 0; i < n - 2; i++) {
            if (nums[i] > 0)
                break;
            if (i != 0 && nums[i] == nums[i - 1])  {
                continue;
            }
            int left = i + 1, right = n - 1;
            while (left < right) {
                if (left != i + 1 && nums[left] == nums[left - 1]) {
                    left++;
                    continue;
                }
                if (right != n - 1 && nums[right] == nums[right + 1]) {
                    right--;
                    continue;
                }
                if (nums[right] + nums[left] + nums[i] == 0) {
                    retList.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }
                else if (nums[right] + nums[left] + nums[i] < 0)
                    left++;
                else
                    right--;
            }
        }
        return retList;
    }
};