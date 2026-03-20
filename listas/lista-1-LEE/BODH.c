#include <stdio.h>
#include <stdlib.h>

// Função para converter decimal para binário
typedef struct {
    int bits[64];
    int tamanho;
} Binario;

Binario decimalParaBinario(unsigned long long n) {
    Binario bin;
    bin.tamanho = 0;
    while (n > 0) {
        bin.bits[bin.tamanho++] = n % 2;
        n /= 2;
    }
    return bin;
}

// Função para imprimir o número binário
void imprimirBinario(Binario bin) {
    if (bin.tamanho == 0) printf("0");
    for (int i = bin.tamanho - 1; i >= 0; i--) {
        printf("%d", bin.bits[i]);
    }
    printf("\n");
}

// Função para converter decimal para octal e imprimir
void decimalParaOctal(unsigned long long n) {
    if (n == 0) {
        printf("0\n");
        return;
    }
    char octal[22]; // Máximo de 22 dígitos para 2^63
    int i = 0;
    while (n > 0) {
        octal[i++] = (n % 8) + '0';
        n /= 8;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", octal[j]);
    }
    printf("\n");
}

// Função para converter decimal para hexadecimal e imprimir
void decimalParaHexadecimal(unsigned long long n) {
    if (n == 0) {
        printf("0\n");
        return;
    }
    char hex[17] = "0123456789ABCDEF";
    char hexadecimal[16];
    int i = 0;
    while (n > 0) {
        hexadecimal[i++] = hex[n % 16];
        n /= 16;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

int main() {
    unsigned long long N;
    int B;
    while (1) {
        scanf("%llu %d", &N, &B);
        if (N == -1 && B == -1) break;
        
        if (B == 2) {
            Binario bin = decimalParaBinario(N);
            imprimirBinario(bin);
        } else if (B == 8) {
            decimalParaOctal(N);
        } else if (B == 10) {
            printf("%llu\n", N);
        } else if (B == 16) {
            decimalParaHexadecimal(N);
        }
    }
    return 0;
}