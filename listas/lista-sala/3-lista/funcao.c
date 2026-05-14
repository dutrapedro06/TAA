#include <stdio.h>
#include <math.h>

int main() {
    
    double A, B, C;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    double esquerda = 0.0, direita = 1e9;
    
    for (int i = 0; i < 200; i++) {
        
        double meio = (esquerda + direita) / 2.0;
        
        double valor = A * meio + B * cos(meio);
        
        if (valor < C)
        
            esquerda = meio;
            
        else
        
            direita = meio;
    }
    
    printf("%.4f\n", (esquerda + direita) / 2.0);
    
    return 0;
}