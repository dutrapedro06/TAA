#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int  a;

    cin >> a;

    set<string> itens;

    while (a --)
    {
        int p;
    
        cin >> p;

        for (int i = 0; i < p; i++)
        {
            string produto;

            cin >> produto;

            if (itens.count(produto) == 0)
            {
                itens.insert(produto);

                cout << "adicionando " << produto << "\n";
            }
            else
            {
                cout << produto << " ja tem\n";
            }
        }
    }
    
    cout << "Itens do churrasco:\n";

    for (auto produto : itens)
    {
        cout << produto << "\n";
    }
    
    return 0;
}