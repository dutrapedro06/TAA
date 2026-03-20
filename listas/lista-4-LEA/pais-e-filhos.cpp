#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> tree(N);
    for (int i = 0; i < N; ++i) {
        cin >> tree[i];
    }

    int C;
    cin >> C;

    while (C--) {
        int query;
        cin >> query;
        --query; // Ajusta para índice 0-based

        // Caso especial: árvore só tem um nó e é nulo
        if (N == 1 && tree[0] == -1) {
            cout << "NULL\n";
            continue;
        }

        if (tree[query] == -1) {
            cout << "NULL - NULL NULL\n";
            continue;
        }

        // Pai
        if (query == 0) {
            cout << "RAIZ - ";
        } else {
            int parentIndex = (query - 1) / 2;
            if (parentIndex < N && tree[parentIndex] != -1)
                cout << tree[parentIndex] << " - ";
            else
                cout << "NULL - ";
        }

        // Filho esquerdo
        int left = 2 * query + 1;
        if (left >= N || tree[left] == -1)
            cout << "NULL ";
        else
            cout << tree[left] << " ";

        // Filho direito
        int right = 2 * query + 2;
        if (right >= N || tree[right] == -1)
            cout << "NULL\n";
        else
            cout << tree[right] << "\n";
    }

    return 0;
}
