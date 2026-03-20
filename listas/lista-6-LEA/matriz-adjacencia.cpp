#include <iostream>
#include <vector>

using namespace std;

int main() {
    int V, C;
    cin >> V >> C;

    // Inicializa a matriz de adjacência com 0s
    vector<vector<int>> matriz(V, vector<int>(V, 0));

    // Leitura das conexões
    for (int i = 0; i < C; i++) {
        int A, B;
        cin >> A >> B;
        // Decrementa para usar índice começando do 0
        matriz[A - 1][B - 1] = 1;
        matriz[B - 1][A - 1] = 1;  // Como o grafo é não direcionado
    }

    // Impressão da matriz de adjacência
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << matriz[i][j];
            if (j != V - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
