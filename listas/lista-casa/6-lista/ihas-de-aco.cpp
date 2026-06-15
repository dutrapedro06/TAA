#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;

    cin >> N >> M;

    vector<vector<int>> grafo(N + 1);

    for (int i = 0; i < M; i++) 
    {
        int X, Y;

        cin >> X >> Y;

        grafo[X].push_back(Y);
        grafo[Y].push_back(X);
    }

    vector<int> distancia(N + 1, -1);

    queue<int> fila;

    fila.push(1);

    distancia[1] = 0;

    while (!fila.empty()) 
    {
        int u = fila.front();

        fila.pop();

        for (int v : grafo[u]) 
        {
            if (distancia[v] == -1) 
            {
                distancia[v] = distancia[u] + 1;

                fila.push(v);
            }
        }
    }

    cout << distancia[N] << endl;

    return 0;
}