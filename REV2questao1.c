#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct no{
    int info;
    struct no *prox;
}No;

void lista_insere(No **no, int info);

int main(){
No=lista=NULL;
lista_insere(lista, 10);

}


void lista_insere(No **no, int info){
No *novo=(no*)malloc(sizeof(no));

if(!novo){
    printf("Não tivemos memoria!\n");
    exit(1);
}
novo->info=info;
novo->prox=*no;
*no=novo;

}