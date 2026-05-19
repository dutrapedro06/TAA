#include <stdio.h>
#include <stdlib.h>

int busca_binaria(int vetor[], int tamanho, int creditos){

    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim)
    {
        int meio = inicio + (fim - inicio) /2;

        if (vetor[meio] <=creditos)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }
    
    return fim + 1;
}

int comparar(const void *a, const void *b){

    int *x = (int *)a;
    int *y = (int *)b;

    return *x - *y;
}

int main (){

    int n;

    scanf("%d", &n);

    int cafes[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &cafes[i]);
    }
    
    int p;
    
    scanf("%d", &p);

    qsort(cafes, n, sizeof(int), comparar);

    int creditos;

    for (int i = 0; i < p; i++)
    {
        scanf("%d", &creditos);

        int resposta = busca_binaria(cafes, n, creditos);

        printf("%d\n", resposta);
    }
    
    return 0;
}