class Solution {
public:
    int lengthOfLastWord(string s) {
        int val = 0, i = 0, count = 0;
        int size = s.length();
        while (i < size) {
            if (s[i] != ' ')
                count++;
            else {
                val = count == 0?val:count;
                count = 0;
            }
            i++;
        }

        return count == 0?val:count;
    }
};