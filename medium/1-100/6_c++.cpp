class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        int size = s.size(), i = 0, currRow = 0;
        vector<string> maps(min(numRows, size));
        while (i < size) {
            while (currRow < numRows && i < size) {
                maps[currRow] += s[i];
                currRow++;
                i++;
            }
            currRow = numRows - 2;
            while (currRow > 0 && i < size) {
                maps[currRow] += s[i];
                currRow--;
                i++;
            }
        }
        string sNew("");
        for (string strs: maps)
            sNew += strs;
        return sNew;
    }
};