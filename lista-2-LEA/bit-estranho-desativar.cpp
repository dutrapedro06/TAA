#include <iostream>
using namespace std;

int main(){
    int n, b;
    cin >> n >> b;

    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;

        v &= ~(1 << b);
        cout << v << endl;
    }
    return 0;
}
