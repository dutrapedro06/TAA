#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int P;
    cin >> P;

    priority_queue<pair<int, string>> heap;

    for (int i = 0; i < P; ++i) {
        string nome;
        int forca;
        cin >> nome >> forca;
        heap.push({forca, nome});
    }

    while (heap.size() >= 2) {
        auto a = heap.top(); heap.pop(); // mais forte
        auto b = heap.top(); heap.pop(); // segundo mais forte

        if (a.first == b.first) {
            cout << a.second << " (" << a.first << ") x (" << b.first << ") " << b.second << " : empate\n";
            // ambos eliminados
        } else {
            string vencedor, perdedor;
            int forcaV = a.first, forcaP = b.first;

            if (forcaV < forcaP) {
                swap(a, b);
                swap(forcaV, forcaP);
            }

            cout << a.second << " (" << a.first << ") x (" << b.first << ") " << b.second
                 << " : " << a.second << " venceu\n";

            int nova_forca = forcaV - forcaP;
            heap.push({nova_forca, a.second});
        }
    }

    if (heap.size() == 1) {
        auto vencedor = heap.top();
        cout << vencedor.second << " venceu com " << vencedor.first << "\n";
    } else {
        cout << "nenhum vencedor\n";
    }

    return 0;
}
