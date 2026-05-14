#include <stdio.h>

int main (){

    int t;

    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);

        int vetor[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &vetor[i]);
        }
        
        int resultado;
        scanf("%d", &resultado);
        
        int achou = 0;
        int esquerda = 0;
        int direita = n - 1;

        while (esquerda < direita)
        {
            int soma = vetor[esquerda] + vetor[direita];

            if (soma == resultado)
            {
                achou = 1; 
                break;
            }
            else if (soma < resultado)
            {
                esquerda ++;
            }
            else
            {
                direita --;
            }
        }
        
        if (achou == 1)
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
    }   

    return 0;
}

/*minha primeira solução mas deu time limit exceeded

#include <stdio.h>

int main (){

    int t;

    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);

        int vetor[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &vetor[i]);
        }
        
        int resultado;
        int achou = 0;
        

        scanf("%d", &resultado);

        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j > i; j--)
            {
                if (vetor[i] + vetor[j] == resultado)
                {
                    achou = 1;
                    break;
                }
                
                if (achou == 1)
                {
                    break;
                }
                
            }
            
        }
        
        if (achou == 1)
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
    }   
}
*/