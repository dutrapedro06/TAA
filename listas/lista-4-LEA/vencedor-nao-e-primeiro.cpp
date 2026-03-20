#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int P, R;
    cin >> P >> R;

    multiset<int> cadeiras;
    for (int i = 0; i < P; ++i) {
        int cadeira;
        cin >> cadeira;
        cadeiras.insert(cadeira);

        int pos = (R <= cadeiras.size()) ? R - 1 : cadeiras.size() - 1;

        auto it = cadeiras.begin();
        advance(it, pos); // avança para a posição correta
        cout << *it << '\n';
    }

    return 0;
}