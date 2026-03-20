#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int linhas, colunas, consultas;
    cin >> linhas >> colunas >> consultas;
    vector<vector<int>> matriz(linhas, vector<int>(colunas));
    unordered_map<int, pair<int, int>> posicao;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cin >> matriz[i][j];

            if (posicao.find(matriz[i][j]) == posicao.end())
            {
                posicao[matriz[i][j]] = {i, j};
            }
        }
    }

    while (consultas--)
    {
        int numero;
        cin >> numero;

        if (posicao.count(numero))
            cout << posicao[numero].first << " " << posicao[numero].second << '\n';
        else
            cout << "-1 -1\n";
    }
    return 0;



}