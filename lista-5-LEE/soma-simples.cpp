#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    long long K;
    cin >> N >> K;

    vector<long long> elementos(N);
    for (int i = 0; i < N; ++i) {
        cin >> elementos[i];
    }

    unordered_set<long long> vistos;

    for (int i = 0; i < N; ++i) {
        long long atual = elementos[i];
        long long complemento = K - atual;

        if (vistos.count(complemento)) {
            // Ordena os dois valores em ordem crescente na saída
            long long menor = min(atual, complemento);
            long long maior = max(atual, complemento);
            cout << menor << " " << maior << endl;
            return 0;
        }

        vistos.insert(atual);
    }

    cout << "Nao existe" << endl;
    return 0;
}
