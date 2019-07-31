class Solution {
private:
    int r = 0;
public:
    int totalNQueens(int n) {
        r = 0;
        vector<vector<char>> b;
        for (int i = 0; i < n; i++) {
            vector<char> temp(n, '.');
            b.push_back(temp);
        }
        backtrack(b, 0, n);
        return r;
    }
    
    void backtrack(vector<vector<char>>& b, int row, int n) {
        if (row == n) {
            r += 1;
            return;
        }
        for (int i = 0; i < n; i++) {
            b[row][i] = 'Q';
            if (is_valid(b, row, i)) {
                backtrack(b, row+1, n);
            }
            b[row][i] = '.';
        }
        return;
    }
    
    bool is_valid(vector<vector<char>>& b, int row, int col) {
        // Check up
        for (int i = 1; row-i >= 0; i++) {
            if (b[row-i][col] == 'Q') {
                return false;
            }
        }
        // Check diagonal up right
        for (int i = 1; row-i >= 0 && col+i < b[0].size(); i++) {
            if (b[row-i][col+i] == 'Q') {
                return false;
            }
        }
        // Check diagonal up left
        for (int i = 1; row-i >= 0 && col-i >= 0; i++) {
            if (b[row-i][col-i] == 'Q') {
                return false;
            }
        }
        return true;
    }
};
