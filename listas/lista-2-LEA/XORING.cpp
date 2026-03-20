#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        string R, S, T = "";
        cin >> R >> S;
        for (int i = 0; i < R.size(); i++) {
            if (islower(R[i]) && islower(S[i])) {
                T += toupper(R[i]);
            } else if (isupper(R[i]) && isupper(S[i])) {
                T += R[i];
            } else {
                T += tolower(R[i]);
            }
        }
        cout << T << endl;
    }
    return 0;
}