#include <stdio.h>

int combinacao(int n, int k) {

    if (k == 0 || k == n)
        return 1;

    return combinacao(n - 1, k - 1) + combinacao(n - 1, k);
}

int main() {

    int n, k;

    while (1) {

        scanf("%d %d", &n, &k);

        if (n == -1 && k == -1)
            break;

        int resultado = combinacao(n, k);

        printf("C(%d, %d) = %d\n", n, k, resultado);
    }

    return 0;
}