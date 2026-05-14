#include <stdio.h>

#define MAX 1000000

int buscaPrimeiroMaior(int v[], int n, int x) {

    int ini = 0, fim = n - 1;

    int resposta = n;

    while (ini <= fim) {

        int meio = ini + (fim - ini) / 2;

        if (v[meio] > x) {

            resposta = meio;

            fim = meio - 1;

        } else {

            ini = meio + 1;
        }
    }

    return resposta;
}

int main() {

    int A, Q;

    scanf("%d %d", &A, &Q);

    int v[MAX];

    for (int i = 0; i < A; i++) {

        scanf("%d", &v[i]);
    }

    for (int i = 0; i < Q; i++) {

        int C;

        scanf("%d", &C);

        int pos = buscaPrimeiroMaior(v, A, C);

        int quantidade = A - pos;

        printf("%d notas maiores que %d\n", quantidade, C);
    }

    return 0;
}

/*Código em C++

#include <iostream>
#include <vector>
using namespace std;

int buscaPrimeiroMaior(const vector<int>& v, int x) {
    int ini = 0, fim = (int)v.size() - 1;
    int resposta = (int)v.size();

    while (ini <= fim) {
        int meio = ini + (fim - ini) / 2; // forma segura

        if (v[meio] > x) {
            resposta = meio;
            fim = meio - 1;
        } else {
            ini = meio + 1;
        }
    }

    return resposta;
}

int main() {
    int A, Q;
    cin >> A >> Q;

    vector<int> v(A);

    for (int i = 0; i < A; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < Q; i++) {
        int C;
        cin >> C;

        int pos = buscaPrimeiroMaior(v, C);
        int quantidade = A - pos;

        cout << quantidade << " notas maiores que " << C << "\n";
    }

    return 0;
}
*/