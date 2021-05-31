class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        vector<int> line;
        line.push_back(1);
        triangle.push_back(line);
        int i = 1;
        while (i < numRows) {
            int l = 0;
            line.clear();
            line.push_back(1);
            while (l < i - 1) {
                line.push_back(triangle[i - 1][l] + triangle[i - 1][l + 1]);
                l++;
            }
            line.push_back(1);
            triangle.push_back(line);
            i++;
        }
        return triangle;
    }
};