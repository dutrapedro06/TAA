#include <stdio.h>
#include <math.h>

int main (){

    int n;

    scanf("%d", &n);

    unsigned long long soma = 0;

    for (int i = 0; i < n; i++)
    {
        int numero;

        scanf("%d", &numero);

        unsigned long long elevado = pow(2, numero);

        soma = soma + elevado;
    }

    printf("%llu\n", soma);
    
}