class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0)
            return 0;
        unordered_map <char, int> characters;
        int i = 0, start = 0, max_val = 1;
        while (i < s.length()) {
            if (characters.find(s[i]) == characters.end())
                characters.emplace(s[i], i);
            else {
                start = max(characters.at(s[i]) + 1, start);
                characters.erase(s[i]);
                characters.emplace(s[i], i);
            }
            max_val = max(max_val, i - start + 1);
            i++;
        }
        return max_val;
    }
};