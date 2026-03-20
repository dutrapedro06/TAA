#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1e9; // Representa um valor "infinito"

int main() {
    int M, C;
    cin >> M >> C;

    vector<int> moedas(C);
    for (int i = 0; i < C; ++i) {
        cin >> moedas[i];
    }

    // dp[i] representa o menor número de moedas necessário para obter o valor i
    vector<int> dp(M + 1, INF);
    dp[0] = 0; // 0 moedas para formar o valor 0

    for (int i = 1; i <= M; ++i) {
        for (int j = 0; j < C; ++j) {
            if (i >= moedas[j]) {
                dp[i] = min(dp[i], dp[i - moedas[j]] + 1);
            }
        }
    }

    if (dp[M] == INF) {
        cout << "impossivel" << endl;
    } else {
        cout << dp[M] << endl;
    }

    return 0;
}
