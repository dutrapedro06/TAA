#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(int v, vector<vector<int>>& grafo, vector<bool>& visitado, int& tamanho) {
    visitado[v] = true;
    tamanho++;
    for (int vizinho : grafo[v]) {
        if (!visitado[vizinho]) {
            dfs(vizinho, grafo, visitado, tamanho);
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> grafo(N + 1);
    vector<bool> visitado(N + 1, false);

    for (int i = 0; i < M; ++i) {
        int A, B;
        cin >> A >> B;
        grafo[A].push_back(B);
        grafo[B].push_back(A);
    }

    int maiorGrupo = 0;

    for (int i = 1; i <= N; ++i) {
        if (!visitado[i]) {
            int tamanhoGrupo = 0;
            dfs(i, grafo, visitado, tamanhoGrupo);
            maiorGrupo = max(maiorGrupo, tamanhoGrupo);
        }
    }

    cout << "O grupo mais numeroso tem " << maiorGrupo << " aluno(s)" << endl;

    return 0;
}