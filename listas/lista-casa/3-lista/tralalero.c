#include <stdio.h>

#define MAX 1003

long long t[MAX], k[MAX];

int N;

long long X;

long long contaVisualizacoes(long long tempo) {

    long long total = 0;

    for (int i = 0; i < N; i++) {

        if (tempo >= t[i]) {

            total += 1 + (tempo - t[i]) / k[i];
        }
    }

    return total;
}

int main() {

    scanf("%d %lld", &N, &X);

    for (int i = 0; i < N; i++) {

        scanf("%lld %lld", &t[i], &k[i]);
    }

    long long esquerda = 0;

    long long direita = 1;

    while (contaVisualizacoes(direita) < X) {

        direita *= 2;
    }

    while (esquerda < direita) {

        long long meio = esquerda + (direita - esquerda) / 2;

        if (contaVisualizacoes(meio) >= X) {

            direita = meio;

        } else {
            
            esquerda = meio + 1;
        }
    }

    printf("%lld\n", esquerda);

    return 0;
}

/*Código em C++

#include <iostream>
#include <vector>
using namespace std;

int N;
long long X;
vector<long long> t, k;

long long contaVisualizacoes(long long tempo) {
    long long total = 0;

    for (int i = 0; i < N; i++) {
        if (tempo >= t[i]) {
            total += 1 + (tempo - t[i]) / k[i];
        }
    }

    return total;
}

int main() {
    cin >> N >> X;

    t.resize(N);
    k.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> t[i] >> k[i];
    }

    long long esquerda = 0;
    long long direita = 1;

    while (contaVisualizacoes(direita) < X) {
        direita *= 2;
    }

    while (esquerda < direita) {
        long long meio = esquerda + (direita - esquerda) / 2;

        if (contaVisualizacoes(meio) >= X) {
            direita = meio;
        } else {
            esquerda = meio + 1;
        }
    }

    cout << esquerda << "\n";

    return 0;
}
*/