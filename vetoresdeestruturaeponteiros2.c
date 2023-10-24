#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct aluno{
    int matri;
    char nome[81];
    char endereco[81];
    char tel[12];
}Aluno;

int main(void){
    Aluno turma[30];

    for(int i = 0; i<30;i++){
        turma[i].matri=i+1;
        scanf("%80[^\n]", turma[i].nome);
        scanf("%80[^\n]", turma[i].endereco);
        scanf("%11[^\n]", turma[i].tel);
    }

    return 0;
}