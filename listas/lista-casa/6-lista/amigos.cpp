#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> grafo;
vector<bool> visitado;

void dfs(int u) 
{
    visitado[u] = true;

    for (int v : grafo[u]) 
    {
        if (!visitado[v]) 
        {
            dfs(v);
        }
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;

    cin >> N >> M;

    grafo.resize(N + 1);

    visitado.resize(N + 1, false);

    for (int i = 0; i < M; i++) 
    {
        int U, V;

        cin >> U >> V;

        grafo[U].push_back(V);

        grafo[V].push_back(U);
    }

    dfs(1);

    bool conectado = true;

    for (int i = 1; i <= N; i++) 
    {
        if (!visitado[i]) {

            conectado = false;

            break;
        }
    }

    if (conectado) 
    {
        cout << "Todo mundo eh amigo de todo mundo\n";
    } 
    else 
    {
        cout << "Varios grupos de amigos\n";
    }

    return 0;
}