#include <bits/stdc++.h>
using namespace std;

int main (){

    int t;

    cin >> t;

    while (t --)
    {
        string catalogo, pedras;

        cin >> catalogo >> pedras;

        string verificacao = "";

        for (int i = 0; i < catalogo.size(); i++)
        {

            int encontrou = verificacao.find(catalogo[i]);

            if (encontrou == -1)
            {
                verificacao.push_back(catalogo[i]);
            }
        }
    
        int contador = 0;

        for (int i = 0; i < pedras.size(); i++)
        {
            if(verificacao.find(pedras[i]) != -1)
            {
                contador ++;
            }
        }
        
        cout <<"Contem " << contador << " pedras negociaveis\n";
    }

 return 0;   

}