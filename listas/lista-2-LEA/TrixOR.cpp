#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, Y;
        cin >> A >> B >> Y;

        int C = A ^ B ^ Y;

        cout << C << endl;
    }

    return 0;
}
