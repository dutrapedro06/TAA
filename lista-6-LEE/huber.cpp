#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

typedef pair<int, int> PII;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<PII>> grafo(N + 1); // grafo[origem] = (destino, peso)

    for (int i = 0; i < M; ++i) {
        int U, V, W;
        cin >> U >> V >> W;
        grafo[U].push_back({V, W});
        grafo[V].push_back({U, W}); // grafo bidirecional
    }

    // Dijkstra do nó 1 até o nó N
    vector<int> dist(N + 1, INT_MAX);
    priority_queue<PII, vector<PII>, greater<PII>> fila;

    dist[1] = 0;
    fila.push({0, 1}); // (distância, nó)

    while (!fila.empty()) {
        int d = fila.top().first;
        int u = fila.top().second;
        fila.pop();

        if (d > dist[u]) continue;

        for (auto [v, peso] : grafo[u]) {
            if (dist[u] + peso < dist[v]) {
                dist[v] = dist[u] + peso;
                fila.push({dist[v], v});
            }
        }
    }

    if (dist[N] == INT_MAX) {
        cout << "Preso no IDP" << endl;
    } else {
        cout << "Distancia para chegar em casa: " << dist[N] << endl;
    }

    return 0;
}