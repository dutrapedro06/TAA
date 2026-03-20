#include <iostream>
#include <vector>

using namespace std;

int main() {
    int M, C;
    cin >> M >> C;

    vector<int> moedas(C);
    for (int i = 0; i < C; ++i) {
        cin >> moedas[i];
    }

    vector<bool> dp(M + 1, false);
    dp[0] = true; // É sempre possível formar 0 com nenhuma moeda

    for (int i = 0; i < C; ++i) {
        for (int j = M; j >= moedas[i]; --j) {
            if (dp[j - moedas[i]]) {
                dp[j] = true;
            }
        }
    }

    cout << (dp[M] ? "SIM" : "NAO") << endl;

    return 0;
}
