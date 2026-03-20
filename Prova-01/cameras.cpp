#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    unsigned long long result = 0;

    for (int i = 0; i < N; ++i){
        int aluno;
        cin >> aluno;
        result |= (1ULL << aluno);
    }
    cout << result << endl;

    return 0;
}