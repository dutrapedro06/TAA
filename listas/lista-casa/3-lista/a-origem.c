#include <stdio.h>
#include <string.h>
#define MAX_ACOES 100000
#define TAM_NOME 103

int main() {

    int A;

    scanf("%d", &A);

    char pilha[MAX_ACOES][TAM_NOME];

    int topo = -1;

    char comando[20];

    char nome[TAM_NOME];

    for (int i = 0; i < A; i++) {

        scanf("%s", comando);

        if (strcmp(comando, "infiltrar") == 0) {

            scanf("%s", nome);

            topo++;

            strcpy(pilha[topo], nome);
        } 
        else if (strcmp(comando, "chute") == 0) {

            if (topo >= 0) {

                topo--;
            }
        } 
        else if (strcmp(comando, "totem") == 0) {

            if (topo == -1) {

                printf("acordado\n");

            } else {

                printf("dentro do sonho de %s\n", pilha[topo]);
            }
        }
    }

    return 0;
}

/*Versão em C++

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {

    int A;

    cin >> A;

    stack<string> sonhos;

    string comando, nome;

    for (int i = 0; i < A; i++) {

        cin >> comando;

        if (comando == "infiltrar") {

            cin >> nome;

            sonhos.push(nome);
        }
        else if (comando == "chute") {

            if (!sonhos.empty()) {

                sonhos.pop();
            }
        }
        else if (comando == "totem") {

            if (sonhos.empty()) {

                cout << "acordado\n";
                
            } else {

                cout << "dentro do sonho de " << sonhos.top() << "\n";
            }
        }
    }

    return 0;
}
*/