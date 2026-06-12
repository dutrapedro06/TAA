#include <bits/stdc++.h>
using namespace std;

int main (){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, c;

    cin >> m >> c;

    vector<vector<int>> tabela(m);

    for (int i = 0; i < c; i++)
    {
        int valor;
        cin >> valor;

        int indice = valor % m;

        tabela[indice].push_back(valor);
    }

    for (int i = 0; i < m; i++)
    {
        cout << i << " -> ";

        for (int j = 0; j < tabela[i].size(); j++)
        {
            cout << tabela[i][j] << " -> ";
        }

        cout << "\\\n";
    }

    return 0;
}