#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        set<char>st;
        string linha;

        for(int i = 0; i < n; i++){
            cin >> linha;

        for(char f : linha)
        st.insert(f);
        }

        cout << st.size() << "\n";

    }

    return 0;

}