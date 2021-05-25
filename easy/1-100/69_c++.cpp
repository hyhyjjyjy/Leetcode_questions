class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1)
            return x;
        int val = x / 2;
        int right = x / 2;
        int left = 0;
        while (pow(val, 2) > x || pow(val + 1, 2) <= x) {
            val = (right - left) / 2 + left;
            if (pow(val, 2) >= x)
                right = val;
            else
                left = val;
        }
        return val;
    }
};