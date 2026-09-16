class Solution {
public:
    const int MOD = 1e9 + 7;

    int numberOfSets(int n, int k) {
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

        // k = 0 -> one way
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }

        for (int seg = 1; seg <= k; seg++) {

            // suffix sum of dp[x][seg-1]
            vector<int> pre(n + 1, 0);

            for (int x = n - 1; x >= 0; x--) {
                pre[x] = (pre[x + 1] + dp[x][seg - 1]) % MOD;
            }

            for (int i = n - 1; i >= 0; i--) {

                // Skip i
                long long sp = dp[i + 1][seg];

                // Choose segment (i, j), j > i
                long long t = pre[i + 1];

                dp[i][seg] = (sp + t) % MOD;
            }
        }

        return dp[0][k];
    }
};