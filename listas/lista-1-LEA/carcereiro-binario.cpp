#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

int main() {
    uint64_t N; // Valor no painel (estado das luzes codificado em binário)
    int Q;      // Número de consultas
    cin >> N >> Q;

    while (Q--) {
        int C; // Número da cela a ser consultada
        cin >> C;

        // Verifica se o bit na posição C está ligado (1) ou desligado (0)
        if (N & (1ULL << C)) {
            cout << "acesa" << endl;
        } else {
            cout << "apagada" << endl;
        }
    }

    return 0;
}
