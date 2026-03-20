#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, C;
    cin >> N >> C;

    vector<int> tree(N + 1);

    for (int i = 1; i <= N; ++i) {
        cin >> tree[i];
    }

    while (C--) {
        int query;
        cin >> query;

        if (tree.size() == 2) {
            cout << "NULL\n";
            continue;
        }

        int leftIndex = 2 * query;
        int rightIndex = 2 * query + 1;
        
        if (leftIndex >= tree.size() || tree[leftIndex] == -1) {
            cout << "NULL ";
        } else {
            cout << tree[leftIndex] << " ";
        }

        if (rightIndex >= tree.size() || tree[rightIndex] == -1) {
            cout << "NULL\n";
        } else {
            cout << tree[rightIndex] << "\n";
        }
    }

    return 0;
}
