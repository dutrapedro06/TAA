#include <stdio.h>

void imprime_vetor(int vetor[], int tamanho){

    for (int i = 0; i < tamanho; i ++)
    {
        if (i == tamanho - 1)
        {
            printf("%d", vetor[i]);
            printf("\n");
        }
        else
        {
            printf("%d ", vetor[i]);
        }
    }
}

void bublle (int vetor[], int tam){

    int aux;
    
    imprime_vetor(vetor, tam);

    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = 0; j < tam - 1 - i; j++)
        {

            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;

                imprime_vetor(vetor, tam);
            }
        }
    }
}

int main (){

    int tamanho;

    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    bublle(vetor, tamanho);

    return 0;
}