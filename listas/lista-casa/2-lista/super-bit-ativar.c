#include <stdio.h>
#include <math.h>

int main (){

    int n, b;
    scanf ("%d %d", &n, &b);

    unsigned long long numero;

    for (int i = 0; i < n; i++)
    {
        scanf("%llu", &numero);
        
        unsigned long long adicionar = pow(2, b);

        if ((numero / adicionar) % 2 == 0)
        {
            numero += adicionar;
        }

        printf("%llu\n", numero);
    }

    return 0;
}

/*forma mais eficiente 

#include <stdio.h>

int main (){

    int n, b;
    scanf("%d %d", &n, &b);

    unsigned long long numero;

    unsigned long long mascara = 1ULL << b;

    for (int i = 0; i < n; i++)
    {
        scanf("%llu", &numero);

        numero = numero | mascara;

        printf("%llu\n", numero);
    }

    return 0;
}
*/