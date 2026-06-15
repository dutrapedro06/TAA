#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int V;

    cin >> V;

    vector<vector<int>> matriz(V, vector<int>(V, 0));

    for (int i = 0; i < V; i++) {

        int E;

        cin >> E;

        for (int j = 0; j < E; j++) {

            int A;

            cin >> A;

            matriz[i][A - 1] = 1;
        }
    }

    for (int i = 0; i < V; i++) {

        for (int j = 0; j < V; j++) {

            cout << matriz[i][j];

            if (j < V - 1)
            {
                cout << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}