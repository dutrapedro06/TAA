// usei putchar no lugar do printf porque a saída é muito grande

#include <stdio.h>

int main (){

    int a;

    scanf("%d", &a);

    int frequencia[11] = {0};

    for (int i = 0; i < a; i++)
    {
        int nota;

        scanf("%d", &nota);

        frequencia[nota]++;
    }
    
    for (int i = 0; i < 11; i++)
    {
        while (frequencia[i] > 0)
        {
            if (i == 10)
            {
                putchar('1');
                putchar('0');
                putchar('\n');
            }
            else
            {
                putchar(i + '0');
                putchar('\n');
            }

            frequencia[i]--;
        }
    }
    
    return 0;
}