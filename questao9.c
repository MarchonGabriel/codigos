#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int comprimento(char *string);

int main(){


    return 0;
}


int comprimento(char *string){
    int acc=0;
    for(int i=0;string[i]!='\0';i++)
        acc++;
    return acc;
}