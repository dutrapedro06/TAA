#include <bits/stdc++.h>
using namespace std;

int main (){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;

    priority_queue<tuple<int, int, string>> digimons;

    map<string, int> vez;
    map<string, int> fome;
    map<string, int> ativo;

    for (int i = 1; i <= a; i++)
    {
        string acao;

        cin >> acao;

        if (acao == "CHEGA")
        {
            string nome;
            int valor;

            cin >> nome >> valor;

            vez[nome] = i;
            fome[nome] = valor;
            ativo[nome] = 1;

            digimons.push({valor, -i, nome});
        }
        else if (acao == "FOME")
        {
            string nome;
            int valor;

            cin >> nome >> valor;

            int valorAntigo = fome[nome];

            int novaFome = valorAntigo + valor;

            fome[nome] = novaFome;

            digimons.push({novaFome, -vez[nome], nome});
        }
        else if (acao == "SAI")
        {
            string nome;

            cin >> nome;

            ativo[nome] = 0;
        }
        else if (acao == "SERVE")
        {
            while (digimons.size() > 0)
            {
                
                int fomeFila = get<0>(digimons.top());
                int ordemFila = get<1>(digimons.top());
                string nomeFila = get<2>(digimons.top());

                digimons.pop();

                if (ativo[nomeFila] == 0)
                {
                    continue;
                }

                if (fomeFila != fome[nomeFila])
                {
                    continue;
                }

                cout << nomeFila << "\n";

                ativo[nomeFila] = 0;

                break;
            }
        }
    }

    return 0;
}