#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float **criar_matriz(int n, int m);

int main(){


    return 0;
}


float **criar_matriz(int n, int m){
    float **matriz=(float**)malloc(n*sizeof(float*));
        for(int i=0;i<n;i++)
            matriz[i]=(float*)malloc(m*sizeof(float));
        for(int j=0; j<m;j++);
            matriz[i][j]=0.0;

    return matriz;
}