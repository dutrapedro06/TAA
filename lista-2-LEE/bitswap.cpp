#include <iostream>
#include <cstdint> // Para usar uint64_t corretamente
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        uint64_t N;
        int P, Q;
        cin >> N >> P >> Q;

        // Pega os bits nas posições P e Q
        int bitP = (N >> P) & 1;
        int bitQ = (N >> Q) & 1;

        // Se os bits forem diferentes, troca usando XOR
        if (bitP != bitQ) {
            N ^= (1ULL << P);
            N ^= (1ULL << Q);
        }

        cout << N << '\n';
    }

    return 0;
}
