#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparar(const void *a, const void *b){

    char *palavra1 = (char *)a;
    char *palavra2 = (char *)b;

    int tamanho1 = strlen(palavra1);
    int tamanho2 = strlen(palavra2);

    if (tamanho1 != tamanho2)
    {
        return tamanho1 - tamanho2;
    }
    
    return strncmp(palavra1, palavra2, tamanho1);
}

int main (){

    int n;

    scanf("%d", &n);

    char palavras[n][102];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", palavras[i]);
    }
    
    qsort(palavras, n, sizeof(palavras[0]), comparar);

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", palavras[i]);
    }
    
    return 0;
}

/*código funcionaria do mesmo jeito se na função comparar em vez de colocar strncmp usasse o strcmp e não colocasse o tamanho no final

ex: return strcmp(palavra1, palavra2);

*/