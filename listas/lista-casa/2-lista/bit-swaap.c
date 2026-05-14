#include <stdio.h>
#include <math.h>

int main (){

    int n;
    scanf ("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        unsigned long long numero1;
        unsigned long long numero2;
        int p;

        scanf("%llu %llu %d", &numero1, &numero2, &p);
        
        unsigned long long adicionar = pow(2, p);

        int bit1 = ((numero1 / adicionar) % 2);
        int bit2 = ((numero2 / adicionar) % 2);

        if (bit1 != bit2)
        {
            if (bit1 == 1)
            {
                numero1 = numero1 - adicionar;
            }
            else
            {
                numero1 = numero1 + adicionar;
            }
            
            if (bit2 == 1)
            {
                numero2 = numero2 - adicionar;
            }
            else
            {
                numero2 = numero2 + adicionar;
            }
        }
        printf("%llu %llu\n", numero1, numero2);
    }

    return 0;
}

/*forma mais eficiente:

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        unsigned long long numero1, numero2;
        int p;

        scanf("%llu %llu %d", &numero1, &numero2, &p);

        unsigned long long mascara = 1ULL << p;

        int bit1 = (numero1 & mascara) != 0;
        int bit2 = (numero2 & mascara) != 0;

        if (bit1 != bit2) {
            numero1 ^= mascara;
            numero2 ^= mascara;
        }

        printf("%llu %llu\n", numero1, numero2);
    }

    return 0;
}
*/