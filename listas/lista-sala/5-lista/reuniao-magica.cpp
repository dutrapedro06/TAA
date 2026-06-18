#include <bits/stdc++.h>
using namespace std;

int main (){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    while (t--)
    {
        string r, s;

        cin >> r >> s;

        set<char> cartasR;
        set<char> comuns;

        for (char c : r)
        {
            cartasR.insert(c);
        }
        
        for (char c : s)
        {
            if (cartasR.find(c) != cartasR.end())
            {
                comuns.insert(c);
            }
        }
        
        if (comuns.size() == 0)
        {
            cout << "Baralhos prontos para o duelo\n";
        }
        else
        {
            for (char c : comuns)
            {
                cout << c;
            }
            
            cout << "\n";
        }
    }
    
    return 0;
}

/*Guardar as cartas do primeiro jogador em um unordered_set.

Depois percorrer as cartas do segundo jogador e verificar quais também existem no primeiro baralho.

Estrutura usada
unordered_set
O que o algoritmo faz
1. Guarda as cartas do primeiro baralho.
2. Procura cartas iguais no segundo.
3. Remove repetições usando set.
4. Ordena.
5. Imprime as cartas em comum.
Complexidade
O(|R| + |S|)

*/