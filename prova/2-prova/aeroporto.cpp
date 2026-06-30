#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> grafo;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, v;

    cin >> a >> v;

    grafo.resize(a + 1);

    vector<int> grau(a + 1, 0);

    for (int i = 0; i < v; i++)
    {
        int x, y;

        cin >> x >> y;

        grafo[x].push_back(y);
        grafo[y].push_back(x);

        grau[x]++;
        grau[y]++;
    }

    int maior = 0;

    for (int i = 1; i <= a; i++)
    {
        if (grau[i] > maior)
        {
            maior = grau[i];
        }
    }

    for (int i = a; i >= 1; i--)
    {
        if (grau[i] == maior)
        {
            cout << i << endl;
        }
    }

    return 0;
}