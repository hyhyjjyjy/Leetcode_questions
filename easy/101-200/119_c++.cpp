class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> line;
        line.push_back(1);
        if (rowIndex == 0)  
            return line;
        line.push_back(1);
        for (int i = 1; i < rowIndex; i++) {
            for (int l = 1; l < i + 1; l++) {
                int value = line[l - 1] + line[l];
                line.insert(line.begin()+l, value);
                line.erase(line.begin() + l - 1);
            }
            line.insert(line.begin(), 1);
        }
        return line;
    }
};