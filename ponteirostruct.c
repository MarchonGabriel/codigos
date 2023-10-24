#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto{
        float x;
        float y;
    };

int main(){
    struct ponto p;
    struct ponto *pp = &p;

    scanf("%f", &p.x);
    scanf("%f", &p.y);

    printf("%.2f", (*pp).x); // printf("%.2f", pp->x);

    return 0;
}