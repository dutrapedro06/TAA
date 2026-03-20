#include <iostream>
#include <bitset>

using namespace std;
int main()
{
    int tamanho;
    cin >> tamanho;
    
    while (tamanho --)
    {
        unsigned long long num1, num2;
        cin >> num1 >> num2;
        
        int distanciaHaming = __builtin_popcountll(num1 ^ num2);
        
        cout << distanciaHaming << endl;
    }
    
    return 0;
}