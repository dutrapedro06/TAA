#include <bits/stdc++.h>
using namespace std;

int main() {
    int P, S;
    cin >> P >> S;

    map<string, array<string, 3>> escolhas;

    for (int i = 0; i < P; i++) {
        string participante, brinde1, brinde2, brinde3;
        cin >> participante >> brinde1 >> brinde2 >> brinde3;
        escolhas[participante] = {brinde1, brinde2, brinde3}; 
    }

    for (int i = 0; i < S; i++) {
        string nome, brindeRecebido;
        cin >> nome >> brindeRecebido;

        if (escolhas.find(nome) == escolhas.end()) {
            cout << nome << " queria ganhar qualquer coisa e ganhou " << brindeRecebido << "!" << endl;
        } else {
            auto& brindes = escolhas[nome];
            if (brindes[0] == brindeRecebido || brindes[1] == brindeRecebido || brindes[2] == brindeRecebido) {
                cout << nome << " conseguiu ganhar " << brindeRecebido << "!" << endl;
            } else {
                cout << nome << " infelizmente ganhou " << brindeRecebido << "..." << endl;
            }
        }
    }

    return 0;
}