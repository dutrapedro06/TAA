#include <bits/stdc++.h>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    unordered_map<string, int> contagem_nomes;

    for (int i = 0; i < N; ++i){
        string nome;
        cin >> nome;
        
    if (contagem_nomes.find(nome) == contagem_nomes.end()){
        cout << "OK\n";
        contagem_nomes[nome] = 1;
    
    }else {
        int count = contagem_nomes[nome];
        string novo_nome = nome + to_string(count);

        while(contagem_nomes.find(novo_nome) != contagem_nomes.end()){
            count++;
            novo_nome = nome + to_string(count);
        }

        cout << novo_nome << "\n";
        contagem_nomes[nome] = count + 1;
        contagem_nomes[novo_nome] = 1;

          }

    }
    return 0;
}