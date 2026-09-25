class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ret;

        while (!matrix.empty()) {

            // 1) Add first row
            for (int x : matrix[0]) {
                ret.push_back(x);
            }
            matrix.erase(matrix.begin());

            // 2) Add last element of every row
            if (!matrix.empty() && !matrix[0].empty()) {
                for (auto& row : matrix) {
                    ret.push_back(row.back());
                    row.pop_back();
                }
            }

            // 3) Add last row in reverse
            if (!matrix.empty()) {
                for (int i = matrix.back().size() - 1; i >= 0; i--) {
                    ret.push_back(matrix.back()[i]);
                }
                matrix.pop_back();
            }

            // 4) Add first element of every row in reverse
            if (!matrix.empty() && !matrix[0].empty()) {
                for (int i = matrix.size() - 1; i >= 0; i--) {
                    ret.push_back(matrix[i][0]);
                    matrix[i].erase(matrix[i].begin());
                }
            }
        }

        return ret;
    }
};