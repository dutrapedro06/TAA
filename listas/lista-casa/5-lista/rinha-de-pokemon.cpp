#include <bits/stdc++.h>
using namespace std;

int main (){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p;

    cin >> p;

    priority_queue<pair<int, string>> pokemons;

    for (int i = 0; i < p; i++)
    {
        string nome;

        int forca;

        cin >> nome >> forca;

        pokemons.push({forca, nome});
    }

    while (pokemons.size() >= 2)
    {
        int primeiraForca = pokemons.top().first;
        string nomePrimeiroPokemon = pokemons.top().second;
        
        pokemons.pop();

        int segundaForca = pokemons.top().first;
        string nomeSegundoPokemon = pokemons.top().second;

        pokemons.pop();

        int resultado = primeiraForca - segundaForca;

        cout << nomePrimeiroPokemon << " (" << primeiraForca << ") x (" << segundaForca << ") " << nomeSegundoPokemon;

        if (primeiraForca == segundaForca)
        {
            cout << " : empate\n";
        }
        else
        {
            cout << " : "<< nomePrimeiroPokemon << " venceu\n";
            
            pokemons.push({resultado, nomePrimeiroPokemon});
        }
    }
    
    if (pokemons.size() == 0)
    {
        cout << "nenhum vencedor\n";
    }
    else
    {
        int forcaVencedor = pokemons.top().first;
        string nomeVencedor = pokemons.top().second;
    
        cout << nomeVencedor << " venceu com " << forcaVencedor << "\n";
    }
    
    
    return 0;
}