#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(int origem, const vector<vector<int>>& grafo, int N){

    vector<int> dist(N + 1, -1);

    queue<int> fila;

    dist[origem] = 0;

    fila.push(origem);

    while (!fila.empty()) 
    {
        int u = fila.front();

        fila.pop();

        for (int v : grafo[u]) 
        {
            if (dist[v] == -1) 
            {
                dist[v] = dist[u] + 1;

                fila.push(v);
            }
        }
    }

    return dist;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;

    cin >> N >> M;

    vector<vector<int>> grafo(N + 1);

    for (int i = 0; i < M; i++) 
    {
        int A, B;

        cin >> A >> B;

        grafo[A].push_back(B);
        grafo[B].push_back(A);
    }

    int C, E, F;
    
    cin >> C >> E >> F;

    vector<int> distAgente = bfs(C, grafo, N);
    vector<int> distExtintor = bfs(E, grafo, N);

    int resposta = distAgente[E] + distExtintor[F];

    cout << resposta << '\n';

    return 0;
}