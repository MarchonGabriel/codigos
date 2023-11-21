#include "ponto.h"
#include <stdio.h>

int main(){
    pponto p1 = ponto_cria(2.0, 1.0);
    pponto p2 = ponto_cria(3.4,2.1);
    printf("A distancia entre p1 e p2 é: %.2f", distancia(p1,p2));
    ponto_libera(p1);
    ponto_libera(p2);
    return 0;
}