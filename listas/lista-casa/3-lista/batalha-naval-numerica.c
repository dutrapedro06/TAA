#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int valor;
    int linha;
    int coluna;
} Registro;

int comparar(const void *a, const void *b) {

    const Registro *x = (const Registro *)a;

    const Registro *y = (const Registro *)b;

    if (x->valor < y->valor) return -1;
    if (x->valor > y->valor) return 1;

    if (x->linha < y->linha) return -1;
    if (x->linha > y->linha) return 1;

    if (x->coluna < y->coluna) return -1;
    if (x->coluna > y->coluna) return 1;

    return 0;
}

int buscaPrimeiraOcorrencia(Registro v[], int n, int alvo) {

    int esquerda = 0;

    int direita = n - 1;

    int resposta = -1;

    while (esquerda <= direita) {

        int meio = (esquerda + direita) / 2;

        if (v[meio].valor == alvo) {

            resposta = meio;

            direita = meio - 1;

        } else if (v[meio].valor < alvo) {

            esquerda = meio + 1;

        } else {

            direita = meio - 1;
        }
    }

    return resposta;
}

int main() {

    int N, M, Q;

    scanf("%d %d %d", &N, &M, &Q);

    int total = N * M;

    Registro *v = malloc(total * sizeof(Registro));

    if (v == NULL) {

        return 1;
    }

    int k = 0;

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < M; j++) {

            scanf("%d", &v[k].valor);

            v[k].linha = i;

            v[k].coluna = j;

            k++;
        }
    }

    qsort(v, total, sizeof(Registro), comparar);

    for (int i = 0; i < Q; i++) {

        int alvo;

        scanf("%d", &alvo);

        int pos = buscaPrimeiraOcorrencia(v, total, alvo);

        if (pos == -1) {

            printf("-1 -1\n");

        } else {

            printf("%d %d\n", v[pos].linha, v[pos].coluna);
        }
    }

    free(v);

    return 0;
}
/*
Código em C++
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Registro {
    int valor;
    int linha;
    int coluna;
};

// função de comparação para o sort
bool comparar(const Registro &x, const Registro &y) {
    if (x.valor != y.valor)
        return x.valor < y.valor;

    if (x.linha != y.linha)
        return x.linha < y.linha;

    return x.coluna < y.coluna;
}

// busca binária para primeira ocorrência
int buscaPrimeiraOcorrencia(const vector<Registro> &v, int alvo) {
    int esquerda = 0;
    int direita = v.size() - 1;
    int resposta = -1;

    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;

        if (v[meio].valor == alvo) {
            resposta = meio;
            direita = meio - 1; // continua buscando à esquerda
        } else if (v[meio].valor < alvo) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }

    return resposta;
}

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;

    int total = N * M;

    vector<Registro> v(total);

    int k = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> v[k].valor;
            v[k].linha = i;
            v[k].coluna = j;
            k++;
        }
    }

    sort(v.begin(), v.end(), comparar);

    for (int i = 0; i < Q; i++) {
        int alvo;
        cin >> alvo;

        int pos = buscaPrimeiraOcorrencia(v, alvo);

        if (pos == -1) {
            cout << "-1 -1\n";
        } else {
            cout << v[pos].linha << " " << v[pos].coluna << "\n";
        }
    }

    return 0;
}

*/