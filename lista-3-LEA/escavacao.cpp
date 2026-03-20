#include <bits/stdc++.h>
using namespace std;

int contarPedras(string bloco) {
    stack<char> pilha;
    int contador = 0;

    for (char c : bloco) {
        if (c == '<') {
            pilha.push(c);
        } else if (c == '>' && !pilha.empty()){
            pilha.pop();
            contador++;
        }
    }

return contador;

}

int main () {
    int N;
    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++) {
        string linha;
        getline (cin, linha);
        cout << contarPedras(linha) << endl;

    }

    return 0;
}