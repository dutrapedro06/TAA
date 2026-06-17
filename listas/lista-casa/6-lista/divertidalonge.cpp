#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;

    cin >> N >> M;

    vector<vector<pair<int,int>>> G (N + 1);

    for (int i = 0; i < M; i++) 
    {
        int U, V, W;

        cin >> U >> V >> W;

        G[U].push_back({V, W});
        G[V].push_back({U, W});
    }

    vector<int> dist(N + 1, INF);

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

    dist[1] = 0;

    pq.push({0, 1});

    while (!pq.empty()) 
    {
        auto [d, u] = pq.top();

        pq.pop();

        if (d > dist[u])
        {
            continue;
        }

        for (auto [v, w] : G[u]) 
        {
            if (dist[v] > dist[u] + w) 
            {
                dist[v] = dist[u] + w;

                pq.push({dist[v], v});
            }
        }
    }

    int maior = 0;

    for (int i = 1; i <= N; i++) 
    {
        if (dist[i] == INF) 
        {
            cout << "Impossivel chegar\n";

            return 0;
        }

        maior = max(maior, dist[i]);
    }

    cout << "Casa mais distante a " << maior << " metros\n";

    return 0;
}