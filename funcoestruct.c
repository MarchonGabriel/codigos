#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef float real;

typedef struct ponto{
        real x;
        real y;
    }ponto;

typedef ponto* pponto;

// void imprime_ponto(struct ponto *p);
float distancia(pponto p1, pponto p2);

int main(){
    ponto p1, p2;
    pponto *pp1 = &p1;
    pponto *pp2 = &p2;

    scanf("%f", &p1.x);
    scanf("%f", &p1.y);

    scanf("%f", &p2.x);
    scanf("%f", &p2.y);

    // imprime_ponto(&p);

    printf("%f", distancia(&p1, &p2));

    return 0;
}


/* void imprime_ponto(struct ponto *p){
    printf("%.2f, %.2f", p->x, p->y);
}
*/

float distancia(pponto p1, pponto p2){
    return sqrt(pow(p1-> x - p2->x, 2)+ pow(p1-> y - p2-> y, 2));
}