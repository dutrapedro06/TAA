#include <stdio.h>
 
int main() {
    long long N;
    scanf("%lld", &N);
    
    long long soma_total = (N * (N + 1)) / 2;
    long long soma_parcial = 0;
    
    for (long long i = 0; i < N - 1; i++) {
        long long num;
        scanf("%lld", &num);
        soma_parcial += num;
    }
    
    printf("%lld\n", soma_total - soma_parcial);
    
    return 0;
}