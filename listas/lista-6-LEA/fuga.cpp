#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;

vector<int> graph[MAXN];
bool camera[MAXN];
int dist[MAXN];

int bfs(int start, int end, bool avoidCameras) {
    for (int i = 0; i < MAXN; i++) dist[i] = -1;

    if (avoidCameras && camera[start]) return -1; // início numa câmera

    queue<int> q;
    q.push(start);
    dist[start] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        if (u == end) return dist[u];

        for (int v : graph[u]) {
            if (dist[v] == -1 && (!avoidCameras || !camera[v])) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return -1; // não chegou ao destino
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, C;
    cin >> N >> M >> C;

    memset(camera, false, sizeof(camera));

    for (int i = 0; i < C; i++) {
        int p; cin >> p;
        camera[p] = true;
    }

    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        graph[A].push_back(B);
        graph[B].push_back(A);
    }

    int E, S, K;
    cin >> E >> S >> K;

    // 1. Distância pátio → chave (sem passar por câmeras)
    int d1 = bfs(E, K, true);
    // 2. Distância chave → pátio (sem passar por câmeras)
    int d2 = bfs(K, E, true);
    // 3. Distância pátio → saída (considerando todos)
    int d3 = bfs(E, S, false);

    if (d1 == -1 || d2 == -1 || d3 == -1) {
        cout << "impossivel fugir\n";
    } else {
        cout << d1 + d2 << " " << d3 << "\n";
    }

    return 0;
}
