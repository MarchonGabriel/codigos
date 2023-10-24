#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto{
        float x;
        float y;
    };

int main(){
    struct ponto p1;
    printf("Digite o valor do ponto X: ");
    scanf("%f", &p1.x);
    printf("Digite o valor do ponto Y: ");
    scanf("%f", &p1.y);
    printf("\n");
    printf("O ponto X eh = %.2f, e o ponto Y eh = %.2f", p1.x, p1.y);

    return 0;
}