#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> V(N), P(N);
    for (int i = 0; i < N; ++i) cin >> V[i]; // Valores
    for (int i = 0; i < N; ++i) cin >> P[i]; // Pesos

    int W;
    cin >> W; // Capacidade da sacola

    vector<int> dp(W + 1, 0); // dp[w] = valor máximo com peso w

    for (int i = 0; i < N; ++i) {
        for (int w = W; w >= P[i]; --w) {
            dp[w] = max(dp[w], dp[w - P[i]] + V[i]);
        }
    }

    cout << dp[W] << endl;

    return 0;
}
