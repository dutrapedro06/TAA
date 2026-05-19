#include <stdio.h>

int main() {

    int n, c;

    scanf("%d %d", &n, &c);

    int arvore[n + 1];

    for (int i = 1; i <= n; i++) {

        scanf("%d", &arvore[i]);
    }

    while (c--) {

        int consulta;

        scanf("%d", &consulta);

        if (arvore[1] == -1)
        {
            printf("NULL\n");

            continue;
        }
        
        if (consulta == 1)
        {
            printf("RAIZ\n");

            continue;
        }
        
        int pai = consulta/2;

        printf("%d\n", arvore[pai]);
    }

    return 0;
}