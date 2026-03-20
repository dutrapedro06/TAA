#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int MOD = 1000000007;
int main() {
    int L, C;
    cin >> L >> C;
    vector<string> grid(L);
    for (int i = 0; i < L; ++i) {
        cin >> grid[i];
    }
    vector<vector<int>> dp(L, vector<int>(C, 0));
    if (grid[0][0] == '_') dp[0][0] = 1;
    // Preencher a primeira linha
    for (int j = 1; j < C; ++j) {
        if (grid[0][j] == '_') {
            dp[0][j] = dp[0][j - 1];
        }
    }
    // Preencher a primeira coluna
    for (int i = 1; i < L; ++i) {
        if (grid[i][0] == '_') {
            dp[i][0] = dp[i - 1][0];
        }
    }
    // Preencher o resto do tabuleiro
    for (int i = 1; i < L; ++i) {
        for (int j = 1; j < C; ++j) {
            if (grid[i][j] == '_') {
                if (grid[i - 1][j] == '_') dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
                if (grid[i][j - 1] == '_') dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
            }
        }
    }
    if (grid[L - 1][C - 1] == '#' || dp[L - 1][C - 1] == 0) {
        cout << -1 << endl;
    } else {
        cout << dp[L - 1][C - 1] << endl;
    }

    return 0;
}
