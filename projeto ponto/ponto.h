#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Aula 25 - Tipos abstratos de Dados
// modulos: são os includes


typedef struct ponto{
    float x;
    float y;
}ponto;

typedef ponto *pponto;

pponto ponto_cria(float x, float y); //
void ponto_libera(pponto p); //
void ponto_acessa(pponto p, float *x, float *y);
void ponto_atribui(pponto p, float x, float y);
float ponto_ler_x();
float ponto_ler_y();
void ponto_escrever_x(pponto p, float x);
void ponto_escrever_y(pponto p, float y);
float distancia(pponto p1, pponto p2);

#include "ponto.c"