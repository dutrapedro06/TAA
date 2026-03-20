#include <iostream>
#include <queue>
using namespace std;

int main() {
    int P;
    cin >> P;

    queue<pair<int, int>> pedras;
    for (int i = 0; i < P; ++i) {
        int A, B;
        cin >> A >> B;
        pedras.push({A, B});
    }

    while (!pedras.empty()) {
        auto atual = pedras.front();
        pedras.pop();
        cout << atual.first << " " << atual.second << endl;

        if (!pedras.empty()) {
            auto proxima = pedras.front();
            if (proxima.first + proxima.second == 7) {
                pedras.pop();
                pedras.push(proxima);
            } else {
                pedras.pop();
            }
        }
    }

    return 0;
}
