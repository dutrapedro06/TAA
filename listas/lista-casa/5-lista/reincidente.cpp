#include <bits/stdc++.h>
using namespace std;

int main (){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, int> frequencia;

    string nome;
    int valor;

    while (cin >> nome >> valor)
    {
        if (nome == "fim" && valor == 0)
        {
            break;
        }
        else
        {
            
            if (frequencia[nome] == 0)
            {
                cout << nome << " eh reu primario\n";
            }
            else
            {
                cout << nome << " eh reincidente com " << frequencia[nome]<< " crime(s)\n";
            }
            frequencia[nome] ++;
        }
    }
    return 0;
}