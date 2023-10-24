#include <stdio.h>

// Aula 25 - Tipos abstratos de Dados
// modulos: são os includes

pponto ponto_cria(float x, float y){
    pponto pp=(pponto)malloc(sizeof(ponto));
pp->x=x;
pp->y=y;
    return pp;
}
void ponto_libera(pponto p){
    free(p);
}
void ponto_acessa(pponto p, float *x, float *y){
    *x=p->x;
    *y=p->y;
}
float ponto_ler_x(){

}
float ponto_ler_y(){

}
void ponto_escrever_x(pponto p, float x){

}
void ponto_escrever_y(pponto p, float y){

}
float distancia(pponto p1, pponto p2){
    return sqrt(pow(p1-> x - p2->x, 2)+ pow(p1-> y - p2-> y, 2));
}
