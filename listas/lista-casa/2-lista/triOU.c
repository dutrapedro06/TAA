#include <stdio.h>

int main() {

    int t;

    scanf("%d", &t);

    while (t--) {

        unsigned long long A, B, Y;

        scanf("%llu %llu %llu", &A, &B, &Y);

        unsigned long long C = 0;

        int impossivel = 0;

        unsigned long long potencia = 1;

        for (int p = 0; p < 64; p++) {

            int bitA = (A / potencia) % 2;
            int bitB = (B / potencia) % 2;
            int bitY = (Y / potencia) % 2;

            if (bitY == 0) {
                if (bitA == 1 || bitB == 1) {

                    impossivel = 1;

                    break;
                }
            }

            else {
                if (bitA == 0 && bitB == 0) {

                    C = C + potencia;
                }
            }

            potencia = potencia * 2;
        }

        if (impossivel == 1) {

            printf("-1\n");

        } else {
            
            printf("%llu\n", C);
        }
    }

    return 0;
}

/* outra forma mais fácil:

#include <stdio.h>

int main() {
    int t;

    // lê a quantidade de casos de teste
    scanf("%d", &t);

    // loop para cada caso
    while (t--) {
        unsigned long long A, B, Y;

        // lê A e B
        scanf("%llu %llu", &A, &B);

        // lê Y
        scanf("%llu", &Y);

        // (A | B) → bits que já são 1 em A ou B
        // ~(Y) → inverte Y (onde Y tem 0, vira 1)
        // (A | B) & (~Y) → verifica se existe algum bit que:
        // é 1 em A ou B, mas deveria ser 0 em Y
        // se isso acontecer, é impossível formar Y
        if ((A | B) & (~Y)) {
            printf("-1\n");
            continue; // pula para o próximo caso
        }

        // ~(A | B) → bits onde A e B NÃO têm 1
        // Y & (~(A | B)) → pega só os bits que:
        // precisam ser 1 em Y, mas ainda não são em A ou B
        // esses são exatamente os bits que C precisa ter
        unsigned long long C = Y & (~(A | B));

        // imprime o menor C possível
        printf("%llu\n", C);
    }

    return 0;
}
*/