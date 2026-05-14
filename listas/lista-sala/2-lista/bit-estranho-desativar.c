#include <stdio.h>

int main (){

    int n, b;

    scanf("%d %d", &n, &b);

    
    for (int i = 0; i < n; i++)
    {
        int v;

        scanf("%d", &v);

        v = v & ~(1 << b);
        
        printf("%d\n", v);
    }
    
    return 0;
}