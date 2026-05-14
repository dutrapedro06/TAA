#include <stdio.h>

int main (){

    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    long long unsigned resultado = a ^ b ^ c ^ d;

    int s1 = resultado ^ a;

    int s2 = resultado ^ b;

    int s3 = resultado ^ c;

    int s4 = resultado ^ d;

    printf("%d %d %d %d\n", s1, s2, s3, s4);

    return 0;
}