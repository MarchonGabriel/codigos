#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media(float *vetor, int tam);

int main(){


    return 0;
}


float media(float *vetor, int tam){
    float acc= 0.0;

    for(int i=0;i<tam;i++)
        acc+=vetor[i];
    return acc/(float)tam;
}