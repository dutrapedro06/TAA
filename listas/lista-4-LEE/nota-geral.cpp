#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false); // acelera leitura/escrita
    std::cin.tie(nullptr);

    int A;
    std::cin >> A;

    std::vector<int> notas(A);

    for (int i = 0; i < A; ++i) {
        std::cin >> notas[i];
    }

    std::sort(notas.begin(), notas.end());

    for (int nota : notas) {
        std::cout << nota << '\n';
    }

    return 0;
}
