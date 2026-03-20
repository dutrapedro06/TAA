#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    string palavra;

    while (N--) {
        cin >> palavra;
        unordered_set<char> letras;
        bool heterograma = true;

        for (char c : palavra) {

            if (letras.count(c)) {
                heterograma = false;
                break;
            }
            letras.insert(c);
        }

        if (heterograma)
            cout << "STRONGRAMA" << endl;
        else
            cout << "WEAKORD" << endl;
    }

    return 0;
}