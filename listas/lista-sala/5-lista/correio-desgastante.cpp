#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> grafo;
vector<bool> visitado;

void dfs(int u){

    visitado[u] = true;

    for (int v : grafo[u])
    {
        if (visitado[v] == false)
        {
            dfs(v);
        }
    }
}

int main (){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;

    cin >> n >> m;

    grafo.resize(n + 1);

    visitado.resize(n + 1, false);

    for (int i = 0; i < m; i++)
    {
        int a, b;

        cin >> a >>b;

        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
    
    int componentes = 0;

    for (int i = 1; i <= n; i++)
    {
        if (visitado[i] == false)
        {
            dfs(i);

            componentes ++;
        }
    }
    
    cout << componentes - 1 << "\n";

    return 0;
}

/*B. Correio Desgastante (DFS)
Ideia

Cada aluno é um vértice e cada recado é uma aresta.

Precisamos descobrir quantos grupos (componentes conexas) existem.

Estrutura usada
DFS
O que o algoritmo faz
1. Monta o grafo.
2. Faz DFS em cada vértice não visitado.
3. Cada DFS encontra um grupo.
4. Conta quantos grupos existem.
5. Resposta = grupos - 1.
Complexidade
O(N + M)

B → DFS
   Contar componentes conexas.
*/