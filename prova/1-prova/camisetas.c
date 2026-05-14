#include <stdio.h>
#include <string.h>

int main() {

    int a, x;
    char opcao[10];
    int topo = -1;

    scanf("%d", &a);

    int pilha[a];
    int maior[a];

    while (a--) {

        scanf("%s", opcao);

        if (strcmp(opcao, "COLOCAR") == 0) {

            scanf("%d", &x);

            topo++;

            pilha[topo] = x;

            if (topo == 0) {
                maior[topo] = x;
            }
            else {
                if (x > maior[topo - 1]) {
                    maior[topo] = x;
                }
                else {
                    maior[topo] = maior[topo - 1];
                }
            }
        }

        else if (strcmp(opcao, "RETIRAR") == 0) {

            if (topo == -1) {
                printf("CAIXA VAZIA\n");
            }
            else {
                printf("%d REMOVIDO\n", pilha[topo]);
                topo--;
            }
        }

        else if (strcmp(opcao, "MAIOR") == 0) {

            if (topo == -1) {
                printf("CAIXA VAZIA\n");
            }
            else {
                printf("%d\n", maior[topo]);
            }
        }
    }

    return 0;
}