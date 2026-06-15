#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> grafo;
vector<bool> visitado;

int dfs(int u) {

    visitado[u] = true;

    int tamanho = 1;

    for (int v : grafo[u]) 
    {
        if (!visitado[v]) 
        {
            tamanho += dfs(v);
        }
    }

    return tamanho;
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
        int A, B;

        cin >> A >> B;

        grafo[A].push_back(B);
        grafo[B].push_back(A);
    }

    int maiorGrupo = 0;

    for (int i = 1; i <= N; i++) 
    {
        if (!visitado[i]) 
        {
            int tamanho = dfs(i);

            if (tamanho > maiorGrupo) 
            {
                maiorGrupo = tamanho;
            }
        }
    }

    cout << "O grupo mais numeroso tem " << maiorGrupo << " aluno(s)" << endl;

    return 0;
}