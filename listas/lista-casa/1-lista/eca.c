#include <stdio.h>

int main (){

    int N, P;

    while (1)
    {
        scanf("%d %d", &N, &P);
    
        if (N == -1 && P == -1)
        {
            return 0;
        }

        int freq[1001] = {0};

        int contador = 0;
    
        for (int i = 0; i < P; i++)
        {
            int valor;

            scanf("%d", &valor);

            freq[valor]++;
        }

        for (int i = 1; i <= N; i++)
        {
            if (freq[i] > 1)
            {
                contador++;
            }
        }

        printf("%d\n", contador);
    }

    return 0;
}