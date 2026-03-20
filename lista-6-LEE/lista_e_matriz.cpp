#include <iostream>
#include <vector>

using namespace std;

int main() {
    int V;
    cin >> V;

    vector<vector<int>> matriz(V, vector<int>(V, 0));

    for (int i = 0; i < V; ++i) {
        int E;
        cin >> E;
        for (int j = 0; j < E; ++j) {
            int adj;
            cin >> adj;
            // Subtrai 1 porque os índices em C++ começam do zero
            matriz[i][adj - 1] = 1;
        }
    }

    // Impressão da matriz de adjacência
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            cout << matriz[i][j];
            if (j < V - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}