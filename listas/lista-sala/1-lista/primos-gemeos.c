#include <stdio.h>

int ehPrimo(int a){

    int contador = 0;

    if (a < 2)
    {
        return 0;
    }
    
    for (int i = 2; i * i <= a ; i++)
    {
        if (a % i == 0)
        {
            contador ++;
            break;
        }
        
    }

    if (contador == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main (){

    int N, a;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a);

        if (ehPrimo(a) && (ehPrimo(a - 2) || ehPrimo(a + 2)))
        {
            printf("O numero %d eh um primo gemeo\n", a);
        }
        else
        {
            printf("O numero %d nao eh um primo gemeo\n", a);
        }
    }
    
    return 0;
}
