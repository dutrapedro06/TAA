//código sem usar o xor
#include <stdio.h>

int main (){

    int t;

    scanf("%d", &t);

    unsigned long long x, y;

    for (int i = 0; i < t; i++)
    {
        scanf("%llu %llu", &x, &y);

        int contador = 0;
        unsigned long long auxX = x;
        unsigned long long auxY = y;

        while ( auxX > 0 || auxY > 0)
        {
            int bitx = auxX % 2; 
            int bity = auxY % 2; 

            if (bitx != bity)
            {
                contador ++;
            }
            
            auxX = auxX / 2;
            auxY = auxY / 2;
        }
        
        printf("%d\n", contador);
    }
    

    return 0;
    
}

/*
código usando o XOR

#include <stdio.h>

int main (){

    int t;
    scanf("%d", &t);

    unsigned long long x, y;

    for (int i = 0; i < t; i++)
    {
        scanf("%llu %llu", &x, &y);

        unsigned long long res = x ^ y;
        int contador = 0;

        while (res > 0)
        {
            if (res % 2 == 1)
            {
                contador++;
            }

            res = res / 2;
        }

        printf("%d\n", contador);
    }

    return 0;
}
*/