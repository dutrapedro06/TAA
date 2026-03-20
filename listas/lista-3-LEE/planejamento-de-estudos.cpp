#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

bool podeResolver(const vector<ll>& exercicios, ll maxPorSessao, ll horas) {
    ll totalSessoes = 0;
    for (ll e : exercicios) {
        totalSessoes += (e + maxPorSessao - 1) / maxPorSessao; // Arredondamento para cima
        if (totalSessoes > horas) return false;
    }
    return totalSessoes <= horas;
}

int main() {
    int n;
    ll h;
    cin >> n >> h;

    vector<ll> exercicios(n);
    ll maior = 0;
    for (int i = 0; i < n; ++i) {
        cin >> exercicios[i];
        maior = max(maior, exercicios[i]);
    }

    ll esquerda = 1, direita = maior, resposta = maior;

    while (esquerda <= direita) {
        ll meio = (esquerda + direita) / 2;
        if (podeResolver(exercicios, meio, h)) {
            resposta = meio;
            direita = meio - 1;
        } else {
            esquerda = meio + 1;
        }
    }

    cout << resposta << endl;

    return 0;
}
