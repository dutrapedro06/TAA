#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> grafo;
vector<bool> visitado;

void dfs(int u) {
    visitado[u] = true;
    for (int v : grafo[u]) {
        if (!visitado[v]) {
            dfs(v);
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    grafo.resize(N + 1);
    visitado.resize(N + 1, false);

    // Leitura dos pares
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        grafo[u].push_back(v);
        grafo[v].push_back(u);  // Grafo não direcionado
    }

    int gangues = 0;

    // Conta os componentes conexos
    for (int i = 1; i <= N; i++) {
        if (!visitado[i]) {
            dfs(i);
            gangues++;
        }
    }

    cout << gangues << " gangue(s) no clube da briga" << endl;

    return 0;
}
