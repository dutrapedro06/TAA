#include <iostream>
#include <vector>

using namespace std;

void dfs(int v, vector<vector<int>>& grafo, vector<bool>& visitado) {
    visitado[v] = true;
    for (int vizinho : grafo[v]) {
        if (!visitado[vizinho]) {
            dfs(vizinho, grafo, visitado);
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> grafo(N + 1); // Índices de 1 a N
    vector<bool> visitado(N + 1, false);

    for (int i = 0; i < M; ++i) {
        int U, V;
        cin >> U >> V;
        grafo[U].push_back(V);
        grafo[V].push_back(U);
    }

    // Começa a DFS a partir do nó 1
    dfs(1, grafo, visitado);

    // Verifica se todos foram visitados
    bool todosConectados = true;
    for (int i = 1; i <= N; ++i) {
        if (!visitado[i]) {
            todosConectados = false;
            break;
        }
    }

    if (todosConectados) {
        cout << "Todo mundo eh amigo de todo mundo" << endl;
    } else {
        cout << "Varios grupos de amigos" << endl;
    }

    return 0;
}