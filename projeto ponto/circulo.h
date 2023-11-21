#include "ponto.h"

// Aula 26 : TAD ponto + TAD circulo

/* 
TAD circulo
Dependeência de Módulos
    -#include "ponto.h"
Tipo exportado
*/

typedef struct circulo{
    float x;
    float y;
    float r;
} circulo;
typedef circulo *pcirculo;
/*
Funções exportadas
Funções Exportadas
Função cria
    -Aloca e retorna um círculo com centro(x,y) e raio R
*/
pcirculo circ_cria(float x, float y, float r);


/*
**Libera a memoria do círculo preciamente criado.
*/
void circ_libera(pcirculo c);


/*
**Retorna o valor da área do círculo
*/
float circ_area(pcirculo c);


/*
**Verifica se um dado ponto p está interior ao cículo.
*/
int circ_interior(pcirculo c, pponto p);