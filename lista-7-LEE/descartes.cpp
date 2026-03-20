#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[1001][1001]; // dp[l][r] representa o melhor resultado ao jogar com cartas de l a r
bool calculated[1001][1001];
vector<int> cartas;

int solve(int l, int r, bool pontuar) {
    if (l > r) return 0;
    if (calculated[l][r]) return dp[l][r];

    if (pontuar) {
        // Turno de pontuar: escolhe o melhor valor entre as pontas
        int op1 = cartas[l] + solve(l + 1, r, false);
        int op2 = cartas[r] + solve(l, r - 1, false);
        dp[l][r] = max(op1, op2);
    } else {
        // Turno de descartar: descarta a ponta que resultar na maior pontuação futura
        int op1 = solve(l + 1, r, true);
        int op2 = solve(l, r - 1, true);
        dp[l][r] = max(op1, op2);
    }

    calculated[l][r] = true;
    return dp[l][r];
}

int main() {
    int N;
    cin >> N;
    cartas.resize(N);
    for (int i = 0; i < N; ++i) {
        cin >> cartas[i];
    }

    cout << solve(0, N - 1, true) << endl;

    return 0;
}
