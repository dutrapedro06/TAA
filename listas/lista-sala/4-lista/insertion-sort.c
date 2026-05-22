#include <stdio.h>
#include <stdlib.h>

void imprime_vetor(int vetor[], int tamanho){

    for (int i = 0; i < tamanho; i++)
    {
        if (i == tamanho - 1)
        {
            printf("%d\n", vetor[i]);
        }
        else
        {
            printf("%d ", vetor[i]);
        }
    }
}

int main (){

    int n;

    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    int atual, contador = 0;

    for (int i = 1; i < n; i++)
    {
        imprime_vetor(vetor, n);

        atual = vetor[i];

        int j = i - 1;

        for (j = i - 1; j >= 0 && atual < vetor[j]; j--)
        {
            vetor[j + 1] = vetor[j];
            contador ++;
        }
        
        vetor[j + 1] = atual;

    }

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%d\n", vetor[i]);
        }
        else
        {
            printf("%d ", vetor[i]);
        }
        
    }

    printf("%d\n", contador);
    
    return 0;
}