#include <stdio.h>
#include <string.h>

#define MAX 1003

int eh_abertura(char c) {

    return c == '(' || c == '[' || c == '{';
}

int combina(char abertura, char fechamento) {

    return (abertura == '(' && fechamento == ')') || (abertura == '[' && fechamento == ']') || (abertura == '{' && fechamento == '}');
}

int main() {

    char s[MAX];
    char pilha[MAX];
    int topo = -1;

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {

        if (eh_abertura(s[i])) {

            topo++;

            pilha[topo] = s[i];

        } else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {

            if (topo == -1) {

                printf("SyntaxError\n");

                return 0;
            }

            if (!combina(pilha[topo], s[i])) {

                printf("SyntaxError\n");

                return 0;
            }

            topo--;
        }
    }

    if (topo == -1) {

        printf("OK\n");

    } else {

        printf("SyntaxError\n");
    }

    return 0;
}

/*Código em C++
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool eh_abertura(char c) {
    return c == '(' || c == '[' || c == '{';
}

bool combina(char abertura, char fechamento) {
    return (abertura == '(' && fechamento == ')') ||
           (abertura == '[' && fechamento == ']') ||
           (abertura == '{' && fechamento == '}');
}

int main() {
    string s;
    stack<char> pilha;

    cin >> s;

    for (int i = 0; i < (int)s.size(); i++) {
        if (eh_abertura(s[i])) {
            pilha.push(s[i]);
        } else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
            if (pilha.empty()) {
                cout << "SyntaxError\n";
                return 0;
            }

            if (!combina(pilha.top(), s[i])) {
                cout << "SyntaxError\n";
                return 0;
            }

            pilha.pop();
        }
    }

    if (pilha.empty()) {
        cout << "OK\n";
    } else {
        cout << "SyntaxError\n";
    }

    return 0;
}
*/