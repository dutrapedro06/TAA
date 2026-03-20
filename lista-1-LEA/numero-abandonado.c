#include <stdio.h>

int main() {
    int N;
    
    while (1) {
        scanf("%d", &N);
        if (N == -1) break;
        
        int num, resultado = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &num);
            resultado ^= num;
        }

        printf("%d\n", resultado);
    }

    return 0;
}