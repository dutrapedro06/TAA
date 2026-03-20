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

    int eh_primo_gemeo(int num){
        if (!eh_primo(num)) return 0;
        return eh_primo (num - 2) || eh_primo(num + 2);
    }

int main() {
    int quantidade, numero;
    scanf("%d", &quantidade);
    
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &numero);
        if (eh_primo_gemeo(numero)) {
            printf("O numero %d eh um primo gemeo\n", numero);
        } else {
            printf("O numero %d nao eh um primo gemeo\n", numero);
        }
    }
    
    return 0;
}