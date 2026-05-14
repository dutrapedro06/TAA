#include <stdio.h>

int main() {

    int t;

    unsigned int n;

    scanf("%d", &t);

    while (t--) {

        scanf("%u", &n);

        unsigned int resultado = (~n);

        resultado = resultado ^ 1;

        printf("%u\n", resultado);
    }

    return 0;
}