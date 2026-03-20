#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> precos(N);
    for (int i = 0; i < N; ++i) {
        cin >> precos[i];
    }

    // Ordena os preços dos cafés para facilitar a busca
    sort(precos.begin(), precos.end());

    int P;
    cin >> P;

    while (P--) {
        int Q;
        cin >> Q;

        // upper_bound retorna o primeiro preço > Q
        // a posição desse elemento é o número de cafés que custam <= Q
        int tipos = upper_bound(precos.begin(), precos.end(), Q) - precos.begin();
        cout << tipos << endl;
    }

    return 0;
}
