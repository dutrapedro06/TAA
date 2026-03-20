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

int contar_bits_um(long long v) {
    int count = 0;
    while (v > 0) {
        if (v & 1) count++;
        v >>= 1;
    }
    return count;
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        long long V;
        scanf("%lld", &V);

        int bits_um = contar_bits_um(V);

        if (eh_primo(bits_um)) {
            printf("%lld eh um pribit\n", V);
        } else {
            printf("%lld nao eh um pribit\n", V);
        }
    }

    return 0;
}
