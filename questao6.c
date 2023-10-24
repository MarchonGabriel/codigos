#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void shift_string(char *str);

int main(){


    return 0;
}


void shift_string(char *str){
    for(int i=0;str[i]!='\0';i++)
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'));
        str++;
}