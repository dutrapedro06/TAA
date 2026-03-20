#include <stdio.h>

void collatz_sequence(long long N) {
    while (N != 1) {
        printf("%lld ", N);
        if (N % 2 == 0) {
            N /= 2;
        } else {
            N = 3 * N + 1;
        }
    }
    printf("1\n");
}

int main() {
    long long N;
    scanf("%lld", &N);
    collatz_sequence(N);
    return 0;
}
