#include <stdio.h>

typedef struct
{
    int posicao[2000];
    int cookies[2000];
}Dados;

int main (){

    int n, q;
    int inicio = 0, final = 0;
    Dados pessoa;

    scanf("%d %d", &n, &q);

    for (final = 0; final < n; final++)
    {
        scanf("%d",&pessoa.cookies[final]);
        pessoa.posicao[final] = final + 1;
    }
    
    int pAtual = 0;

    while (inicio < final)
    {
        if (pessoa.cookies[inicio] > q)
        {
            pessoa.cookies[inicio] -= q;

            pAtual = pessoa.posicao[inicio];

            pessoa.cookies[final] = pessoa.cookies[inicio];

            pessoa.posicao[final] = pessoa.posicao[inicio];

            final++;

            inicio++;
        }
        else
        {
            pAtual = pessoa.posicao[inicio];
            inicio ++;

        }
        
        
    }
    
    printf("%d", pAtual);

    return 0;
}