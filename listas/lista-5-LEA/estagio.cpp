#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();

    // Tentamos cada possível prefixo t de s
    for (int i = 1; i < n; ++i) {
        string t = s.substr(0, i);
        string tail = s.substr(i);

        // Criar uma versão ordenada e sem duplicatas de t
        set<char> letters(t.begin(), t.end());
        string filtered(letters.begin(), letters.end());

        // Verifica se bate com a parte final da string original
        if (filtered == tail) {
            cout << filtered << endl;
            return 0;
        }
    }

    // Caso não encontre (teoricamente não deveria acontecer com entradas válidas)
    cerr << "Entrada inválida!" << endl;
    return 1;
}
