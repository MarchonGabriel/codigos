#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct lista{
    int info;
    struct lista *prox;
}lista;

typedef struct pilha{
    lista *prim;
}pilha;

typedef struct fila{
    lista *inic;
    lista *fim;
}fila;
//Pilha
pilha *pilha_cria();
void pilha_push(pilha *p, int info);
int pilha_pop(pilha *p);
int pilha_vazia(pilha *p);
void pilha_libera(pilha *p);
void pilha_libera(pilha *p);
void pilha_imprime(pilha *p);

//Fila
fila *fila_cria();
fila *fila_enqueue(fila *f, int info);
int fila_dequeue(fila *f);
void fila_libera(fila *f);
void fila_imprime(fila *f);