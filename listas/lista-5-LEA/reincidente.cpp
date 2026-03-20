#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, vector<int>> crimes;
    string S;
    int A;

    while (cin >> S >> A) {
        if (S == "fim" && A == 0) break;

        crimes[S].push_back(A);

        if (crimes[S].size() == 1) {
            cout << S << " eh reu primario" << endl;
        } else {
            cout << S << " eh reincidente com " << crimes[S].size() - 1 << " crime(s)" << endl;
        }
    }
    return 0;
}