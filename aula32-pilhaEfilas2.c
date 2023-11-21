#include <stdio.h>
#include <stdlib.h>
#include <math.h> 


typedef struct lista{
    int info;
    struct lista *prox;
}lista;

typedef struct fila{
    lista *prim;
    lista *ultm;
}fila;

fila *fila_cria();
void fila_enqueue(fila *f, int info);
int fila_dequeue(fila *f);
void fila_imprime(fila *f);
void fila_libera(fila *f);

int main(){

    return 0;
}

