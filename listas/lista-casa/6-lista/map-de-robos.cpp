#include <bits/stdc++.h>
using namespace std;

struct Estado {

    int l;
    int c;
    int dir;
};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int C, L;

    cin >> C >> L;

    vector<string> mapa(L);

    for (int i = 0; i < L; i++) 
    {
        cin >> mapa[i];
    }

    int dl[4] = {-1, 0, 1, 0};

    int dc[4] = {0, 1, 0, -1};

    vector<vector<vector<int>>> dist( L, vector<vector<int>>(C, vector<int>(4, -1)));

    queue<Estado> fila;

    dist[0][0][1] = 0;

    fila.push({0, 0, 1});

    while (!fila.empty()) 
    {

        Estado atual = fila.front();

        fila.pop();

        int l = atual.l;

        int c = atual.c;

        int dir = atual.dir;

        if (mapa[l][c] == '*') 
        {
            cout << "Caminho encontrado em " << dist[l][c][dir] << " passos!\n";

            return 0;
        }

        vector<int> proximasDirecoes;

        proximasDirecoes.push_back(dir);

        if (mapa[l][c] == '^')
        {
            proximasDirecoes.push_back(0);
        }
        else if (mapa[l][c] == '>')
        {
            proximasDirecoes.push_back(1);
        }
        else if (mapa[l][c] == 'v')
        {
            proximasDirecoes.push_back(2);
        }
        else if (mapa[l][c] == '<')
        {
            proximasDirecoes.push_back(3);
        }

        for (int novaDir : proximasDirecoes) 
        {

            int nl = l + dl[novaDir];

            int nc = c + dc[novaDir];

            if (nl < 0 || nl >= L || nc < 0 || nc >= C)
            {
                continue;
            }

            if (dist[nl][nc][novaDir] != -1)
            {
                continue;
            }

            dist[nl][nc][novaDir] = dist[l][c][dir] + 1;

            fila.push({nl, nc, novaDir});
        }
    }

    cout << "Caminho nao encontrado!\n";

    return 0;
}