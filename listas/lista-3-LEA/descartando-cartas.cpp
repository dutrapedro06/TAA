#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> baralho;
    for (int i = N; i >= 1; --i){
        baralho.push(i);
    }
    
    vector<int> descartadas;

    while (baralho.size() > 1){
        descartadas.push_back(baralho.front());
        baralho.pop();
        
        int cima = baralho.front();
        baralho.pop();
        baralho.push(cima);
    }

    cout << "Descarte: ";
    for(size_t i = 0; i < descartadas.size(); ++i){
        cout << (i == 0 ? "" : ", ") << descartadas[i];
    }
    cout << endl;

    cout << "Ultima carta: " << baralho.front() << endl;

    return 0;
    
}