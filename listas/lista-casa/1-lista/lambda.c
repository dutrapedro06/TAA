#include <stdio.h>

int main (){

    int C, N;

    scanf("%d", &C);

    for (int i = 1; i <= C; i++)
    {
        scanf("%d", &N);

        long long anterior = 0, atual = 1, resultado = 0;

        if (N == 0)
        {

            printf("0\n");

            continue;
        }
        else if (N == 1)
        {

            printf("1\n");

            continue;
        }
    
        for (int j = 2; j <= N; j++)
        {
            resultado = 2 * atual + anterior;
            anterior = atual;
            atual = resultado;
        }
        
        printf("%lld\n", resultado);
    }
    
    return 0;
}