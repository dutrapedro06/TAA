#include <bits/stdc++.h>
using namespace std;

int main(){


    string expressao;
    getline(cin, expressao);

    stack<char> pilha;
    bool erro = false;

    unordered_map<char, char> pares = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    for (char c : expressao) {
        if (c == '(' || c == '[' || c == '{') {
            pilha.push(c);
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (pilha.empty() || pilha.top() != pares[c]) {
                erro = true;
                break;
            }
            pilha.pop();
        }
    }
    

    if (!pilha.empty()) {
        erro = true;
    }

    if(erro == true){
        cout << "SyntaxError" << endl;
    }else{
        cout << "OK" << endl;
    }

    return 0;
}