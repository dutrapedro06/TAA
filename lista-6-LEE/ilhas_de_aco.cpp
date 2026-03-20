#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int M, N;
    cin >> M >> N; // M = número de ilhas (vértices), N = número de pontes (arestas)

    vector<vector<int>> grafo(M + 1); // ilhas numeradas de 1 a M
    vector<bool> visitado(M + 1, false);
    vector<int> distancia(M + 1, -1);

    for (int i = 0; i < N; ++i) {
        int X, Y;
        cin >> X >> Y;
        grafo[X].push_back(Y);
        grafo[Y].push_back(X); // grafo não-direcionado
    }

    // BFS
    queue<int> fila;
    fila.push(1);
    visitado[1] = true;
    distancia[1] = 0;

    while (!fila.empty()) {
        int atual = fila.front();
        fila.pop();

        for (int vizinho : grafo[atual]) {
            if (!visitado[vizinho]) {
                visitado[vizinho] = true;
                distancia[vizinho] = distancia[atual] + 1;
                fila.push(vizinho);
            }
        }
    }

    cout << distancia[M] << endl; // -1 se não foi alcançado

    return 0;
}