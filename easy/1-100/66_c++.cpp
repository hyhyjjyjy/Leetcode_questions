class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int advance = 1, i = 1;
        while (advance == 1 && i <= digits.size()) {
            advance = (digits[digits.size() - i] + 1) / 10;
            digits[digits.size() - i] = (digits[digits.size() - i] + 1) % 10;
            i++;
        }
        if (advance == 1 && i > digits.size()) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};