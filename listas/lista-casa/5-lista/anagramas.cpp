#include <bits/stdc++.h>
using namespace std;

int main (){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin >> t;

    while (t --)
    {
        string palavra1, palavra2;

        cin >> palavra1 >> palavra2;

        if (palavra1.size() != palavra2.size())
        {
            cout << "DIFERENTES\n";
        }
        else
        {
            sort(palavra1.begin(), palavra1.end());

            sort(palavra2.begin(), palavra2.end());

            if (palavra1 == palavra2)
            {
                cout << "ANAGRAMAS\n";
            }
            else
            {
                cout << "DIFERENTES\n";
            }
        }
    }        

 return 0;   

}