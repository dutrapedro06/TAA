#include <stdio.h>

int main (){

    int t;

    unsigned long long n;

    scanf("%d", &t);

    unsigned long long resultado = 0;

    while (t --)
    {
        scanf("%llu", &n);

        resultado = resultado | n;
    }
    
    printf("%llu\n", resultado);

    return 0;
}