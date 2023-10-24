#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float *cria_vetor(int n);

int main(){


    return 0;
}


float *cria_vetor(int n){
    float *vetor =(float *)malloc(n*sizeof(float));
        for(int i=0; i<n;i++){
            vetor[i]=0;
        }
        return vetor;
}