class Solution {
public:
    int totalNQueens(int n) {
        
        vector<int> col(n, 0);
        vector<int> diag1(2*n, 0);
        vector<int> diag2(2*n, 0);
        
        int count = 0;
        
        backtrack(0, n, col, diag1, diag2, count);
        
        return count;
    }
    
    void backtrack(int row, int n,
                   vector<int>& col,
                   vector<int>& diag1,
                   vector<int>& diag2,
                   int& count) {
        
        if (row == n) {
            count++;
            return;
        }
        
        for (int c = 0; c < n; c++) {
            
            if (col[c] || diag1[row - c + n] || diag2[row + c])
                continue;
            
            col[c] = diag1[row - c + n] = diag2[row + c] = 1;
            
            backtrack(row + 1, n, col, diag1, diag2, count);
            
            col[c] = diag1[row - c + n] = diag2[row + c] = 0;
        }
    }
};