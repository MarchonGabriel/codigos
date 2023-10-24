#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef float real;

typedef struct ponto{
        real x;
        real y;
    }ponto;

typedef ponto* pponto;

typedef struct circulo{
    real p;
    real r;
}circulo;

typedef circulo *pcirculo;

// float distancia(pponto p1, pponto p2);
int interno (pcirculo c, pponto p);

int main(){
    circulo c1;
    ponto p2;

    scanf("%f", &c1.p.x);
    scanf("%f", &c1.p.y);

    // printf("%f", distancia(&p1, &p2));

    scanf("%f", &c1.r);
    scanf("%f", &p2.x, &p2.y);

    return 0;
}


/* float distancia(pponto p1, pponto p2){
    return sqrt(pow(p1-> x - p2->x, 2)+ pow(p1-> y - p2-> y, 2));
}
*/

int interno (pcirculo c, pponto p){
    if(dist(c->p, p)<= c->r)
        printf("Eh interno");
    else
        printf("Nao eh interno");
}