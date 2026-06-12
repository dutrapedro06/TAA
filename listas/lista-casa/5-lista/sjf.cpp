#include <bits/stdc++.h>
using namespace std;

int main (){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    priority_queue<pair<int, string>> fila;

    for (int i = 0; i < n; i++)
    {
        string nome;

        int numero;

        cin >> nome >> numero;

        fila.push({numero, nome});
    }

    while (fila.size() > 0)
    {
        int tempo = fila.top().first;

        string nome = fila.top().second;

        cout << nome << " " << tempo << "\n";

        fila.pop();

        if (tempo > 1)
        {
            fila.push({tempo / 2, nome});
        }
    }
    
    return 0;
}