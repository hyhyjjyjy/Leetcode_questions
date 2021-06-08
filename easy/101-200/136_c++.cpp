class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int bit = 0;
        for (int i = 0; i < nums.size(); i++) {
            bit = bit ^ nums[i];
        }
        return bit;
    }
};