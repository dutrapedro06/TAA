#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int to;
    int weight;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<vector<Edge>> graph(N + 1);

    for (int i = 0; i < M; i++) {
        int U, V, W;
        cin >> U >> V >> W;
        // Como não foi especificado, vou assumir que o grafo é não direcionado
        graph[U].push_back({V, W});
        graph[V].push_back({U, W});
    }

    // Distância mínima da casa 1 para todas as outras
    vector<int> dist(N + 1, INT_MAX);
    dist[1] = 0;

    // Min-heap para Dijkstra (distância, nó)
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, 1});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u]) continue;

        for (auto& e : graph[u]) {
            int v = e.to;
            int w = e.weight;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    // Procurar a maior distância mínima para as casas 2..N
    int maxDist = -1;
    for (int i = 2; i <= N; i++) {
        if (dist[i] == INT_MAX) {
            cout << "Impossivel chegar\n";
            return 0;
        }
        if (dist[i] > maxDist) {
            maxDist = dist[i];
        }
    }

    cout << "Casa mais distante a " << maxDist << " metros\n";

    return 0;
}
