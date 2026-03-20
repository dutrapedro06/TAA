#include <bits/stdc++.h>
using namespace std;

struct Digimon {
    int fome;
    int ordem;
};

int main() {
    int a;
    cin >> a;
    cin.ignore();

    map<string, Digimon> digimons;
    int ordemChegada = 0;

    for (int i = 0; i < a; i++) {
        string linha;
        getline(cin, linha);

        stringstream ss(linha);
        vector<string> tokens;
        string palavra;
        while (ss >> palavra) {
            tokens.push_back(palavra);
        }

        string acao = tokens[0];

        if (acao == "CHEGA") {
            string nome = tokens[1];
            int fome = stoi(tokens[2]);
            digimons[nome] = {fome, ordemChegada};
            ordemChegada++;
        }
        else if (acao == "FOME") {
            string nome = tokens[1];
            int aumento = stoi(tokens[2]);
            if (digimons.count(nome)) {
                digimons[nome].fome += aumento;
            }
        }
        else if (acao == "SAI") {
            string nome = tokens[1];
            digimons.erase(nome);
        }
        else if (acao == "SERVE") {
            if (!digimons.empty()) {
                string nomeMaisFaminto;
                int maiorFome = -1;
                int menorOrdem = 1000000;

                for (auto& [nome, d] : digimons) {
                    if (d.fome > maiorFome || (d.fome == maiorFome && d.ordem < menorOrdem)) {
                        maiorFome = d.fome;
                        menorOrdem = d.ordem;
                        nomeMaisFaminto = nome;
                    }
                }

                cout << nomeMaisFaminto << "\n";
                digimons.erase(nomeMaisFaminto);
            }
        }
    }

    return 0;
}