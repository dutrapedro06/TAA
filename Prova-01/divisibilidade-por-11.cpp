#include <bits/stdc++.h>

using namespace std;

int main(){
    int d;
    
        while(cin >> d && d != -1){
            string n;
            cin >> n;
            int soma_impar = 0;
            int soma_par = 0;

            for(int i = 0; i < n.size(); ++i){
                 int digito = n[i] - '0';
                 if (i%2 == 0)
                 {
                     soma_impar += digito;
                 }else{
                     soma_par += digito;
                 }
                 


        }
        int t = soma_impar - soma_par;
                 cout << n << ": " << soma_impar << " - " << soma_par << " = " << t << " - ";
                 if(abs(t) % 11 == 0){
                     cout << "sim" << endl;
                 }else{
                     cout << "nao" << endl;
                 }
        }
         return 0;
}