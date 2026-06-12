#include <bits/stdc++.h>
using namespace std;

int main (){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> cabos;
    
    for (int i = 0; i < n; i++)
    {
        int valor;

        cin >> valor;

        cabos.push(valor);
    }
    
    int custo = 0;

    while (cabos.size() > 1)
    {
        int a = cabos.top();

        cabos.pop();

        int b = cabos.top();

        cabos.pop();

        custo = custo + b;

        int novoValor = a + b;

        cabos.push(novoValor);
    }
    
    cout << custo << "\n";

    return 0;
}