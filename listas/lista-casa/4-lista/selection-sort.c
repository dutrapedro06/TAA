#include <stdio.h>

int selection_sort(int tamanho, int vetor[]){

    int i = 0, j = 0, contador = 0;
    int menorposicao, aux;

    for (i = 0; i < tamanho; i++)
    {
        menorposicao = i;

        for (j = i + 1; j < tamanho; j++)
        {
            
            if (vetor[j] < vetor[menorposicao])
            {
                menorposicao = j;
            }
        }
        
        if (menorposicao != i)
        {
            aux = vetor[menorposicao];
            vetor[menorposicao] = vetor[i];
            vetor[i] = aux;

            contador ++;
        }
    }

    return contador;
}

int main (){

    int tamanho;
    
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    int contador = selection_sort(tamanho, vetor);

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
    
    printf("%d\n", contador);

    return 0;
}