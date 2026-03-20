#include <bits/stdc++.h>
using namespace std;

const int MAX = 210;
const int oo = 1e9;

vector<pair<int, int>> conexoes[MAX]; 
bool visitado[MAX];

int prim(int M) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> fila;
    memset(visitado, false, sizeof(visitado));

    fila.push({0, 1}); 
    int custoTotal = 0;

    while (!fila.empty()) {
        int peso = fila.top().first;
        int u = fila.top().second;
        fila.pop();

        if (visitado[u]) continue;
        visitado[u] = true;
        custoTotal += peso;

        for (auto [v, w] : conexoes[u]) {
            if (!visitado[v]) {
                fila.push({w, v});
            }
        }
    }

    return custoTotal;
}

int main() {
    int casos;
    cin >> casos;

    while (casos--) {
        int postes, pares;
        cin >> postes >> pares;

        for (int i = 1; i <= postes; ++i) {
            conexoes[i].clear();
        }

        for (int i = 0; i < pares; ++i) {
            int u, v, peso;
            cin >> u >> v >> peso;
            conexoes[u].push_back({v, peso});
            conexoes[v].push_back({u, peso});
        }

        cout << prim(postes) << endl;
    }

    return 0;
}