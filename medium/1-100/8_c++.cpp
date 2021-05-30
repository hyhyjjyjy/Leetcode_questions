class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        bool space_check = false, digit_check = false, is_positive = true, first_signal = false, zero_check = false;
        string nums;
        int str_size = s.size();
        while (i < str_size) {
            while (i < str_size && s[i] == ' ' && space_check == false)
                i++;
            space_check = true;
            if (s[i] >= '0' && s[i] <= '9') {
                while (i < str_size && s[i] == '0' && zero_check == false) {
                    i++;
                }
                if (s[i] < '0' || s[i] > '9') {
                    nums += '0';
                    break;
                }
                zero_check = true;
                digit_check = true;
                nums += s[i];
            }
            else {
                if (digit_check == false) {
                    if (s[i] == '+' || s[i] == '-') {
                        if (first_signal == false) {
                            is_positive = (s[i] == '-')?false:true;
                            first_signal = true;
                        }
                        else {
                            nums += '0';
                            break;
                        }
                    }
                    else {
                        nums += '0';
                        break;
                    }
                }
                else 
                    break;
            }
            i++;
        }
        string STR_MAX("2147483647"), STR_MIN("2147483648");
        int val = 0, size = nums.size();
        if (nums.size() > 10)
            return (is_positive == true)?INT_MAX:INT_MIN;
        if (is_positive == true && nums.compare(STR_MAX) >= 0 && size == 10)
            return INT_MAX;
        if (is_positive == false && nums.compare(STR_MIN) >= 0 && size == 10)
            return INT_MIN;

        for (i = 0;i < size; i++) {
            val = val * 10 + (nums[i] - '0');
        }
        return (is_positive == true)?val:~val + 1;
    }
};