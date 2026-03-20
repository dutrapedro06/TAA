#include <stdio.h>
#include <math.h>

int eh_primo(int num) {
    if (num < 2) return 0;
    if (num == 2 || num == 3) return 1;
    if (num % 2 == 0) return 0;
    
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        int V;
        scanf("%d", &V);
        
        if (eh_primo(V)) {
            printf("o numero %d eh primo\n", V);
        } else {
            printf("o numero %d nao eh primo\n", V);
        }
    }
    
    return 0;
}
