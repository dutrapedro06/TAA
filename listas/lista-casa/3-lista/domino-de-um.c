#include <stdio.h>

#define MAX 21000

typedef struct {

    int a;
    int b;

} Pedra;

int main() {

    int P;
    scanf("%d", &P);

    Pedra fila[MAX];

    int ini = 0, fim = 0;

    for (int i = 0; i < P; i++) {

        scanf("%d %d", &fila[fim].a, &fila[fim].b);

        fim++;
    }

    while (ini < fim) {

        Pedra atual = fila[ini];

        ini++;

        printf("%d %d\n", atual.a, atual.b);

        if (ini < fim) {

            Pedra proxima = fila[ini];
            ini++;


            if (proxima.a + proxima.b == 7) {

                fila[fim] = proxima;

                fim++;
            }
        }
    }

    return 0;
}

/*Código em C++

#include <iostream>
#include <queue>
using namespace std;

int main() {
    int P;
    cin >> P;

    queue<pair<int, int>> pedras;

    for (int i = 0; i < P; i++) {
        int a, b;
        cin >> a >> b;
        pedras.push({a, b});
    }

    while (!pedras.empty()) {
        pair<int, int> atual = pedras.front();
        pedras.pop();

        cout << atual.first << " " << atual.second << "\n";

        if (!pedras.empty()) {
            pair<int, int> proxima = pedras.front();
            pedras.pop();

            if (proxima.first + proxima.second == 7) {
                pedras.push(proxima);
            }
        }
    }

    return 0;
}
*/