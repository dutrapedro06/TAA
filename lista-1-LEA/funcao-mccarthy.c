#include <stdio.h>

long long calcularMcCarthy(long long num) {
    if (num > 100) {
        return num - 10;
    } else {
        return calcularMcCarthy(calcularMcCarthy(num + 11));
    }
}

int main() {
    int C;
    scanf("%d", &C);

    while (C--) {
        long long N;
        scanf("%lld", &N);
        printf("%lld\n", calcularMcCarthy(N));
    }

    return 0;
}