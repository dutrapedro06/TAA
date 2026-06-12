#include <bits/stdc++.h>
using namespace std;

int main (){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;

    cin >> n >> k;

    vector<int> numeros(n);

    for (int i = 0; i < n; i++)
    {
        cin >> numeros[i];
    }
    
    int achou = 0;

    for (int i = 0; i < n; i++)
    {
        int alvo = k - numeros[i];

        unordered_set<int> procurar;

        for (int j = i + 1; j < n; j++)
        {
            int resultado = alvo - numeros[j];

            if (procurar.find(resultado) != procurar.end())
            {
                achou ++;
            }
            
            procurar.insert(numeros[j]);

            if (achou > 0)
            {
                cout << numeros[i] << " " << numeros[j] << " " << resultado << "\n";

                break;
            }
        }

        if (achou == 1)
        {
            break;
        }
    }

    if(achou == 0)
    {
        cout << "Nao existe\n";
    }

    return 0;
}