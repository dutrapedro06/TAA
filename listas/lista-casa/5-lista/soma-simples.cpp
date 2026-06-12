#include <bits/stdc++.h>
using namespace std;

int main (){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;

    cin >> n >> k;

    unordered_set <int> procurar;

    int achou = 0;
    
    for (int i = 0; i < n; i++)
    {
        int numero;
        
        cin >> numero;
        
        int resultado = k - numero;
        
        if (procurar.find(resultado) != procurar.end())
        {
            achou ++;
        }
        
        procurar.insert(numero);

        if (achou > 0)
        {
            cout << numero << " " << resultado << "\n";

            break;
        }
    }
    
    if(achou == 0)
    {
        cout << "Nao existe\n";
    }

    return 0;
}