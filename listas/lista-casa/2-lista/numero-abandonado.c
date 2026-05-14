#include <stdio.h>

int main (){

    int n;

    while (1)
    {
        scanf("%d", &n);
        if (n == -1)
        {
            return 0;
        }
        
        int resultado = 0;
        int numero;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &numero);
            resultado = resultado ^ numero;
        }
        
        printf("%d\n", resultado);
    }
    
    return 0;
}