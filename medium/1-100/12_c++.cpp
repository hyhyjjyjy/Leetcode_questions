class Solution {
public:
    string intToRoman(int num) {
        string romanNum("");
        int digit = num / 1000;
        for (int i = 0; i < digit;i++)
            romanNum += "M";
        
        num = num - digit * 1000;
        digit = num / 100;
        if (digit == 9 || digit == 4)
            romanNum += digit == 9? "CM":"CD";
        else {
            romanNum += digit >= 5 ? "D":"";
            for (int i = 0; i < ((digit >= 5)?digit - 5:digit);i++)
                romanNum += "C";
        }

        num = num - digit * 100;
        digit = num / 10;
        if (digit == 9 || digit == 4)
            romanNum += digit == 9? "XC":"XL";
        else {
            romanNum += digit >= 5 ? "L":"";
            for (int i = 0; i < ((digit >= 5)?digit - 5:digit);i++)
                romanNum += "X";
        }

        num = num - digit * 10;
        digit = num;
        if (digit == 9 || digit == 4)
            romanNum += digit == 9? "IX":"IV";
        else {
            romanNum += digit >= 5 ? "V":"";
            for (int i = 0; i < ((digit >= 5)?digit - 5:digit);i++)
                romanNum += "I";
        }

        return romanNum;
    }
};