#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int>H(n+1);
    for (int i = 1; i <=n; ++i){
        cin >> H[i];
    }

    const int INF = 1e9;
    vector<int>dp(n+1, INF);
    dp[1] = 0;

    for (int i = 2; i <= n; ++i){
        dp[i] = min(dp[i], dp[i-1] + abs(H[i]-H[i-1]));

        if (i-2 >= 1)
        dp[i] = min(dp[i], dp[i-2] + abs(H[i]-H[i-2]));

        if (i-3 >= 1)
        dp[i] = min(dp[i], dp[i-3] + abs(H[i]-H[i-3]));
    }

    cout << dp[n] << "\n";

    return 0;
}
    