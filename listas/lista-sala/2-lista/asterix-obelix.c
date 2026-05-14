#include <stdio.h>

int main (){

    int n;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        unsigned long long a, b;

        scanf("%llu %llu", &a, &b);

        unsigned long long resultado = a & b;

        int contador = 0;

        while (resultado)
        {
            if (resultado & 1)
            {
                contador ++;
            }
            
            resultado >>= 1;
        }
        
        printf("%d\n", contador);

    }

    return 0;
}