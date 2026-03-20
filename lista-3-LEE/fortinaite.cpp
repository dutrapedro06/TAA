#include <bits/stdc++.h>
using namespace std;

struct Jogador {
    string nome;
    int tempoTotal; // tempo em segundos
    string tempoStr;
};

// Ordena por tempo decrescente, depois por nome decrescente
bool comparar(const Jogador &a, const Jogador &b) {
    if (a.tempoTotal != b.tempoTotal)
        return a.tempoTotal > b.tempoTotal;
    return a.nome > b.nome; // ordem alfabética reversa
}

int main() {
    int J;
    cin >> J;
    vector<Jogador> jogadores;

    for (int i = 0; i < J; ++i) {
        string nome, tempo;
        cin >> nome >> tempo;

        size_t pos = tempo.find(':');
        int minutos = stoi(tempo.substr(0, pos));
        int segundos = stoi(tempo.substr(pos + 1));
        int totalSegundos = minutos * 60 + segundos;

        jogadores.push_back({nome, totalSegundos, tempo});
    }

    sort(jogadores.begin(), jogadores.end(), comparar);

    for (int i = 0; i < J; ++i) {
        cout << i + 1 << ". " << jogadores[i].tempoStr << " - " << jogadores[i].nome << endl;
    }

    return 0;
}
