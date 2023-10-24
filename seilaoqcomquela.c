#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



int main(int arg, char **argv){
    for(int i=0;i<arg;i++)
        printf("%s\n", argv[i]);
    return 0;
}