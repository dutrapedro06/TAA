#include <iostream>
#include <queue>

using namespace std;

int main() {
    long long F, D;
    cin >> F >> D;

    queue<long long> ultimos30;
    long long soma = 0;

    for (int i = 0; i < 30; ++i) {
        long long x;
        cin >> x;
        soma += x;
        ultimos30.push(x);
    }

    // Simular D dias
    for (int i = 0; i < D; ++i) {
        long long media = (soma + 29) / 30;
        F += media;

        soma -= ultimos30.front(); 
        ultimos30.pop();

        soma += media;
        ultimos30.push(media);
    }

    cout << F << endl;
    return 0;
}
