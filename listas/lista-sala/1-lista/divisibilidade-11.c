#include <stdio.h>
#include <string.h>

int main() {

    int D, resultado;
    char N[100005];

    while (1) {

        scanf("%d", &D);

        if (D == -1)
        {
            return 0;
        }

        scanf("%s", N);

        int soma_par = 0;
        int soma_impar = 0;

        for (int i = 0; N[i] != '\0'; i++) {

            int digito = N[i] - '0';

            if (i % 2 == 0)
            {
                soma_par = soma_par + digito;
            }
            else
            {
                soma_impar = soma_impar + digito;
            }
            
            
        }

        resultado = soma_par - soma_impar;

        if (resultado % 11 == 0)
        {
            printf("%s: %d - %d = %d - sim\n", N, soma_par, soma_impar, resultado);
        }
        else
        {
            printf("%s: %d - %d = %d - nao\n", N, soma_par, soma_impar, resultado);
        }
        
        
    }

    return 0;
}

