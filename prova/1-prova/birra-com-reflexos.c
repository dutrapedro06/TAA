/*
q por p
p por q
b por d
d por b
*/

#include <stdio.h>
#include <string.h>

int main() {

    int f;

    char s[1005];

    char resposta[1005];

    scanf("%d", &f);

    getchar();

    while (f--) {

        fgets(s, 1005, stdin);

        s[strcspn(s, "\n")] = '\0';

        int tamanho = strlen(s);

        int j = 0;

        for (int i = tamanho - 1; i >= 0; i--) {

            if (s[i] == 'q') {

                resposta[j] = 'p';
            }

            else if (s[i] == 'p') {

                resposta[j] = 'q';
            }

            else if (s[i] == 'b') {

                resposta[j] = 'd';
            }

            else if (s[i] == 'd') {

                resposta[j] = 'b';
            }
            
            else {

                resposta[j] = s[i];
            }

            j++;
        }

        resposta[j] = '\0'; //para o printf saber onde termina e o programa não imprimir lixo, colocamos isso
        //pq toda string precisa terminar com o '\0'

        printf("%s\n", resposta);
    }

    return 0;
}