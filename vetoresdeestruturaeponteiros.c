#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto{
    float x;
    float y;
}Ponto;

void preencher_vetor(int n, Ponto *v);
Ponto centro_geometrico(int n, Ponto *v);
float area_figura(int n, Ponto *v);

int main(){
    Ponto p[7];

    preencher_vetor(7,p);

    Ponto cg = centro_geometrico(7,p);

    /*for(int i = 0;i < 7;i++)
        j= (i+1)%7; */

    printf("A area da figura eh de: %f", area_figura(n,v));

    return 0;
}


void preencher_vetor(int n, Ponto *v){
    for(int i = 0; i < n; i++){
        printf("Digite o valor de X no ponto %d:", i+1);
        scanf("%f", &v[i].x);
        printf("Digite o valor de Y no ponto %d:", i+1);
        scanf("%f", &v[i].y);
    }
}


Ponto centro_geometrico(int n, Ponto *v){
    Ponto p;
    p.x=0,p.y=0;
    for(int i = 0; i < n;i++){
        p.x+=v[i].x;
        p.y+=v[i].y;
    }
    p.x=p.x/(float)n;
    p.y=p.y/(float)n;
    return p;
}

float area_figura(int n, Ponto *v){
    float soma=0.0;
    int j=0;
    for(int i = 0; i < n;i++){
    j= (i+1)%n;

    soma+=((v[i].y+v[j].y)*(v[j].x-v[i].x))/2.0;
    }
    return soma;
}