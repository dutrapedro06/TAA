#include <stdio.h>

int main(){

    int N, contador, a;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a);

        contador = 0;

        if (a == 1)
        {
            printf("o numero %d nao eh primo\n", a);
            continue;
        }
        
        if (a == 2)
        {
            printf("o numero %d eh primo\n", a);
            continue;
        }
        
        for (int j = 2; j * j <= a; j++)
        {
            if (a % j == 0)
            {
                contador++;
                break;
            }
        }
        
        if (contador == 0)
        {
            printf("o numero %d eh primo\n", a);
        }
        else
        {
            printf("o numero %d nao eh primo\n", a);
        }
    }
    
    return 0;
}