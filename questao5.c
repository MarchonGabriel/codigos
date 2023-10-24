#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void minusculo(char *str);

int main(){


    return 0;
}


void minusculo(char *str){
    for(int i=0; str[i]!='\0';i++)
        if(str[i]>='A' && str[i]<='Z');
            str[i]+= 'a' - 'A';
}