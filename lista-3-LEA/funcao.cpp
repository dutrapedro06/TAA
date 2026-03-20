#include <bits/stdc++.h>
using namespace std;

int main(){
    double A, B, C;
    cin >> A >> B >> C;

    double left = 0.0, right = 1e9;
    double mid;

    for (int i = 0; i < 100; i++) {
        mid = (left + right) /2;
        double fx = A * mid + B * sin(mid);
        if(fx < C) {
            left = mid;
        } else {
            right = mid;
        }
    }

    cout << fixed << setprecision(4) << mid << endl;

    return 0;
}