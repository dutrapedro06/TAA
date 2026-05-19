#include <stdio.h>
#include <string.h>
 
typedef struct {

    char nick[55];
    int minutos;
    int segundos;
    int tempoTotal;

} Jogador;
 
Jogador players[100001];
Jogador aux[100001];
 
int vemAntes(Jogador a, Jogador b) {
    
    if (a.tempoTotal > b.tempoTotal) {
        return 1;
    }
 
    if (a.tempoTotal < b.tempoTotal) {
        return 0;
    }
 
    if (strcmp(a.nick, b.nick) > 0) {
        return 1;
    }
 
    return 0;
}
 
void merge(int inicio, int meio, int fim) {
    
    int i = inicio;
    int j = meio + 1;
    int k = inicio;
 
    while (i <= meio && j <= fim) {
        
        if (vemAntes(players[i], players[j])) {
            aux[k] = players[i];
            i++;
        } else {
            aux[k] = players[j];
            j++;
        }
 
        k++;
    }
 
    while (i <= meio) {
        aux[k] = players[i];
        i++;
        k++;
    }
 
    while (j <= fim) {
        aux[k] = players[j];
        j++;
        k++;
    }
 
    for (int x = inicio; x <= fim; x++) {
        players[x] = aux[x];
    }
}
 
void mergeSort(int inicio, int fim) {
    
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;
 
        mergeSort(inicio, meio);
        mergeSort(meio + 1, fim);
 
        merge(inicio, meio, fim);
    }
}
 
int main() {
    int j;
 
    scanf("%d", &j);
 
    for (int i = 0; i < j; i++) {
        scanf("%s %d:%d", players[i].nick, &players[i].minutos, &players[i].segundos);
 
        players[i].tempoTotal = players[i].minutos * 60 + players[i].segundos;
    }
 
    mergeSort(0, j - 1);
 
    for (int i = 0; i < j; i++) {
        printf("%d. %02d:%02d - %s\n", i + 1, players[i].minutos, players[i].segundos, players[i].nick);
    }
 
    return 0;
}