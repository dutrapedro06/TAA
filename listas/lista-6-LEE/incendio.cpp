#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int bfs(int origem, int destino, const vector<vector<int>>& grafo, int N) {
    vector<bool> visitado(N + 1, false);
    vector<int> dist(N + 1, -1);
    queue<int> fila;

    fila.push(origem);
    visitado[origem] = true;
    dist[origem] = 0;

    while (!fila.empty()) {
        int atual = fila.front();
        fila.pop();

        for (int vizinho : grafo[atual]) {
            if (!visitado[vizinho]) {
                visitado[vizinho] = true;
                dist[vizinho] = dist[atual] + 1;
                fila.push(vizinho);
            }
        }
    }

    return dist[destino];
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> grafo(N + 1);

    for (int i = 0; i < M; ++i) {
        int A, B;
        cin >> A >> B;
        grafo[A].push_back(B);
        grafo[B].push_back(A); // grafo não-direcionado
    }

    int C, E, F;
    cin >> C >> E >> F;

    int caminhoAgenteAteExtintor = bfs(C, E, grafo, N);
    int caminhoExtintorAteFoco = bfs(E, F, grafo, N);

    cout << (caminhoAgenteAteExtintor + caminhoExtintorAteFoco) << endl;

    return 0;
}