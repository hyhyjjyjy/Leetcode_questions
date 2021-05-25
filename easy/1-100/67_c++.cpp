class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size();
        int m = b.size();
        string & rslt = (n > m)?a:b;
        string & antr = (n <= m)?a:b;
        n = rslt.size();
        m = antr.size();
        int i, advance = 0;

        for (i = 1; i <= rslt.size(); i++) {
            int sum; 
            if (i <= m)
                sum = rslt[n - i] - '0' + antr[m - i] - '0' + advance;
            else 
                sum = rslt[n - i] - '0' + advance;
            rslt[n - i] = (sum == 0 || sum == 2)?'0':'1';
            advance = (sum > 1)?1:0;
        }
        if (advance == 1)
            rslt.insert(0, "1");
        
        return rslt;
    }
};