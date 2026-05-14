#include <stdio.h>

int main (){

    int N, a, somat = 0, somar = 0;

    scanf("%d", &N);

    for (int i = 0; i < N - 1; i++)
    {
        scanf("%d", &a);

        somat = somat + a;
    }

            for (int i = 1; i <= N; i++)
        {
            somar = somar + i;
            
        }

    int n = somar - somat;

    printf("%d", n);

    return 0;
}