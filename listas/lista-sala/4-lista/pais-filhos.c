#include <stdio.h>

int main() {

    int n, c;

    scanf("%d", &n);

    int arvore[n + 1];

    for (int i = 1; i <= n; i++) {

        scanf("%d", &arvore[i]);
    }

    scanf("%d", &c);

    while (c --)
    {

        int consulta;

        scanf("%d", &consulta);

        if (n == 1 && arvore[1] == -1)
        {
            printf("NULL\n");

            continue;
        }
        else
        {
            int pai = consulta / 2;
            int esquerdo = 2 * consulta;
            int direito = 2 * consulta + 1;

            if (consulta == 1)
            {
                printf("RAIZ - ");
            }
            else
            {
                printf("%d - ", arvore[pai]);
            }

            if (esquerdo > n || arvore[esquerdo] == -1)
            {
                printf("NULL ");
            }
            else
            {
                printf("%d ", arvore[esquerdo]);
            }
            
            if (direito > n || arvore[direito] == -1)
            {
                printf("NULL\n");
            }
            else
            {
                printf("%d\n", arvore[direito]);
            }
        }
    }

    return 0;
}

