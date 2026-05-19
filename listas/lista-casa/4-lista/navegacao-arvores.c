#include <stdio.h>
#include <stdlib.h>

typedef struct No {

    int valor;
    struct No *esquerda;
    struct No *direita;

} No;

No* criarNo(int valor) {

    No *novo = malloc(sizeof(No));

    novo->valor = valor;
    novo->esquerda = NULL;
    novo->direita = NULL;

    return novo;
}

No* inserir(No *raiz, int valor) {

    if (raiz == NULL) 
    {
        return criarNo(valor);
    }

    if (valor < raiz->valor) 
    {
        raiz->esquerda = inserir(raiz->esquerda, valor);
    } 
    else 
    {
        raiz->direita = inserir(raiz->direita, valor);
    }

    return raiz;
}

void infixa(No *raiz, int *primeiro) {

    if (raiz == NULL) 
    {
        return;
    }

    infixa(raiz->esquerda, primeiro);

    if (*primeiro) 
    {
        printf("%d", raiz->valor);

        *primeiro = 0;
    } 
    else 
    {
        printf(" %d", raiz->valor);
    }

    infixa(raiz->direita, primeiro);
}

void prefixa(No *raiz, int *primeiro) {

    if (raiz == NULL) 
    {
        return;
    }

    if (*primeiro) 
    {
        printf("%d", raiz->valor);

        *primeiro = 0;
    } 
    else 
    {
        printf(" %d", raiz->valor);
    }

    prefixa(raiz->esquerda, primeiro);
    prefixa(raiz->direita, primeiro);
}

void posfixa(No *raiz, int *primeiro) {

    if (raiz == NULL) 
    {
        return;
    }

    posfixa(raiz->esquerda, primeiro);
    posfixa(raiz->direita, primeiro);

    if (*primeiro) 
    {
        printf("%d", raiz->valor);

        *primeiro = 0;
    } 
    else 
    {
        printf(" %d", raiz->valor);
    }
}

int main() {

    int n;
    scanf("%d", &n);

    No *raiz = NULL;

    for (int i = 0; i < n; i++) 
    {
        int valor;

        scanf("%d", &valor);

        raiz = inserir(raiz, valor);
    }

    int primeiro;

    printf("In.: ");

    primeiro = 1;

    infixa(raiz, &primeiro);

    printf("\n");

    printf("Pre: ");

    primeiro = 1;

    prefixa(raiz, &primeiro);

    printf("\n");

    printf("Pos: ");

    primeiro = 1;

    posfixa(raiz, &primeiro);
    
    printf("\n");

    return 0;
}