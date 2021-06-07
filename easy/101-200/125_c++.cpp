class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty())
            return true;
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            while (!isalnum(s[left]) && left < right) {
                left++;
            }
            while (!isalnum(s[right]) && left < right) {
                right--;
            }
            if (left >= right)
                break;
            if (s[left] == s[right] || tolower(s[left]) == tolower(s[right])) {
                left++;
                right--;
            }
            else
                return false;
        }
        return true;
    }
};