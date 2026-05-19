#include <stdio.h>

int main() {

    int n, c;

    scanf("%d %d", &n, &c);

    int arvore[n];

    for (int i = 0; i < n; i++) {

        scanf("%d", &arvore[i]);
    }

    while (c--) {

        int consulta;

        scanf("%d", &consulta);

        consulta = consulta - 1;

        if (consulta >= n || arvore[consulta] == -1)
        {
            printf("NULL\n");
            continue;
        }

        int indiceEsquerdo = 2 * consulta + 1;

        int indiceDireito = 2 * consulta + 2;

        if (indiceEsquerdo >= n || arvore[indiceEsquerdo] == -1) 
        {
            printf("NULL ");
        } 
        else 
        {
            printf("%d ", arvore[indiceEsquerdo]);
        }

        if (indiceDireito >= n || arvore[indiceDireito] == -1) 
        {
            printf("NULL\n");
        } 
        else 
        {
            printf("%d\n", arvore[indiceDireito]);
        }
    }

    return 0;
}