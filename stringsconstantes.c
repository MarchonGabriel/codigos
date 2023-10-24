#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char *duplica(char *string);

int main(){
    int qtd_turma=0;
    char *turma[10];
    char nome[81];
    printf("Quantidades de alunos nessa turma: ");
    scanf("%d%*c", &qtd_turma);

    for(int i=0;i<qtd_turma;i++){
    scanf("%80[^\n]%*c", nome);
    turma[i]= duplica(nome);
    }
    return 0;
}


char *duplica(char *string){
    int i;
    for(i=0;string[i]!='\0';i++);
    
    char *copia =(char *)malloc((i+1)*sizeof(char));

    for(int j=0;j<i+1;j++){
        copia[j]=string[j];
    }
    return copia;
}