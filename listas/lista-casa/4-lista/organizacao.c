#include <stdio.h>
#include <string.h>

int main (){


    int t;

    scanf("%d", &t);

    int n;
    while (t --)
    {
        
        scanf("%d", &n);

        char nomes[100][33];

        for (int i = 0; i < n; i++)
        {
            scanf("%s", nomes[i]);
        }
        char aux [33];

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (strlen(nomes[j]) > strlen(nomes[j + 1]))
                {
                    strcpy(aux, nomes[j]);
                    strcpy(nomes[j], nomes[j + 1]);
                    strcpy(nomes[j + 1], aux);
                }
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            if (i != (n - 1))
            {
                printf("%s ", nomes[i]);
            }

            else
            {
                printf("%s\n", nomes[i]);
            }
            
        }
        
    }
    
    return 0;
}