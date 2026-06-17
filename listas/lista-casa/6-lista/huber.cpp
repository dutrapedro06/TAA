#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;
const int MAXN = 805;

vector<pair<int,int>> G[MAXN];

int dist[MAXN];

int N, M;

void dijkstra(int origem) 
{
    memset(dist, INF, sizeof(dist));

    dist[origem] = 0;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    pq.push({0, origem});

    while (!pq.empty()) 
    {
        auto [d, u] = pq.top(); pq.pop();

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
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < M; i++) 
    {
        int u, v, w;

        cin >> u >> v >> w;

        G[u].push_back({v, w});

        G[v].push_back({u, w}); 
    }

    dijkstra(1);

    if (dist[N] == INF) 
    {
        cout << "Preso no IDP" << endl;
    } 
    else 
    {
        cout << "Distancia para chegar em casa: " << dist[N] << endl;
    }

    return 0;
}