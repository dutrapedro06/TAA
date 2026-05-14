#include <stdio.h>

#define MAX 1003

int main() {

    int N;

    scanf("%d", &N);

    int fila[MAX];

    int inicio = 0, fim = 0, tamanho = 0;

    for (int i = N; i >= 1; i--) {

        fila[fim] = i;

        fim = (fim + 1) % MAX;

        tamanho++;
    }

    int descartadas[MAX];

    int qtdDescartadas = 0;


    while (tamanho > 1) {

        descartadas[qtdDescartadas] = fila[inicio];

        qtdDescartadas++;

        inicio = (inicio + 1) % MAX;

        tamanho--;

        int topo = fila[inicio];

        inicio = (inicio + 1) % MAX;

        tamanho--;

        fila[fim] = topo;

        fim = (fim + 1) % MAX;

        tamanho++;
    }

    printf("Descarte: ");

    for (int i = 0; i < qtdDescartadas; i++) {
    
        if (i == 0) {
            
            printf("%d", descartadas[i]);
        } else {
            
            printf(", %d", descartadas[i]);
    }
}
printf("\n");

    printf("Ultima carta: %d\n", fila[inicio]);

    return 0;
}
/*Código em C++

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> cartas;
    for (int i = N; i >= 1; i--) {
        cartas.push(i);
    }

    vector<int> descartadas;

    while (cartas.size() > 1) {
        descartadas.push_back(cartas.front());
        cartas.pop();

        int topo = cartas.front();
        cartas.pop();
        cartas.push(topo);
    }

    cout << "Descarte:";
    for (int i = 0; i < (int)descartadas.size(); i++) {
        if (i == 0) {
            cout << " " << descartadas[i];
        } else {
            cout << ", " << descartadas[i];
        }
    }
    cout << "\n";

    cout << "Ultima carta: " << cartas.front() << "\n";

    return 0;
}
*/