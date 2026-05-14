#include <stdio.h>
#include <string.h>

int main() {

    int D, soma;
    char N[100005];

    while (1) {

        scanf("%d", &D);

        if (D == -1)
        {
            return 0;
        }

        scanf("%s", N);

        soma = 0;

        for (int i = 0; N[i] != '\0'; i++) {

            soma += N[i] - '0';
        }

        if (soma % 3 == 0){

            printf("%d sim\n", soma);
        }
        else{
            
            printf("%d nao\n", soma);
        }
        
    }

    return 0;
}


/* meu código: 

#include <stdio.h>

int main() {

    int D, soma;
    long long N;

    while (1) {

        scanf("%d", &D);

        if (D == -1)
        {
            return 0;
        }

        scanf("%lld", &N);

        soma = 0;

        if (N == 0)
        {
            printf("0 sim\n");

            continue;
        }

        while (N > 0) {

            soma = soma + N % 10;
            N = N / 10;
        }

        if (soma % 3 == 0){

            printf("%d sim\n", soma);
        }
        else{

            printf("%d nao\n", soma);
        }

    }

    return 0;
}
    
*/