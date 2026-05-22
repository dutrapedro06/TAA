#include <stdio.h>

int main (){

    int c, q;

    scanf("%d %d", &c, &q);

    int inicio[1001];
    int final[1001];

    for (int i = 0; i < c; i++)
    {
        scanf("%d %d", &inicio[i], &final[i]);
    }
    
    for (int i = 0; i < q; i++)
    {
        int p;
        scanf("%d", &p);

        int contador = 0;

        for (int j = 0; j < c; j++)
        {
            if (p >= inicio[j] && p <= final[j])
            {
                contador ++;
            }
            
        }
        
        if (contador == 0)
        {
            printf("Nao contem parafusos do tipo %d\n", p);
        }
        else
        {
            printf("Contem %d parafuso(s) do tipo %d\n", contador, p);
        }
        
    }

    return 0;
}