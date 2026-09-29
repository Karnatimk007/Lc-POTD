class Solution {
public:

    bool rec(int i, int j, int balance,
             vector<vector<char>>& grid,
             vector<vector<vector<int>>>& dp) {

        int n = grid.size();
        int m = grid[0].size();

        // Outside grid
        if (i >= n || j >= m)
            return false;

        // Update balance
        if (grid[i][j] == '(')
            balance++;
        else
            balance--;

        // Too many ')'
        if (balance < 0)
            return false;

        // Reached destination
        if (i == n - 1 && j == m - 1)
            return balance == 0;

        // Already calculated
        if (dp[i][j][balance] != -1)
            return dp[i][j][balance];

        bool down = rec(i + 1, j, balance, grid, dp);
        bool right = rec(i, j + 1, balance, grid, dp);

        return dp[i][j][balance] = down || right;
    }

    bool hasValidPath(vector<vector<char>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        // Valid parentheses string must have even length
        if ((n + m - 1) % 2 != 0)
            return false;

        // balance can be at most path length
        int len = n + m - 1;

        vector<vector<vector<int>>> dp(
            n,
            vector<vector<int>>(m,
                vector<int>(len + 1, -1)
            )
        );

        return rec(0, 0, 0, grid, dp);
    }
};