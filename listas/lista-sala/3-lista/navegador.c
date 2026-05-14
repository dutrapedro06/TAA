#include <stdio.h>// exemplo de pilha, navegador.c
#include <string.h>

#define MAX_N 10005 
#define MAX_S 105  

int main() {

    int N;

    scanf("%d", &N);

    char pilha[MAX_N][MAX_S];

    int topo = -1; 

    char acao[MAX_S]; 

    for (int i = 0; i < N; i++) {

        scanf("%s", acao);

        if (strcmp(acao, "<") == 0) { // Se a ação for "<" (voltar página)

            if (topo >= 0) { // Se a pilha não estiver vazia

                topo--;  // Remove a página atual (volta uma página)
            }

            if (topo >= 0) { // Se ainda existir alguma página na pilha

                printf("%s\n", pilha[topo]); // Mostra a página atual (nova do topo)

            } else {

                printf("pagina em branco\n"); // Se não tiver mais páginas
            }
        } 
        
        else { // Caso contrário, é uma nova página acessada

            topo++; // Sobe o topo da pilha (empilha nova página)

            strcpy(pilha[topo], acao); // Copia o nome da página para a pilha
            
            printf("%s\n", pilha[topo]); // Mostra a página atual
        }
    }

    return 0; // Finaliza o programa
}