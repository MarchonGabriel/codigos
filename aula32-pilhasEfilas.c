#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

/* Aula 32 - Pilhas e Filas
Pilha -- O primeiro a entrar, é o ultimo a sair. Last in Lifo - First out. 
Push() - Pop()

Fila -- O primeiro a entrar, é o primeiro a sair. First in - First out.
dequeue(desenfilerar) - enqueue(enfilerar)
*/

typedef struct lista{
    int info;
    struct lista *prox;
}lista;

typedef struct pilha{
    lista *prim;
}pilha;

typedef struct pilha pilha;
typedef pilha *ppilha;

ppilha criar_pilha();
ppilha pilha_push(ppilha pilha, int info);
ppilha pilha_pop(ppilha pilha, int *info);
void pilha_limpar(ppilha *pilha);
void imprime_pilha(ppilha pilha);
void libera_imprime(ppilha p);

int main(){


    return 0;
}


ppilha criar_pilha(void){
    return NULL;
}

ppilha pilha_push(ppilha pilha, int info){
    ppilha novo = (ppilha)malloc(sizeof(pilha));
    
    novo->info=info;
    novo->prox=pilha;
    
    return novo;
}

ppilha pilha_pop(ppilha pilha, int *info){
    ppilha aux = pilha;
    pilha=pilha->prox;
    *info=aux->info;

    free(aux);
    
    return pilha;
}

void pilha_limpar(ppilha *pilha){
    free(pilha);
}

void imprime_pilha(ppilha pilha){
    while(pilha!=NULL){
        printf("%d\n", pilha->info);
        pilha=pilha->prox;
    }
}