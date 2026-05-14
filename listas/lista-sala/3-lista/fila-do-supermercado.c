#include <stdio.h>   // Código de exemplo de fila
#include <string.h> 

#define MAX 10005   
#define TAM 20

int main() { 
    
    char comum[MAX][TAM]; // Cria uma matriz de caracteres para guardar a fila comum
    char preferencial[MAX][TAM]; // Cria uma matriz de caracteres para guardar a fila preferencial

    int iniC = 0, fimC = 0; // iniC é o início da fila comum, fimC é o final da fila comum
    int iniP = 0, fimP = 0; // iniP é o início da fila preferencial, fimP é o final da fila preferencial

    char s[TAM];

    while (scanf("%s", s) == 1) { // Enquanto conseguir ler uma palavra, continua o loop
        
        if (strcmp(s, "fim") == 0) { // Verifica se a palavra digitada foi "fim"
            
            break;
        }

        if (strcmp(s, "comum") == 0) // Verifica se a palavra digitada foi "comum"
        {
            
            strcpy(comum[fimC], s); // Copia a palavra "comum" para o final da fila comum
            
            fimC++; // Aumenta o final da fila comum, indicando que entrou mais uma pessoa
        } 
        
        else if (strcmp(s, "preferencial") == 0) { // Verifica se a palavra digitada foi "preferencial"
            
            strcpy(preferencial[fimP], s); // Copia a palavra "preferencial" para o final da fila preferencial
            
            fimP++; // Aumenta o final da fila preferencial, indicando que entrou mais uma pessoa
        }
    }

    while (iniC < fimC || iniP < fimP) { // Enquanto ainda tiver alguém em alguma das duas filas
        
        if (iniC < fimC) { // Se ainda tiver alguém na fila comum
            
            printf("%s\n", comum[iniC]); // Imprime a próxima pessoa da fila comum
            
            iniC++; // Anda o início da fila comum para a próxima posição
        } 
        else if (iniP < fimP) { // Se a fila comum acabou, mas ainda tem alguém na preferencial
            
            printf("%s\n", preferencial[iniP]); // Imprime a próxima pessoa da fila preferencial
            
            iniP++; // Anda o início da fila preferencial para a próxima posição
        }

        for (int i = 0; i < 2; i++) { // Repete duas vezes, tentando atender duas pessoas da fila preferencial
            
            if (iniP < fimP) { // Se ainda tiver alguém na fila preferencial
                
                printf("%s\n", preferencial[iniP]); // Imprime a próxima pessoa da fila preferencial
                
                iniP++; // Anda o início da fila preferencial para a próxima posição
            } 
            
            else if (iniC < fimC) { // Se a preferencial acabou, mas ainda tem alguém na comum
                
                printf("%s\n", comum[iniC]); // Imprime a próxima pessoa da fila comum
                
                iniC++; // Anda o início da fila comum para a próxima posição
            }
        }
    }

    return 0; // Finaliza o programa
}