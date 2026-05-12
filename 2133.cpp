class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {

        int n = matrix.size();

        // kiểm tra từng hàng
        for (int i = 0; i < n; i++) {

            unordered_set<int> row;

            for (int j = 0; j < n; j++) {
                row.insert(matrix[i][j]);
            }

            if (row.size() != n) {
                return false;
            }
        }

        // kiểm tra từng cột
        for (int j = 0; j < n; j++) {

            unordered_set<int> col;

            for (int i = 0; i < n; i++) {
                col.insert(matrix[i][j]);
            }

            if (col.size() != n) {
                return false;
            }
        }

        return true;
    }
};