#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, Y;
        cin >> A >> B >> Y;

        // Verifica se A | B tem bits que Y não tem — se sim, é impossível
        if ((A | B) & ~Y) {
            cout << -1 << endl;
            continue;
        }

        int C = 0;
        for (int bit = 0; bit < 31; bit++) {
            int mask = 1 << bit;

            // Se o bit está em Y, mas não está em A nem em B, ele deve estar em C
            if ((Y & mask) && !(A & mask) && !(B & mask)) {
                C |= mask;
            }
        }

        cout << C << endl;
    }

    return 0;
}
