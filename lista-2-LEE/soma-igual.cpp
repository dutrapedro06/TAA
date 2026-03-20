#include <iostream>
#include <vector>
using namespace std;

bool existeParComSoma(const vector<int>& v, int s) {
    int i = 0, j = v.size() - 1;
    while (i < j) {
        int soma = v[i] + v[j];
        if (soma == s)
            return true;
        else if (soma < s)
            i++;
        else
            j--;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); // <<< Acelera o cin/cout

    int T;
    cin >> T;
    
    while (T--) {
        int N, S;
        cin >> N;

        vector<int> v(N);
        for (int i = 0; i < N; i++) {
            cin >> v[i];
        }

        cin >> S;

        if (existeParComSoma(v, S))
            cout << "SIM\n";
        else
            cout << "NAO\n";
    }

    return 0;
}
