#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> grafo;
vector<bool> visitado;

void dfs(int u) {

    visitado[u] = true;

    for (int v : grafo[u])
    {
        if (visitado[v] == false)
        {
            dfs(v);
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;

    while (true)
    {
        cin >> n >> m;

        if (n == 0 && m == 0)
        {
            break;
        }

        grafo.clear();

        visitado.clear();

        grafo.resize(n + 1);

        visitado.resize(n + 1, false);

        for (int i = 0; i < m; i++)
        {
            int u, v;

            cin >> u >> v;

            grafo[u].push_back(v);
            grafo[v].push_back(u);
        }

        int componentes = 0;

        for (int i = 1; i <= n; i++)
        {
            if (visitado[i] == false)
            {
                dfs(i);
                
                componentes++;
            }
        }

        if (componentes == 1)
        {
            cout << "Todo mundo ja trocou figurinha com todo mundo" << endl;
        }
        else
        {
            cout << "Ainda ha oportunidades" << endl;
        }
    }

    return 0;
}