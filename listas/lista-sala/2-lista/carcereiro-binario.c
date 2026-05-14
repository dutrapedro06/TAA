#include <stdio.h>

int main (){

    unsigned long long n;
    int Q;

    scanf("%llu %d", &n, &Q);

    for (int i = 0; i < Q; i++)
    {
        int q; 

        scanf("%d", &q);

        if (n & (1ULL << q)){

            printf("acesa\n");
        }
        else
        {
            printf("apagada\n");
        }
        
    }

    return 0;
    
}