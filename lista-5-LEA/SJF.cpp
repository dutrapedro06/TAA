#include <iostream>
#include <queue>
#include <string>
using namespace std;

// Estrutura representando o detento
struct Detento {
    string nome;
    int tempo;

    // Operador de comparação para a fila de prioridade
    bool operator<(const Detento& outro) const {
        if (tempo != outro.tempo) {
            return tempo < outro.tempo; // prioridade para maior tempo
        }
        return nome < outro.nome; // ordem alfabética invertida
    }
};

int main() {
    int N;
    cin >> N;

    priority_queue<Detento> fila;

    // Lê os dados dos detentos
    for (int i = 0; i < N; ++i) {
        Detento d;
        cin >> d.nome >> d.tempo;
        fila.push(d);
    }

    // Enquanto houver detentos na fila
    while (!fila.empty()) {
        Detento atual = fila.top();
        fila.pop();

        // Imprime o uso atual
        cout << atual.nome << " " << atual.tempo << endl;

        // Reduz o tempo pela metade e reinsere se for maior que 1
        int novoTempo = atual.tempo / 2;
        if (novoTempo > 0) {
            fila.push({atual.nome, novoTempo});
        }
    }

    return 0;
}
