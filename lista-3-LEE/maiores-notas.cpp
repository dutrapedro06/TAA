#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int A, Q;
    cin >> A >> Q;

    vector<int> notas(A);
    for (int i = 0; i < A; ++i) {
        cin >> notas[i];
    }

    while (Q--) {
        int C;
        cin >> C;
        auto it = upper_bound(notas.begin(), notas.end(), C);
        int maiores = notas.end() - it;

        cout << maiores << " notas maiores que " << C << endl;
    }

    return 0;
}
