#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;
const int MAX_N = 10000;

int main() {
    int T;
    cin >> T;

    vector<int> fib(MAX_N + 1);
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= MAX_N; ++i) {
        fib[i] = (fib[i - 1] + fib[i - 2]) % MOD;
    }

    while (T--) {
        int n;
        cin >> n;
        cout << fib[n] << endl;
    }

    return 0;
}
