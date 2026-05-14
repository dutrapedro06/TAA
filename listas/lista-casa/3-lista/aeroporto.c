#include <stdio.h>
#include <string.h>

#define MAX 200000
#define TAM 25

int main() {
    char norte[MAX][TAM], sul[MAX][TAM], leste[MAX][TAM], oeste[MAX][TAM];
    int qn = 0, qs = 0, ql = 0, qo = 0;

    char entrada[TAM];
    char direcao = '\0';

    while (scanf("%24s", entrada) == 1) {
        if (strcmp(entrada, "0") == 0) {
            break;
        }

        if (strcmp(entrada, "N") == 0 || strcmp(entrada, "S") == 0 ||
            strcmp(entrada, "L") == 0 || strcmp(entrada, "O") == 0) {
            direcao = entrada[0];
        } else {
            if (direcao == 'N') {
                strcpy(norte[qn], entrada);
                qn++;
            } else if (direcao == 'S') {
                strcpy(sul[qs], entrada);
                qs++;
            } else if (direcao == 'L') {
                strcpy(leste[ql], entrada);
                ql++;
            } else if (direcao == 'O') {
                strcpy(oeste[qo], entrada);
                qo++;
            }
        }
    }

    int iN = 0, iS = 0, iL = 0, iO = 0;
    int primeiro = 1;

    while (iN < qn || iS < qs || iL < ql || iO < qo) {
        if (iN < qn) {
            if (!primeiro) printf(" ");
            printf("%s", norte[iN]);
            primeiro = 0;
            iN++;
        }

        if (iS < qs) {
            if (!primeiro) printf(" ");
            printf("%s", sul[iS]);
            primeiro = 0;
            iS++;
        }

        if (iL < ql) {
            if (!primeiro) printf(" ");
            printf("%s", leste[iL]);
            primeiro = 0;
            iL++;
        }

        if (iO < qo) {
            if (!primeiro) printf(" ");
            printf("%s", oeste[iO]);
            primeiro = 0;
            iO++;
        }
    }

    printf("\n");

    return 0;
}

/*Código em C++ 

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> norte, sul, leste, oeste;
    string entrada;
    char direcao = '\0';

    while (cin >> entrada) {
        if (entrada == "0") {
            break;
        }

        if (entrada == "N" || entrada == "S" || entrada == "L" || entrada == "O") {
            direcao = entrada[0];
        } else {
            if (direcao == 'N') {
                norte.push_back(entrada);
            } else if (direcao == 'S') {
                sul.push_back(entrada);
            } else if (direcao == 'L') {
                leste.push_back(entrada);
            } else if (direcao == 'O') {
                oeste.push_back(entrada);
            }
        }
    }

    int iN = 0, iS = 0, iL = 0, iO = 0;
    bool primeiro = true;

    while (iN < (int)norte.size() || iS < (int)sul.size() ||
           iL < (int)leste.size() || iO < (int)oeste.size()) {

        if (iN < (int)norte.size()) {
            if (!primeiro) cout << " ";
            cout << norte[iN];
            primeiro = false;
            iN++;
        }

        if (iS < (int)sul.size()) {
            if (!primeiro) cout << " ";
            cout << sul[iS];
            primeiro = false;
            iS++;
        }

        if (iL < (int)leste.size()) {
            if (!primeiro) cout << " ";
            cout << leste[iL];
            primeiro = false;
            iL++;
        }

        if (iO < (int)oeste.size()) {
            if (!primeiro) cout << " ";
            cout << oeste[iO];
            primeiro = false;
            iO++;
        }
    }

    cout << "\n";

    return 0;
}
*/