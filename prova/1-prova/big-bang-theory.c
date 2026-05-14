/*
F(n) = 1 , se n = 1
F(n) = 1 , se n = 2
F(n) = F(F(n-1)) + F (n - F(n-1))
*/

#include <stdio.h>

int F(int numero){

    if (numero == 1)
    {
        return 1;
    }
    else if (numero == 2)
    {
        return 1;
    }
    else
    {
        int resultado = F(F(numero-1)) + F (numero - F(numero-1));

        return resultado;
    }
}

int main (){

    int n, c;

    scanf("%d", &c);

    while (c --)
    {
        scanf("%d",&n);

        int resultado = F(n);

        printf("%d\n",resultado);
    }
    
    return 0;
}