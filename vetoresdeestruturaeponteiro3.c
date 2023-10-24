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
    Aluno *turma[30];
    int qtd=0;

    for(int i = 0; i<30;i++){
        turma[i]=NULL;
    }
    scanf("%d%*c", &qtd);

    for(int i = 0; i<qtd;i++){
        turma[i]=(Aluno*)malloc(sizeof(Aluno));
        turma[i]->matri=i;
        scanf("%80[^\n]%*c", turma[i]->nome);
        scanf("%80[^\n]%*c", turma[i]->endereco);
        scanf("%11[^\n]%*c", turma[i]->tel);
    }

    return 0;
}