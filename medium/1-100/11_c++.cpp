class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int max = 0;
        while (left < right) {
            int value = min(height[left], height[right]) * (right - left);
            max = value > max?value:max;
            if (height[left] >  height[right])
                right--;
            else
                left++;
        }
        return max;
    }
};