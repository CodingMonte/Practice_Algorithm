#include <string>
#include <vector>

#define MOD 1000000007

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (auto p : puddles)
        dp[p[1]][p[0]] = -1;

    dp[1][1] = 1;

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= m; j++) 
        {
            if (dp[i][j] == -1) 
            {
                dp[i][j] = 0;
            } 
            else 
            {
                if (i > 1) dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
                if (j > 1) dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
            }
        }
    }

    return dp[n][m];
}
