#include <bits/stdc++.h>
using namespace std;

bool bfs(int origem, int destino, vector<vector<int>> & grafo, int n){

    vector<bool> visitado(n + 1, false);

    queue<int> fila;

    fila.push(origem);

    visitado[origem] = true;

    while (fila.size() != 0)
    {
        int u = fila.front();
        fila.pop();

        if (u == destino)
        {
            return true;
        }

        for (int v : grafo[u])
        {
            if (visitado[v] == false)
            {
                visitado[v] = true;
                fila.push(v);
            }
        }
    }
    
    return false;
}

int main (){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;

    cin >> n >> m;

    vector<vector<int>> seguro(n + 1);
    vector<vector<int>> completo(n + 1);

    for (int i = 0; i < m; i++)
    {
        int a, b, t;

        cin >> a >> b >> t;

        completo[a].push_back(b);
        completo[b].push_back(a);

        if (t == 0)
        {
            seguro[a].push_back(b);
            seguro[b].push_back(a);
        }
    }

    int s, d;

    cin >> s >> d;

    if (bfs(s, d, seguro, n))
    {
        cout << "rota segura\n";
    }
    else if (bfs(s, d, completo, n))
    {
        cout << "rota insegura\n";
    }
    else
    {
        cout << "nenhuma rota\n";
    }
    
    return 0;
}