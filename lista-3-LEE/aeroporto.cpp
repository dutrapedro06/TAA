#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> norte, sul, leste, oeste;
    string linha, direcaoAtual;

    while (cin >> linha && linha != "0") {
        if (linha == "N" || linha == "S" || linha == "L" || linha == "O") {
            direcaoAtual = linha;
        } else {
            if (direcaoAtual == "N") norte.push(linha);
            else if (direcaoAtual == "S") sul.push(linha);
            else if (direcaoAtual == "L") leste.push(linha);
            else if (direcaoAtual == "O") oeste.push(linha);
        }
    }

    bool primeira = true;
    while (!norte.empty() || !sul.empty() || !leste.empty() || !oeste.empty()) {
        if (!norte.empty()) {
            if (!primeira) cout << " ";
            cout << norte.front();
            norte.pop();
            primeira = false;
        }
        if (!sul.empty()) {
            if (!primeira) cout << " ";
            cout << sul.front();
            sul.pop();
            primeira = false;
        }
        if (!leste.empty()) {
            if (!primeira) cout << " ";
            cout << leste.front();
            leste.pop();
            primeira = false;
        }
        if (!oeste.empty()) {
            if (!primeira) cout << " ";
            cout << oeste.front();
            oeste.pop();
            primeira = false;
        }
    }

    cout << endl;
    return 0;
}
