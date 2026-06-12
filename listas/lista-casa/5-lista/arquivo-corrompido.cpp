#include <bits/stdc++.h>
using namespace std;

int main (){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int l;
        
        cin >> l;

        vector<pair<int, string>> dados(l);

        for (int i = 0; i < l; i++)
        {
            cin >> dados[i].first >> dados[i].second;
        }

        sort(dados.begin(), dados.end());

        int contador = 0;

        for (int i = 1; i < l; i++)
        {
            if (dados[i] == dados[i - 1])
            {
                contador++;
            }
        }

        if (contador == 0)
        {
            cout << "Arquivo OK\n";
        }
        else
        {
            cout << "Corrompido com " << contador << " erro(s)\n";
        }
    }

    return 0;
}