class Solution {
public:
    vector<string> characters = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> rt_string;
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0)
            return rt_string;
        deepTraverse(0, digits, "");
        return rt_string;
    }

    void deepTraverse(int pos, string digits, string currString) {
        if (pos == digits.size()) {
            rt_string.push_back(currString);
            return;
        }
        for (auto character: characters[digits[pos] - '1']) {
            string tmp = currString;
            tmp += character;
            deepTraverse(pos + 1, digits, tmp);
        }
    }
};