class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2)
            return n;
        int i, prv_1 = 1, prv_2= 2;
        for (i = 0; i < n - 2;i++) {
            int tmp = prv_2;
            prv_2 += prv_1;
            prv_1 = tmp;
        }
        return prv_2;
    }
};